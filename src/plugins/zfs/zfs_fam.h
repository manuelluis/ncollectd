/* SPDX-License-Identifier: GPL-2.0-only                             */
/* SPDX-FileCopyrightText: Copyright (C) 2022-2024 Manuel Sanmartín  */
/* SPDX-FileContributor: Manuel Sanmartín <manuel.luis at gmail.com> */

#pragma once

enum {
    FAM_ZFS_ABD_STRUCT_SIZE_BYTES,
    FAM_ZFS_ABD_LINEAR_COUNT,
    FAM_ZFS_ABD_LINEAR_DATA_BYTES,
    FAM_ZFS_ABD_SCATTER_COUNT,
    FAM_ZFS_ABD_SCATTER_DATA_BYTES,
    FAM_ZFS_ABD_SCATTER_CHUNK_WASTE_BYTES,
    FAM_ZFS_ABD_SCATTER_ORDER,
    FAM_ZFS_ABD_SCATTER_PAGE_MULTI_CHUNK,
    FAM_ZFS_ABD_SCATTER_PAGE_MULTI_ZONE,
    FAM_ZFS_ABD_SCATTER_PAGE_ALLOC_RETRY,
    FAM_ZFS_ABD_SCATTER_SG_TABLE_RETRY,
    FAM_ZFS_ARC_HITS,
    FAM_ZFS_ARC_IOHITS,
    FAM_ZFS_ARC_MISSES,
    FAM_ZFS_ARC_DEMAND_DATA_HITS,
    FAM_ZFS_ARC_DEMAND_DATA_IOHITS,
    FAM_ZFS_ARC_DEMAND_DATA_MISSES,
    FAM_ZFS_ARC_DEMAND_METADATA_HITS,
    FAM_ZFS_ARC_DEMAND_METADATA_IOHITS,
    FAM_ZFS_ARC_DEMAND_METADATA_MISSES,
    FAM_ZFS_ARC_PREFETCH_DATA_HITS,
    FAM_ZFS_ARC_PREFETCH_DATA_IOHITS,
    FAM_ZFS_ARC_PREFETCH_DATA_MISSES,
    FAM_ZFS_ARC_PREFETCH_METADATA_HITS,
    FAM_ZFS_ARC_PREFETCH_METADATA_IOHITS,
    FAM_ZFS_ARC_PREFETCH_METADATA_MISSES,
    FAM_ZFS_ARC_MRU_HITS,
    FAM_ZFS_ARC_MRU_GHOST_HITS,
    FAM_ZFS_ARC_MFU_HITS,
    FAM_ZFS_ARC_MFU_GHOST_HITS,
    FAM_ZFS_ARC_UNCACHED_HITS,
    FAM_ZFS_ARC_DELETED,
    FAM_ZFS_ARC_MUTEX_MISS,
    FAM_ZFS_ARC_ACCESS_SKIP,
    FAM_ZFS_ARC_EVICT_SKIP,
    FAM_ZFS_ARC_EVICT_NOT_ENOUGH,
    FAM_ZFS_ARC_EVICT_L2_CACHED,
    FAM_ZFS_ARC_EVICT_L2_ELIGIBLE,
    FAM_ZFS_ARC_EVICT_L2_INELIGIBLE,
    FAM_ZFS_ARC_EVICT_L2_SKIP,
    FAM_ZFS_ARC_HASH_ELEMENTS,
    FAM_ZFS_ARC_HASH_ELEMENTS_MAX,
    FAM_ZFS_ARC_HASH_COLLISIONS,
    FAM_ZFS_ARC_HASH_CHAINS,
    FAM_ZFS_ARC_HASH_CHAIN_MAX,
    FAM_ZFS_ARC_META,
    FAM_ZFS_ARC_P,
    FAM_ZFS_ARC_PD,
    FAM_ZFS_ARC_PM,
    FAM_ZFS_ARC_C,
    FAM_ZFS_ARC_C_MIN,
    FAM_ZFS_ARC_C_MAX,
    FAM_ZFS_ARC_SIZE_BYTES,
    FAM_ZFS_ARC_COMPRESSED_SIZE_BYTES,
    FAM_ZFS_ARC_UNCOMPRESSED_SIZE_BYTES,
    FAM_ZFS_ARC_OVERHEAD_SIZE_BYTES,
    FAM_ZFS_ARC_HDR_SIZE_BYTES,
    FAM_ZFS_ARC_DATA_SIZE_BYTES,
    FAM_ZFS_ARC_METADATA_SIZE_BYTES,
    FAM_ZFS_ARC_DBUF_SIZE_BYTES,
    FAM_ZFS_ARC_DNODE_SIZE_BYTES,
    FAM_ZFS_ARC_BONUS_SIZE_BYTES,
    FAM_ZFS_ARC_OTHER_SIZE_BYTES,
    FAM_ZFS_ARC_ANON_SIZE_BYTES,
    FAM_ZFS_ARC_ANON_DATA_SIZE_BYTES,
    FAM_ZFS_ARC_ANON_METADATA_SIZE_BYTES,
    FAM_ZFS_ARC_ANON_EVICTABLE_DATA_BYTES,
    FAM_ZFS_ARC_ANON_EVICTABLE_METADATA_BYTES,
    FAM_ZFS_ARC_MRU_SIZE_BYTES,
    FAM_ZFS_ARC_MRU_DATA_BYTES,
    FAM_ZFS_ARC_MRU_METADATA_BYTES,
    FAM_ZFS_ARC_MRU_EVICTABLE_DATA_BYTES,
    FAM_ZFS_ARC_MRU_EVICTABLE_METADATA_BYTES,
    FAM_ZFS_ARC_MRU_GHOST_SIZE_BYTES,
    FAM_ZFS_ARC_MRU_GHOST_DATA_BYTES,
    FAM_ZFS_ARC_MRU_GHOST_METADATA_BYTES,
    FAM_ZFS_ARC_MRU_GHOST_EVICTABLE_DATA_BYTES,
    FAM_ZFS_ARC_MRU_GHOST_EVICTABLE_METADATA_BYTES,
    FAM_ZFS_ARC_MFU_SIZE_BYTES,
    FAM_ZFS_ARC_MFU_DATA_BYTES,
    FAM_ZFS_ARC_MFU_METADATA_BYTES,
    FAM_ZFS_ARC_MFU_EVICTABLE_DATA_BYTES,
    FAM_ZFS_ARC_MFU_EVICTABLE_METADATA_BYTES,
    FAM_ZFS_ARC_MFU_GHOST_SIZE_BYTES,
    FAM_ZFS_ARC_MFU_GHOST_DATA_BYTES,
    FAM_ZFS_ARC_MFU_GHOST_METADATA_BYTES,
    FAM_ZFS_ARC_MFU_GHOST_EVICTABLE_DATA_BYTES,
    FAM_ZFS_ARC_MFU_GHOST_EVICTABLE_METADATA_BYTES,
    FAM_ZFS_ARC_UNCACHED_SIZE_BYTES,
    FAM_ZFS_ARC_UNCACHED_DATA_BYTES,
    FAM_ZFS_ARC_UNCACHED_METADATA_BYTES,
    FAM_ZFS_ARC_UNCACHED_EVICTABLE_DATA_BYTES,
    FAM_ZFS_ARC_UNCACHED_EVICTABLE_METADATA_BYTES,
    FAM_ZFS_ARC_L2_HITS,
    FAM_ZFS_ARC_L2_MISSES,
    FAM_ZFS_ARC_L2_PREFETCH_ASIZE_BYTES,
    FAM_ZFS_ARC_L2_MRU_ASIZE_BYTES,
    FAM_ZFS_ARC_L2_MFU_ASIZE_BYTES,
    FAM_ZFS_ARC_L2_BUFC_DATA_ASIZE_BYTES,
    FAM_ZFS_ARC_L2_BUFC_METADATA_ASIZE_BYTES,
    FAM_ZFS_ARC_L2_FEEDS,
    FAM_ZFS_ARC_L2_RW_CLASH,
    FAM_ZFS_ARC_L2_READ_BYTES,
    FAM_ZFS_ARC_L2_WRITE_BYTES,
    FAM_ZFS_ARC_L2_WRITES_SENT,
    FAM_ZFS_ARC_L2_WRITES_DONE,
    FAM_ZFS_ARC_L2_WRITES_ERROR,
    FAM_ZFS_ARC_L2_WRITES_LOCK_RETRY,
    FAM_ZFS_ARC_L2_EVICT_LOCK_RETRY,
    FAM_ZFS_ARC_L2_EVICT_READING,
    FAM_ZFS_ARC_L2_EVICT_L1CACHED,
    FAM_ZFS_ARC_L2_FREE_ON_WRITE,
    FAM_ZFS_ARC_L2_CDATA_FREE_ON_WRITE,
    FAM_ZFS_ARC_L2_ABORT_LOWMEM,
    FAM_ZFS_ARC_L2_CKSUM_BAD,
    FAM_ZFS_ARC_L2_IO_ERROR,
    FAM_ZFS_ARC_L2_SIZE_BYTES,
    FAM_ZFS_ARC_L2_ASIZE_BYTES,
    FAM_ZFS_ARC_L2_HDR_SIZE_BYTES,
    FAM_ZFS_ARC_L2_LOG_BLK_WRITES,
    FAM_ZFS_ARC_L2_LOG_BLK_AVG_ASIZE_BYTES,
    FAM_ZFS_ARC_L2_LOG_BLK_ASIZE,
    FAM_ZFS_ARC_L2_LOG_BLK_COUNT,
    FAM_ZFS_ARC_L2_DATA_TO_META_RATIO,
    FAM_ZFS_ARC_L2_REBUILD_SUCCESS,
    FAM_ZFS_ARC_L2_REBUILD_UNSUPPORTED,
    FAM_ZFS_ARC_L2_REBUILD_IO_ERRORS,
    FAM_ZFS_ARC_L2_REBUILD_DH_ERRORS,
    FAM_ZFS_ARC_L2_REBUILD_CKSUM_LB_ERRORS,
    FAM_ZFS_ARC_L2_REBUILD_LOWMEM,
    FAM_ZFS_ARC_L2_REBUILD_SIZE,
    FAM_ZFS_ARC_L2_REBUILD_ASIZE,
    FAM_ZFS_ARC_L2_REBUILD_BUFS,
    FAM_ZFS_ARC_L2_REBUILD_BUFS_PRECACHED,
    FAM_ZFS_ARC_L2_REBUILD_LOG_BLKS,
    FAM_ZFS_ARC_L2_COMPRESS_SUCCESSES,
    FAM_ZFS_ARC_L2_COMPRESS_ZEROS,
    FAM_ZFS_ARC_L2_COMPRESS_FAILURES,
    FAM_ZFS_ARC_DUPLICATE_BUFFERS,
    FAM_ZFS_ARC_DUPLICATE_BUFFERS_SIZE,
    FAM_ZFS_ARC_DUPLICATE_READS,
    FAM_ZFS_ARC_MEMORY_DIRECT_COUNT,
    FAM_ZFS_ARC_MEMORY_INDIRECT_COUNT,
    FAM_ZFS_ARC_MEMORY_THROTTLE_COUNT,
    FAM_ZFS_ARC_MEMORY_ALL_BYTES,
    FAM_ZFS_ARC_MEMORY_FREE_BYTES,
    FAM_ZFS_ARC_MEMORY_AVAILABLE_BYTES,
    FAM_ZFS_ARC_NO_GROW,
    FAM_ZFS_ARC_TEMPRESERVE,
    FAM_ZFS_ARC_LOANED_BYTES,
    FAM_ZFS_ARC_PRUNE,
    FAM_ZFS_ARC_META_USED,
    FAM_ZFS_ARC_DNODE_LIMIT,
    FAM_ZFS_ARC_META_LIMIT,
    FAM_ZFS_ARC_META_MAX,
    FAM_ZFS_ARC_META_MIN,
    FAM_ZFS_ARC_ASYNC_UPGRADE_SYNC,
    FAM_ZFS_ARC_PREDICTIVE_PREFETCH,
    FAM_ZFS_ARC_DEMAND_HIT_PREDICTIVE_PREFETCH,
    FAM_ZFS_ARC_DEMAND_IOHIT_PREDICTIVE_PREFETCH,
    FAM_ZFS_ARC_PRESCIENT_PREFETCH,
    FAM_ZFS_ARC_DEMAND_HIT_PRESCIENT_PREFETCH,
    FAM_ZFS_ARC_DEMAND_IOHIT_PRESCIENT_PREFETCH,
    FAM_ZFS_ARC_RAW_SIZE,
    FAM_ZFS_ARC_NEED_FREE,
    FAM_ZFS_ARC_SYS_FREE,
    FAM_ZFS_ARC_CACHED_ONLY_IN_PROGRESS,
    FAM_ZFS_ARC_ABD_CHUNK_WASTE_SIZE,
    FAM_ZFS_DBUF_CACHE_COUNT,
    FAM_ZFS_DBUF_CACHE_SIZE,
    FAM_ZFS_DBUF_CACHE_SIZE_MAX,
    FAM_ZFS_DBUF_CACHE_MAX_BYTES,
    FAM_ZFS_DBUF_CACHE_LOWATER_BYTES,
    FAM_ZFS_DBUF_CACHE_HIWATER_BYTES,
    FAM_ZFS_DBUF_CACHE_TOTAL_EVICTS,
    FAM_ZFS_DBUF_CACHE_LEVEL,
    FAM_ZFS_DBUF_CACHE_LEVEL_BYTES,
    FAM_ZFS_DBUF_HASH_HITS,
    FAM_ZFS_DBUF_HASH_MISSES,
    FAM_ZFS_DBUF_HASH_COLLISIONS,
    FAM_ZFS_DBUF_HASH_ELEMENTS,
    FAM_ZFS_DBUF_HASH_ELEMENTS_MAX,
    FAM_ZFS_DBUF_HASH_CHAINS,
    FAM_ZFS_DBUF_HASH_CHAIN_MAX,
    FAM_ZFS_DBUF_HASH_INSERT_RACE,
    FAM_ZFS_DBUF_HASH_DBUF_LEVEL,
    FAM_ZFS_DBUF_HASH_DBUF_LEVEL_BYTES,
    FAM_ZFS_DBUF_HASH_TABLE_COUNT,
    FAM_ZFS_DBUF_HASH_MUTEX_COUNT,
    FAM_ZFS_DBUF_METADATA_CACHE_COUNT,
    FAM_ZFS_DBUF_METADATA_CACHE_SIZE_BYTES,
    FAM_ZFS_DBUF_METADATA_CACHE_SIZE_BYTES_MAX,
    FAM_ZFS_DBUF_METADATA_CACHE_OVERFLOW,
    FAM_ZFS_DMU_TX_ASSIGNED,
    FAM_ZFS_DMU_TX_DELAY,
    FAM_ZFS_DMU_TX_ERROR,
    FAM_ZFS_DMU_TX_SUSPENDED,
    FAM_ZFS_DMU_TX_GROUP,
    FAM_ZFS_DMU_TX_MEMORY_RESERVE,
    FAM_ZFS_DMU_TX_MEMORY_RECLAIM,
    FAM_ZFS_DMU_TX_DIRTY_THROTTLE,
    FAM_ZFS_DMU_TX_DIRTY_DELAY,
    FAM_ZFS_DMU_TX_DIRTY_OVER_MAX,
    FAM_ZFS_DMU_TX_QUOTA,
    FAM_ZFS_DNODE_HOLD_DBUF_HOLD,
    FAM_ZFS_DNODE_HOLD_DBUF_READ,
    FAM_ZFS_DNODE_HOLD_ALLOC_HITS,
    FAM_ZFS_DNODE_HOLD_ALLOC_MISSES,
    FAM_ZFS_DNODE_HOLD_ALLOC_INTERIOR,
    FAM_ZFS_DNODE_HOLD_ALLOC_LOCK_RETRY,
    FAM_ZFS_DNODE_HOLD_ALLOC_LOCK_MISSES,
    FAM_ZFS_DNODE_HOLD_ALLOC_TYPE_NONE,
    FAM_ZFS_DNODE_HOLD_FREE_HITS,
    FAM_ZFS_DNODE_HOLD_FREE_MISSES,
    FAM_ZFS_DNODE_HOLD_FREE_LOCK_MISSES,
    FAM_ZFS_DNODE_HOLD_FREE_LOCK_RETRY,
    FAM_ZFS_DNODE_HOLD_FREE_OVERFLOW,
    FAM_ZFS_DNODE_HOLD_FREE_REFCOUNT,
    FAM_ZFS_DNODE_HOLD_FREE_TXG,
    FAM_ZFS_DNODE_ALLOCATE,
    FAM_ZFS_DNODE_REALLOCATE,
    FAM_ZFS_DNODE_BUF_EVICT,
    FAM_ZFS_DNODE_ALLOC_NEXT_CHUNK,
    FAM_ZFS_DNODE_ALLOC_RACE,
    FAM_ZFS_DNODE_ALLOC_NEXT_BLOCK,
    FAM_ZFS_DNODE_MOVE_INVALID,
    FAM_ZFS_DNODE_MOVE_RECHECK1,
    FAM_ZFS_DNODE_MOVE_RECHECK2,
    FAM_ZFS_DNODE_MOVE_SPECIAL,
    FAM_ZFS_DNODE_MOVE_HANDLE,
    FAM_ZFS_DNODE_MOVE_RWLOCK,
    FAM_ZFS_DNODE_MOVE_ACTIVE,
    FAM_ZFS_FM_ERPT_DROPPED,
    FAM_ZFS_FM_ERPT_SET_FAILED,
    FAM_ZFS_FM_FMRI_SET_FAILED,
    FAM_ZFS_FM_PAYLOAD_SET_FAILED,
    FAM_ZFS_FM_ERPT_DUPLICATES,
    FAM_ZFS_VDEV_CACHE_DELEGATIONS,
    FAM_ZFS_VDEV_CACHE_HITS,
    FAM_ZFS_VDEV_CACHE_MISSES,
    FAM_ZFS_VDEV_MIRROR_ROTATING_LINEAR,
    FAM_ZFS_VDEV_MIRROR_ROTATING_OFFSET,
    FAM_ZFS_VDEV_MIRROR_ROTATING_SEEK,
    FAM_ZFS_VDEV_MIRROR_NON_ROTATING_LINEAR,
    FAM_ZFS_VDEV_MIRROR_NON_ROTATING_SEEK,
    FAM_ZFS_VDEV_MIRROR_PREFERRED_FOUND,
    FAM_ZFS_VDEV_MIRROR_PREFERRED_NOT_FOUND,
    FAM_ZFS_XUIO_ONLOAN_READ_BUF,
    FAM_ZFS_XUIO_ONLOAN_WRITE_BUF,
    FAM_ZFS_XUIO_READ_BUF_COPIED,
    FAM_ZFS_XUIO_READ_BUF_NOCOPY,
    FAM_ZFS_XUIO_WRITE_BUF_COPIED,
    FAM_ZFS_XUIO_WRITE_BUF_NOCOPY,
    FAM_ZFS_ZFETCH_HITS,
    FAM_ZFS_ZFETCH_MISSES,
    FAM_ZFS_ZFETCH_COLINEAR_HITS,
    FAM_ZFS_ZFETCH_COLINEAR_MISSES,
    FAM_ZFS_ZFETCH_STRIDE_HITS,
    FAM_ZFS_ZFETCH_STRIDE_MISSES,
    FAM_ZFS_ZFETCH_RECLAIM_SUCCESSES,
    FAM_ZFS_ZFETCH_RECLAIM_FAILURES,
    FAM_ZFS_ZFETCH_STREAMS_RESETS,
    FAM_ZFS_ZFETCH_STREAMS_NORESETS,
    FAM_ZFS_ZFETCH_BOGUS_STREAMS,
    FAM_ZFS_ZIL_COMMIT,
    FAM_ZFS_ZIL_COMMIT_WRITER_COUNT,
    FAM_ZFS_ZIL_ITX_COUNT,
    FAM_ZFS_ZIL_ITX_INDIRECT_COUNT,
    FAM_ZFS_ZIL_ITX_INDIRECT_BYTES,
    FAM_ZFS_ZIL_ITX_COPIED_COUNT,
    FAM_ZFS_ZIL_ITX_COPIED_BYTES,
    FAM_ZFS_ZIL_ITX_NEEDCOPY_COUNT,
    FAM_ZFS_ZIL_ITX_NEEDCOPY_BYTES,
    FAM_ZFS_ZIL_ITX_METASLAB_NORMAL_COUNT,
    FAM_ZFS_ZIL_ITX_METASLAB_NORMAL_BYTES,
    FAM_ZFS_ZIL_ITX_METASLAB_NORMAL_WRITE,
    FAM_ZFS_ZIL_ITX_METASLAB_NORMAL_ALLOC,
    FAM_ZFS_ZIL_ITX_METASLAB_SLOG_COUNT,
    FAM_ZFS_ZIL_ITX_METASLAB_SLOG_BYTES,
    FAM_ZFS_ZIL_ITX_METASLAB_SLOG_WRITE,
    FAM_ZFS_ZIL_ITX_METASLAB_SLOG_ALLOC,
    FAM_ZFS_QAT_COMP_REQUESTS,
    FAM_ZFS_QAT_COMP_IN_BYTES,
    FAM_ZFS_QAT_COMP_OUT_BYTES,
    FAM_ZFS_QAT_DECOMP_REQUESTS,
    FAM_ZFS_QAT_DECOMP_IN_BYTES,
    FAM_ZFS_QAT_DECOMP_OUT_BYTES,
    FAM_ZFS_QAT_DC_FAILS,
    FAM_ZFS_QAT_ENCRYPT_REQUESTS,
    FAM_ZFS_QAT_ENCRYPT_IN_BYTES,
    FAM_ZFS_QAT_ENCRYPT_OUT_BYTES,
    FAM_ZFS_QAT_DECRYPT_REQUESTS,
    FAM_ZFS_QAT_DECRYPT_IN_BYTES,
    FAM_ZFS_QAT_DECRYPT_OUT_BYTES,
    FAM_ZFS_QAT_CRYPT_FAILS,
    FAM_ZFS_QAT_CKSUM_REQUESTS,
    FAM_ZFS_QAT_CKSUM_IN_BYTES,
    FAM_ZFS_QAT_CKSUM_FAILS,

    FAM_ZFS_ZPOOL_DATASET_WRITES,
    FAM_ZFS_ZPOOL_DATASET_WRITTEN_BYTES,
    FAM_ZFS_ZPOOL_DATASET_READS,
    FAM_ZFS_ZPOOL_DATASET_READ_BYTES,
    FAM_ZFS_ZPOOL_DATASET_UNLINKS,
    FAM_ZFS_ZPOOL_DATASET_UNLINKED,
    FAM_ZFS_ZPOOL_STATE,

    FAM_ZFS_MAX,
};
