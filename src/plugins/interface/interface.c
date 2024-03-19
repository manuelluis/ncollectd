/**
 * collectd - src/interface.c
 * Copyright (C) 2005-2020  Florian octo Forster
 * Copyright (C) 2009       Manuel Sanmartin
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; only version 2 of the License is applicable.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 *
 * Authors:
 *   Florian octo Forster <octo at collectd.org>
 *   Sune Marcher <sm at flork.dk>
 *   Manuel Sanmartin
 **/

#include "collectd.h"

#include "plugin.h"
#include "utils/common/common.h"
#include "utils/ignorelist/ignorelist.h"

#if HAVE_SYS_TYPES_H
#include <sys/types.h>
#endif

/* One cannot include both. This sucks. */
#if HAVE_LINUX_IF_H
#include <linux/if.h>
#elif HAVE_NET_IF_H
#include <net/if.h>
#endif

#if HAVE_LINUX_NETDEVICE_H
#include <linux/netdevice.h>
#endif
#if HAVE_IFADDRS_H
#include <ifaddrs.h>
#endif

#if HAVE_STATGRAB_H
#include <statgrab.h>
#endif

#if HAVE_PERFSTAT
#include <libperfstat.h>
#include <sys/protosw.h>
#endif

/*
 * Various people have reported problems with `getifaddrs' and varying versions
 * of `glibc'. That's why it's disabled by default. Since more statistics are
 * available this way one may enable it using the `--enable-getifaddrs' option
 * of the configure script. -octo
 */
#if KERNEL_LINUX
#if !COLLECT_GETIFADDRS
#undef HAVE_GETIFADDRS
#endif /* !COLLECT_GETIFADDRS */
#endif /* KERNEL_LINUX */

#if !HAVE_GETIFADDRS && !KERNEL_LINUX && !HAVE_LIBKSTAT &&                     \
    !HAVE_LIBSTATGRAB && !HAVE_PERFSTAT
#error "No applicable input method."
#endif

/*
 * (Module-)Global variables
 */
static const char *config_keys[] = {
    "Interface",
    "IgnoreSelected",
    "ReportInactive",
};
static int config_keys_num = STATIC_ARRAY_SIZE(config_keys);

static ignorelist_t *ignorelist;

static bool report_inactive = true;

#ifdef HAVE_LIBKSTAT
#if HAVE_KSTAT_H
#include <kstat.h>
#endif
#define MAX_NUMIF 256
extern kstat_ctl_t *kc;
static kstat_t *ksp[MAX_NUMIF];
static size_t numif;
static bool unique_name;
#endif /* HAVE_LIBKSTAT */

metric_family_t receive_bytes = {
    .name = "node_network_receive_bytes_total",
    .help = "Network device statistic receive_bytes.",
    .type = METRIC_TYPE_COUNTER,
};
metric_family_t receive_drop = {
    .name = "node_network_receive_drop_total",
    .help = "Network device statistic receive_drop.",
    .type = METRIC_TYPE_COUNTER,
};
metric_family_t receive_errs = {
    .name = "node_network_receive_errs_total",
    .help = "Network device statistic receive_errs.",
    .type = METRIC_TYPE_COUNTER,
};
metric_family_t receive_packets = {
    .name = "node_network_receive_packets_total",
    .help = "Network device statistic receive_packets.",
    .type = METRIC_TYPE_COUNTER,
};

metric_family_t transmit_bytes = {
    .name = "node_network_transmit_bytes_total",
    .help = "Network device statistic transmit_bytes.",
    .type = METRIC_TYPE_COUNTER,
};
metric_family_t transmit_drop = {
    .name = "node_network_transmit_drop_total",
    .help = "Network device statistic transmit_drop.",
    .type = METRIC_TYPE_COUNTER,
};
metric_family_t transmit_errs = {
    .name = "node_network_transmit_errs_total",
    .help = "Network device statistic transmit_errs.",
    .type = METRIC_TYPE_COUNTER,
};
metric_family_t transmit_packets = {
    .name = "node_network_transmit_packets_total",
    .help = "Network device statistic transmit_packets.",
    .type = METRIC_TYPE_COUNTER,
};

static int interface_config(const char *key, const char *value) {
  if (ignorelist == NULL)
    ignorelist = ignorelist_create(/* invert = */ 1);

  if (strcasecmp(key, "Interface") == 0) {
    ignorelist_add(ignorelist, value);
  } else if (strcasecmp(key, "IgnoreSelected") == 0) {
    int invert = 1;
    if (IS_TRUE(value))
      invert = 0;
    ignorelist_set_invert(ignorelist, invert);
  } else if (strcasecmp(key, "ReportInactive") == 0)
    report_inactive = IS_TRUE(value);
  else if (strcasecmp(key, "UniqueName") == 0) {
#ifdef HAVE_LIBKSTAT
    if (IS_TRUE(value))
      unique_name = true;
#else
    WARNING("interface plugin: the \"UniqueName\" option is only valid on "
            "Solaris.");
#endif /* HAVE_LIBKSTAT */
  } else {
    return -1;
  }

  return 0;
}

#if HAVE_LIBKSTAT
static int interface_init(void) {
  kstat_t *ksp_chain;

  numif = 0;

  if (kc == NULL)
    return -1;

  for (numif = 0, ksp_chain = kc->kc_chain;
       (numif < MAX_NUMIF) && (ksp_chain != NULL);
       ksp_chain = ksp_chain->ks_next) {
    if (strncmp(ksp_chain->ks_class, "net", 3))
      continue;
    if (ksp_chain->ks_type != KSTAT_TYPE_NAMED)
      continue;
    if (kstat_read(kc, ksp_chain, NULL) == -1)
      continue;
    if (get_kstat_value(ksp_chain, "obytes") == -1LL)
      continue;
    ksp[numif++] = ksp_chain;
  }

  return 0;
} /* int interface_init */
#endif /* HAVE_LIBKSTAT */

static int if_read_internal(void) {
#if KERNEL_LINUX
  FILE *fh = fopen("/proc/net/dev", "r");
  if (fh == NULL) {
    WARNING("interface plugin: fopen(\"/proc/net/dev\"): %s", STRERRNO);
    return errno;
  }

  char buffer[1024];
  while (fgets(buffer, sizeof(buffer), fh) != NULL) {
    char *dummy = strchr(buffer, ':');
    if (dummy == NULL) {
      continue;
    }
    dummy[0] = 0;
    dummy++;

    char *device = buffer;
    while (device[0] == ' ')
      device++;

    if ((strlen(device) == 0) || ignorelist_match(ignorelist, device)) {
      continue;
    }

    char *fields[16];
    int numfields = strsplit(dummy, fields, STATIC_ARRAY_SIZE(fields));

    if (numfields < 11) {
      continue;
    }

    counter_t rx = (counter_t)atoll(fields[1]);
    counter_t tx = (counter_t)atoll(fields[9]);
    if (!report_inactive && (rx == 0) && (tx == 0)) {
      continue;
    }

    struct {
      metric_family_t *fam;
      char const *value;
    } metrics[] = {
        {&receive_bytes, fields[0]},  {&receive_packets, fields[1]},
        {&receive_errs, fields[2]},   {&receive_drop, fields[3]},
        {&transmit_bytes, fields[8]}, {&transmit_packets, fields[9]},
        {&transmit_errs, fields[10]}, {&transmit_drop, fields[11]},
    };

    for (size_t i = 0; i < STATIC_ARRAY_SIZE(metrics); i++) {
      errno = 0;
      counter_t v = (counter_t)strtoull(metrics[i].value, NULL, 0);
      if (errno != 0) {
        continue;
      }

      metric_family_append(metrics[i].fam, "device", device,
                           (value_t){.counter = v}, NULL);
    }
  }

  fclose(fh);
  /* #endif KERNEL_LINUX */

#elif HAVE_GETIFADDRS
/* Darwin/Mac OS X and possible other *BSDs */
#if HAVE_STRUCT_IF_DATA
#define IFA_DATA if_data
#define IFA_RX_BYTES ifi_ibytes
#define IFA_TX_BYTES ifi_obytes
#define IFA_RX_PACKT ifi_ipackets
#define IFA_TX_PACKT ifi_opackets
#define IFA_RX_ERROR ifi_ierrors
#define IFA_TX_ERROR ifi_oerrors
  /* #endif HAVE_STRUCT_IF_DATA */

#elif HAVE_STRUCT_NET_DEVICE_STATS
#define IFA_DATA net_device_stats
#define IFA_RX_BYTES rx_bytes
#define IFA_TX_BYTES tx_bytes
#define IFA_RX_PACKT rx_packets
#define IFA_TX_PACKT tx_packets
#define IFA_RX_ERROR rx_errors
#define IFA_TX_ERROR tx_errors
#else
#error "No suitable type for `struct ifaddrs->ifa_data' found."
#endif

  struct ifaddrs *if_list = NULL;
  if (getifaddrs(&if_list) != 0)
    return -1;

  for (struct ifaddrs *if_ptr = if_list; if_ptr != NULL;
       if_ptr = if_ptr->ifa_next) {
    if ((if_ptr->ifa_addr == NULL) ||
        (if_ptr->ifa_addr->sa_family != AF_LINK)) {
      continue;
    }
    if (ignorelist_match(ignorelist, if_ptr->ifa_name)) {
      continue;
    }

    struct IFA_DATA *if_data = (struct IFA_DATA *)if_ptr->ifa_data;
    if (!report_inactive && if_data->IFA_RX_PACKT == 0 &&
        if_data->IFA_TX_PACKT == 0) {
      continue;
    }

    struct {
      metric_family_t *fam;
      counter_t value;
    } metrics[] = {
        {&receive_bytes, (counter_t)if_data->IFA_RX_BYTES},
        {&receive_packets, (counter_t)if_data->IFA_RX_PACKT},
        {&receive_errs, (counter_t)if_data->IFA_RX_ERROR},
        {&transmit_bytes, (counter_t)if_data->IFA_TX_BYTES},
        {&transmit_packets, (counter_t)if_data->IFA_TX_PACKT},
        {&transmit_errs, (counter_t)if_data->IFA_TX_ERROR},
    };

    for (size_t i = 0; i < STATIC_ARRAY_SIZE(metrics); i++) {
      metric_family_append(metrics[i].fam, "device", if_ptr->ifa_name,
                           (value_t){.counter = metrics[i].value}, NULL);
    }
  }

  freeifaddrs(if_list);
  /* #endif HAVE_GETIFADDRS */

#elif HAVE_LIBKSTAT
  if (kc == NULL) {
    return -1;
  }

  for (size_t i = 0; i < numif; i++) {
    if (kstat_read(kc, ksp[i], NULL) == -1) {
      continue;
    }

    char iname[128];
    if (unique_name) {
      ssnprintf(iname, sizeof(iname), "%s_%d_%s", ksp[i]->ks_module,
                ksp[i]->ks_instance, ksp[i]->ks_name);
    } else {
      sstrncpy(iname, ksp[i]->ks_name, sizeof(iname));
    }

    struct {
      metric_family_t *fam;
      char const *name;
      char const *fallback_name;
    } metrics[] = {
        {&receive_bytes, "rbytes64", "rbytes"},
        {&receive_packets, "ipackets64", "ipackets"},
        {&receive_errs, "ierrors"},
        {&transmit_bytes, "obytes64", "obytes"},
        {&transmit_packets, "opackets64", "opackets"},
        {&transmit_errs, "oerrors"},
    };

    for (size_t j = 0; j < STATIC_ARRAY_SIZE(metrics); j++) {
      long long value = get_kstat_value(ksp[i], metrics[j].name);
      if ((value == -1) && (metrics[j].fallback_name != NULL)) {
        value = get_kstat_value(ksp[i], metrics[j].fallback_name);
      }
      if (value == -1) {
        continue;
      }
      metric_family_append(metrics[i].fam, "device", iname,
                           (value_t){.counter = (counter_t)value}, NULL);
    }
  }
  /* #endif HAVE_LIBKSTAT */

#elif defined(HAVE_LIBSTATGRAB)
  int num = 0;
  sg_network_io_stats *ios = sg_get_network_io_stats(&num);

  for (int i = 0; i < num; i++) {
    if (!report_inactive && ios[i].rx == 0 && ios[i].tx == 0) {
      continue;
    }

    metric_family_append(&receive_bytes, "device", ios[i].interface_name,
                         (value_t){.counter = (counter_t)ios[i].rx}, NULL);
    metric_family_append(&transmit_bytes, "device", ios[i].interface_name,
                         (value_t){.counter = (counter_t)ios[i].tx}, NULL);
  }
  /* #endif HAVE_LIBSTATGRAB */

#elif defined(HAVE_PERFSTAT)
  int num =
      perfstat_netinterface(NULL, NULL, sizeof(perfstat_netinterface_t), 0);
  if (num < 0) {
    WARNING("interface plugin: perfstat_netinterface: %s", STRERRNO);
    return -1;
  }
  if (num == 0) {
    return 0;
  }

  perfstat_netinterface_t *ifstat =
      calloc(num, sizeof(perfstat_netinterface_t));
  if (ifstat == NULL) {
    return errno;
  }

  perfstat_id_t id = {
      .name = {0},
  };
  int status =
      perfstat_netinterface(&id, ifstat, sizeof(perfstat_netinterface_t), num);
  if (status < 0) {
    ERROR("interface plugin: perfstat_netinterface (interfaces=%d): %s", num,
          STRERRNO);
    sfree(ifstat);
    return -1;
  }

  for (int i = 0; i < num; i++) {
    if (!report_inactive && ifstat[i].ipackets == 0 &&
        ifstat[i].opackets == 0) {
      continue;
    }

    struct {
      metric_family_t *fam;
      counter_t value;
    } metrics[] = {
        {&receive_bytes, (counter_t)ifstat[i].ibytes},
        {&receive_packets, (counter_t)ifstat[i].ipackets},
        {&receive_errs, (counter_t)ifstat[i].ierrors},
        {&transmit_bytes, (counter_t)ifstat[i].obytes},
        {&transmit_packets, (counter_t)ifstat[i].opackets},
        {&transmit_errs, (counter_t)ifstat[i].oerrors},
    };

    for (size_t j = 0; j < STATIC_ARRAY_SIZE(metrics); j++) {
      metric_family_append(metrics[j].fam, "device", ifstat[i].name,
                           (value_t){.counter = metrics[j].value}, NULL);
    }
  }

  sfree(ifstat);
#endif /* HAVE_PERFSTAT */

  return 0;
} /* int if_read_internal */

static int if_read(void) {
  metric_family_t *families[] = {
      &receive_bytes,  &receive_drop,  &receive_errs,  &receive_packets,
      &transmit_bytes, &transmit_drop, &transmit_errs, &transmit_packets,
  };

  int status = if_read_internal();

  for (size_t i = 0; i < STATIC_ARRAY_SIZE(families); i++) {
    if (status == 0) {
      plugin_dispatch_metric_family(families[i]);
    }

    metric_family_metric_reset(families[i]);
  }

  return status;
}

void module_register(void) {
  plugin_register_config("interface", interface_config, config_keys,
                         config_keys_num);
#if HAVE_LIBKSTAT
  plugin_register_init("interface", interface_init);
#endif
  plugin_register_read("interface", if_read);
} /* void module_register */
