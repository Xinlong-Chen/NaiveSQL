#include "fs/page_fs/lru_replacer.h"

#include "gtest/gtest.h"

TEST(LRU_REPLACER, ACCESS) {
    ASSERT_FALSE(PAGE_CACHE_CAPACITY & 1);
    ASSERT_GE(PAGE_CACHE_CAPACITY, 2);

    lru_replacer replacer;

    for (int i = PAGE_CACHE_CAPACITY - 1; i >= 0; i -= 2) {
        replacer.access(i);
    }
    for (int i = PAGE_CACHE_CAPACITY - 2; i >= 0; i -= 2) {
        replacer.access(i);
    }

    for (int i = PAGE_CACHE_CAPACITY - 1; i > 1; i -= 2) {
        replacer.access(i);
        ASSERT_EQ(replacer.last(), i - 2);
    }
    
    replacer.access(1);
    ASSERT_EQ(replacer.last(), PAGE_CACHE_CAPACITY - 2);
    
    for (int i = PAGE_CACHE_CAPACITY - 2; i > 0; i -= 2) {
        replacer.access(i);
        ASSERT_EQ(replacer.last(), i - 2);
    }

    replacer.access(0);
    ASSERT_EQ(replacer.last(), PAGE_CACHE_CAPACITY - 1);
}