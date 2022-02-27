#pragma once

// file system
// 4KB each page
#define PAGE_SIZE                  4096
#define PAGE_CACHE_CAPACITY        8192
#define MAX_FILE_ID                1024

//page info
#define PAGE_FREEBLOCK             0x22134039
#define PAGE_BLOCK_MIN_NUM         4
#define PAGE_BLOCK_MAX_SIZE        ((PAGE_SIZE - 12) / PAGE_BLOCK_MIN_NUM - 2)
#define PAGE_OV_KEEP_SIZE          64
#define PAGE_FREE_BLOCK_MIN_SIZE   16
#define PAGE_FREE_SPACE_MAX        (PAGE_SIZE / 4 * 3)

/* page type (2 bytes) */
#define PAGE_FIXED                 0x4946
#define PAGE_INDEX_LEAF            0x4947
#define PAGE_VARIANT               0x4156
#define PAGE_OVERFLOW              0x564f

/* database info */
#define MAX_TABLE_NUM              32

/* table info */
#define MAX_COL_NUM                32
#define MAX_NAME_LEN               64