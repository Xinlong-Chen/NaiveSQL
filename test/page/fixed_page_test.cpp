#include "page/fixed_page.h"

#include <cstring>

#include "gtest/gtest.h"

#include "page/pager.h"

TEST(FIXED_PAGE, DEF) {
    std::string filename("testfile");
    remove(filename.c_str());
    
    pager pg(filename.c_str());
    char* buf = new char[PAGE_SIZE];

    fixed_page<int> page{buf, &pg};
    page.init(sizeof(int));

    ASSERT_EQ(page.magic(), PAGE_FIXED);
    ASSERT_EQ(page.field_size(), sizeof(int));
    ASSERT_EQ(page.size(), 0);
    ASSERT_EQ(page.next_page(), 0);
    ASSERT_EQ(page.prev_page(), 0);
    ASSERT_EQ(static_cast<void*>(page.children()), static_cast<void*>(buf + page.header_size()));
    
    delete[] buf;
    remove(filename.c_str());
}

TEST(FIXED_PAGE, INSERT_ERASE) {
    std::string filename("testfile");
    remove(filename.c_str());

    pager pg(filename.c_str());
    int pid = pg.new_page();
    {
        fixed_page<int> page{pg.read_for_write(pid), &pg};
        page.init(sizeof(int));
        ASSERT_EQ(page.size(), 0);
        //0 -> 012, 1->123, 2->234 .etc
        page.insert(0, 12,  1);
        page.insert(1, 234, 3);
        page.insert(2, 345, 4);
        page.insert(3, 456, 5);
        page.insert(1, 123, 2);

        ASSERT_EQ(page.get_key(0), 12);
        ASSERT_EQ(page.get_key(1), 123);
        ASSERT_EQ(page.get_key(2), 234);
        ASSERT_EQ(page.get_key(3), 345);
        ASSERT_EQ(page.get_key(4), 456);
        ASSERT_EQ(page.get_child(0), 1);
        ASSERT_EQ(page.get_child(1), 2);
        ASSERT_EQ(page.get_child(2), 3);
        ASSERT_EQ(page.get_child(3), 4);
        ASSERT_EQ(page.get_child(4), 5);

        page.erase(4);
        page.erase(2);
        page.erase(0);
        ASSERT_EQ(page.get_key(0), 123);
        ASSERT_EQ(page.get_key(1), 345);
        ASSERT_EQ(page.get_child(0), 2);
        ASSERT_EQ(page.get_child(1), 4);
    }
    remove(filename.c_str());
}

TEST(FIXED_PAGE, REOPEN) {
    std::string filename("testfile");
    remove(filename.c_str());
    char buf1[PAGE_SIZE];
    char buf2[PAGE_SIZE];
    
    pager pg(filename.c_str());
    int pid = pg.new_page();
    {
        fixed_page<int> page{pg.read_for_write(pid), &pg};
        page.init(sizeof(int));
        ASSERT_EQ(page.size(), 0);
        page.insert(0, 12,  1);
        page.insert(1, 123, 3);
        page.insert(2, 234, 4);
        memcpy(buf1, page.buf, PAGE_SIZE);
    }
    pg.close();
    ASSERT_TRUE(pg.open(filename.c_str()));
    {
        fixed_page<int> page{pg.read_for_write(pid), &pg};
        memcpy(buf2, page.buf, PAGE_SIZE);
        ASSERT_EQ(page.get_child(0), 1);
        ASSERT_EQ(page.get_child(1), 3);
        ASSERT_EQ(page.get_child(2), 4);
        ASSERT_EQ(page.get_key(0), 12);
        ASSERT_EQ(page.get_key(1), 123);
        ASSERT_EQ(page.get_key(2), 234);
    }
    ASSERT_EQ(strcmp(buf1, buf2), 0);

    remove(filename.c_str());
}

TEST(FIXED_PAGE, SPLIT) {
     std::string filename("testfile");
    remove(filename.c_str());

    pager pg(filename.c_str());
    int pid = pg.new_page();
    {
        fixed_page<int> page{pg.read_for_write(pid), &pg};
        page.init(sizeof(int));
        int pos = 0, key = 0, child = 1;
        while (!page.full()) {
            page.insert(pos, key, child);
            ++pos;
            ++key;
            ++child;
        }
        ASSERT_EQ(page.size(), 510);
        int src_size = page.size();
        ASSERT_FALSE(page.underflow());
        pg.flush();
        
        auto ret = page.split(pid);
        auto& new_page = ret.second;
        int lower_size = src_size >> 1;
        int upper_size = src_size - lower_size;
        ASSERT_GT(ret.first, 0);
        ASSERT_EQ(page.size(), lower_size);
        ASSERT_EQ(new_page.size(), upper_size);

        for (int i = 0; i < lower_size; ++i) {
            ASSERT_EQ(page.get_key(i), i);
        }
        for (int i = 0; i < upper_size; ++i) {
            ASSERT_EQ(new_page.get_key(i), i + lower_size);
        }
    }
    remove(filename.c_str());
}

TEST(FIXED_PAGE, MERGE) {
     std::string filename("testfile");
    remove(filename.c_str());

    pager pg(filename.c_str());
    int pid0  = pg.new_page();
    int pid1 = pg.new_page();
    {
        fixed_page<int> page0{pg.read_for_write(pid0), &pg};
        fixed_page<int> page1{pg.read_for_write(pid1), &pg};
        page0.init(sizeof(int));
        page1.init(sizeof(int));
        int pos = 0, key = 0, child = 1;
        while (page0.underflow()) {
            page0.insert(pos, key, child);
            ++pos;
            ++key;
            ++child;
        }
        pos = 0;
        while (pos < page1.capacity() / 4) {
            page1.insert(pos, key, child);
            ++pos;
            ++key;
            ++child;
        }
        int size0 = page0.size();
        int size1 = page1.size();
        ASSERT_FALSE(page0.underflow());
        ASSERT_TRUE(page1.underflow());
        pg.flush();
        
        ASSERT_TRUE(page0.merge(page1, pid0));
        ASSERT_EQ(page0.size(), size0 + size1);
        for (int i = 0; i < page0.size(); ++i) {
            ASSERT_EQ(page0.get_key(i), i);
            ASSERT_EQ(page0.get_child(i), i + 1);
        }
    }
    remove(filename.c_str());
}

TEST(FIXED_PAGE, MOVE_FROM) {
     std::string filename("testfile");
    remove(filename.c_str());

    pager pg(filename.c_str());
    int pid0  = pg.new_page();
    int pid1 = pg.new_page();
    {
        fixed_page<int> page0{pg.read_for_write(pid0), &pg};
        fixed_page<int> page1{pg.read_for_write(pid1), &pg};
        page0.init(sizeof(int));
        page1.init(sizeof(int));
        int pos = 0, key = 0, child = 1;
        while (page0.underflow()) {
            page0.insert(pos, key, child);
            ++pos;
            ++key;
            ++child;
        }
        pos = 0;
        while (pos < page1.capacity() / 4) {
            page1.insert(pos, key, child);
            ++pos;
            ++key;
            ++child;
        }

        int size0 = page0.size();
        int size1 = page1.size();
        
        while (!page1.empty()) {
            page0.move_from(page1, page1.size() - 1, page0.size());
        }

        pg.flush();
        
        ASSERT_EQ(page0.size(), size0 + size1);

        --key;
        --child;
        for (int i = 0; i < size1; ++i) {
            ASSERT_EQ(page0.get_key(i + size0), key - i);
            ASSERT_EQ(page0.get_child(i + size0), child - i);
        }
        for (int i = 0; i < size0; ++i) {
            ASSERT_EQ(page0.get_key(i), i);
            ASSERT_EQ(page0.get_child(i), i + 1);
        }
    }
    remove(filename.c_str());
}

TEST(FIXED_PAGE, SPECIALIZED_CLASS_FOR_CONST_CHAR_PTR) {
    std::string filename("testfile");
    remove(filename.c_str());
    const int col_length = 2;
    const int rowid_length = 2;
    const int field_length = rowid_length + sizeof(char) + col_length;
    std::string key0("01000");
    std::string key1("02112");
    std::string key2("03134");
    std::string key3("04000");
    pager pg(filename.c_str());
    int pid = pg.new_page();
    {
        fixed_page<const char*> page{pg.read_for_write(pid), &pg};
        page.init(field_length);
        ASSERT_EQ(page.size(), 0);
        //0 -> 012, 1->123, 2->234 .etc
        page.insert(0, key0.c_str(), 1);
        page.insert(1, key1.c_str(), 2);
        page.insert(2, key2.c_str(), 3);
        page.insert(3, key3.c_str(), 4);

        ASSERT_EQ(memcmp(page.get_key(0), key0.c_str(), field_length), 0);
        ASSERT_EQ(memcmp(page.get_key(1), key1.c_str(), field_length), 0);
        ASSERT_EQ(memcmp(page.get_key(2), key2.c_str(), field_length), 0);
        ASSERT_EQ(memcmp(page.get_key(3), key3.c_str(), field_length), 0);
        ASSERT_EQ(page.get_child(0), 1);
        ASSERT_EQ(page.get_child(1), 2);
        ASSERT_EQ(page.get_child(2), 3);
        ASSERT_EQ(page.get_child(3), 4);

        page.erase(3);
        page.erase(1);

        ASSERT_EQ(memcmp(page.get_key(0), key0.c_str(), field_length), 0);
        ASSERT_EQ(memcmp(page.get_key(1), key2.c_str(), field_length), 0);
        ASSERT_EQ(page.get_child(0), 1);
        ASSERT_EQ(page.get_child(1), 3);
    }
    remove(filename.c_str());
}
