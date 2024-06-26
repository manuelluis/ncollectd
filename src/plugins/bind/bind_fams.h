/* SPDX-License-Identifier: GPL-2.0-only                             */
/* SPDX-FileCopyrightText: Copyright (C) 2022-2024 Manuel Sanmartín  */
/* SPDX-FileContributor: Manuel Sanmartín <manuel.luis at gmail.com> */

#pragma once

enum {
    FAM_BIND_UP,
    FAM_BIND_BOOT_TIME_SECONDS,
    FAM_BIND_CONFIG_TIME_SECONDS,
    FAM_BIND_INCOMING_QUERIES,
    FAM_BIND_INCOMING_REQUESTS,
    FAM_BIND_RESPONSE_RCODES,
    FAM_BIND_INCOMING_QUERIES_UDP,
    FAM_BIND_INCOMING_QUERIES_TCP,
    FAM_BIND_INCOMING_REQUESTS_TCP,
    FAM_BIND_QUERY_DUPLICATES,
    FAM_BIND_QUERY_RECURSIONS,
    FAM_BIND_QUERY_ERRORS,
    FAM_BIND_RECURSIVE_CLIENTS,
    FAM_BIND_RESPONSES,
    FAM_BIND_TASKS_RUNNING,
    FAM_BIND_WORKER_THREADS,
    FAM_BIND_ZONE_TRANSFER_FAILURE,
    FAM_BIND_ZONE_TRANSFER_REJECTED,
    FAM_BIND_ZONE_TRANSFER_SUCCESS,
    FAM_BIND_RESOLVER_QUERIES,
    FAM_BIND_RESOLVER_QUERY_ERRORS,
    FAM_BIND_RESOLVER_RESPONSE_ERRORS,
    FAM_BIND_RESOLVER_QUERY_EDNS0_ERRORS,
    FAM_BIND_RESOLVER_DNSSEC_VALIDATION_SUCCESS,
    FAM_BIND_RESOLVER_DNSSEC_VALIDATION_ERRORS,
    FAM_BIND_RESOLVER_RESPONSE_MISMATCH,
    FAM_BIND_RESOLVER_RESPONSE_TRUNCATED,
    FAM_BIND_RESOLVER_RESPONSE_LAME,
    FAM_BIND_RESOLVER_QUERY_RETRIES,
    FAM_BIND_RESOLVER_CACHE_RRSETS,
    FAM_BIND_RESOLVER_CACHE_HITS,
    FAM_BIND_RESOLVER_CACHE_MISSES,
    FAM_BIND_RESOLVER_CACHE_QUERY_HITS,
    FAM_BIND_RESOLVER_CACHE_QUERY_MISSES,
    FAM_BIND_RESOLVER_QUERY_DURATION_SECONDS,
    FAM_BIND_TRAFFIC_INCOMING_REQUESTS_UDP4_SIZE,
    FAM_BIND_TRAFFIC_INCOMING_REQUESTS_UDP6_SIZE,
    FAM_BIND_TRAFFIC_INCOMING_REQUESTS_TCP4_SIZE,
    FAM_BIND_TRAFFIC_INCOMING_REQUESTS_TCP6_SIZE,
    FAM_BIND_TRAFFIC_INCOMING_REQUESTS_TOTAL_SIZE,
    FAM_BIND_TRAFFIC_RESPONSES_UDP4_SIZE,
    FAM_BIND_TRAFFIC_RESPONSES_UDP6_SIZE,
    FAM_BIND_TRAFFIC_RESPONSES_TCP4_SIZE,
    FAM_BIND_TRAFFIC_RESPONSES_TCP6_SIZE,
    FAM_BIND_TRAFFIC_RESPONSES_TOTAL_SIZE,
    FAM_BIND_MEMORY_USE_BYTES,
    FAM_BIND_MEMORY_IN_USE_BYTES,
    FAM_BIND_MEMORY_MALLOCED_BYTES,
    FAM_BIND_MEMORY_CONTEXT_SIZE_BYTES,
    FAM_BIND_MEMORY_LOST_BYTES,
    FAM_BIND_SOCKET_ACCEPT,
    FAM_BIND_SOCKET_ACCEPT_FAIL,
    FAM_BIND_SOCKET_ACTIVE,
    FAM_BIND_SOCKET_BIND_FAIL,
    FAM_BIND_SOCKET_CLOSE,
    FAM_BIND_SOCKET_CONNECT,
    FAM_BIND_SOCKET_CONNECT_FAIL,
    FAM_BIND_SOCKET_OPEN,
    FAM_BIND_SOCKET_OPEN_FAIL,
    FAM_BIND_SOCKET_RECV_ERROR,
    FAM_BIND_SOCKET_SEND_ERROR,
    FAM_BIND_MAX,
};

enum {
    BIND_TRAFFIC_INCOMING_REQUESTS_UDP4_SIZE,
    BIND_TRAFFIC_INCOMING_REQUESTS_UDP6_SIZE,
    BIND_TRAFFIC_INCOMING_REQUESTS_TCP4_SIZE,
    BIND_TRAFFIC_INCOMING_REQUESTS_TCP6_SIZE,
    BIND_TRAFFIC_INCOMING_REQUESTS_TOTAL_SIZE,
    BIND_TRAFFIC_RESPONSES_UDP4_SIZE,
    BIND_TRAFFIC_RESPONSES_UDP6_SIZE,
    BIND_TRAFFIC_RESPONSES_TCP4_SIZE,
    BIND_TRAFFIC_RESPONSES_TCP6_SIZE,
    BIND_TRAFFIC_RESPONSES_TOTAL_SIZE,
    BIND_TRAFFIC_MAX,
};
