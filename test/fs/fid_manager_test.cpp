#include "fs/page_fs/file_id_manager.h"

#include "gtest/gtest.h"
#include "iostream"

TEST(FID_MANAGER, ALLOCATE) {
    file_id_manager fm;
    for (int i = 0; i != MAX_FILE_ID - 1; i++) {
        ASSERT_FALSE(fm.is_used(i + 1));
        int id = fm.allocate();
        ASSERT_EQ(id, i + 1);
        ASSERT_TRUE(fm.is_used(id));
    }
    ASSERT_EQ(fm.allocate(), 0);
}

TEST(FID_MANAGER, DEALLOCATE) {
    file_id_manager fm;
    for (int i = 0; i != MAX_FILE_ID; i++) {
        int id = fm.allocate();
        ASSERT_TRUE(fm.is_used(id));
        fm.deallocate(id);
        ASSERT_FALSE(fm.is_used(id));
    }
}
