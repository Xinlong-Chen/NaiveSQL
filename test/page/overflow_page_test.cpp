#include "page/overflow_page.h"

#include <cstring>

#include "gtest/gtest.h"

#include "page/pager.h"
#include "page/variant_page.h"

TEST(OVERFLOW_PAGE, DEF) {
    std::string filename("testfile");
    remove(filename.c_str());

    pager pg(filename.c_str());
    char* buf = new char[PAGE_SIZE];

    overflow_page page{buf, &pg};
    page.init();

    ASSERT_EQ(page.magic(), PAGE_OVERFLOW);
    ASSERT_EQ(page.size(),  0);
    ASSERT_EQ(page.next(),  0);

    delete[] buf;
    remove(filename.c_str());
}

TEST(OVERFLOW_PAGE, OVERFLOW_INSERT) {
    std::string filename("testfile");
    remove(filename.c_str());

    std::string src_data("2");
    pager pg(filename.c_str());
    {
        int pid = pg.new_page();
        variant_page page{pg.read_for_write(pid), &pg};
        page.init();
        ASSERT_EQ(page.size(), 0);

        // variant_page will save some bytes, this need 4 overflow pages
        int data_max = overflow_page::block_size() * 4 + PAGE_OV_KEEP_SIZE 
                        - variant_page::BLOCK_HEADER_SIZE;
        std::string fuck_data("");
        while (fuck_data.length() < data_max) {
            fuck_data.append(src_data);
        }
        ASSERT_TRUE(page.insert(0, fuck_data.c_str(), fuck_data.length()));
        // because have overflow, it can insert again
        ASSERT_TRUE(page.insert(1, fuck_data.c_str(), fuck_data.length()));

        auto ret = page.get_block(0);
        int ov_pid = ret.first.ov_page;
        ASSERT_GT(ov_pid, 0);
        std::string tmp("");
        tmp.append(ret.second, ret.first.size - variant_page::BLOCK_HEADER_SIZE);
        int cnt = 0;
        while (ov_pid) {
            overflow_page ov_page {pg.read(ov_pid), &pg};
            tmp.append(ov_page.block(), ov_page.size());
            ov_pid = ov_page.next();
            cnt++;
        }
        ASSERT_EQ(memcmp(tmp.c_str(), 
                  fuck_data.c_str(), fuck_data.length()), 0);
        ASSERT_EQ(cnt, 4);
    }
    remove(filename.c_str());
}

TEST(OVERFLOW_PAGE, OVERFLOW_ERASE) {
    std::string filename("testfile");
    remove(filename.c_str());

    std::string src_data1("1");
    std::string src_data2("2");
    pager pg(filename.c_str());
    {
        int pid = pg.new_page();
        variant_page page{pg.read_for_write(pid), &pg};
        page.init();
        ASSERT_EQ(page.size(), 0);

        // variant_page will save some bytes, this need 4 overflow pages
        int data_max = overflow_page::block_size() * 4 + PAGE_OV_KEEP_SIZE 
                        - variant_page::BLOCK_HEADER_SIZE;
        std::string fuck_data("");
        std::string fuck_data2("");
        while (fuck_data.length() < data_max) {
            fuck_data.append(src_data1);
            fuck_data2.append(src_data2);
        }
        ASSERT_TRUE(page.insert(0, fuck_data2.c_str(), fuck_data2.length()));
        ASSERT_TRUE(page.insert(1, fuck_data.c_str(), fuck_data.length()));
        ASSERT_TRUE(page.insert(2, fuck_data2.c_str(), fuck_data2.length()));
        page.erase(2);
        page.erase(0);
        auto ret = page.get_block(0);
        int ov_pid = ret.first.ov_page;
        ASSERT_GT(ov_pid, 0);
        std::string tmp("");
        tmp.append(ret.second, ret.first.size - variant_page::BLOCK_HEADER_SIZE);
        int cnt = 0;
        while (ov_pid) {
            overflow_page ov_page {pg.read(ov_pid), &pg};
            tmp.append(ov_page.block(), ov_page.size());
            ov_pid = ov_page.next();
            cnt++;
        }
        ASSERT_EQ(memcmp(tmp.c_str(), 
                  fuck_data.c_str(), fuck_data.length()), 0);
        ASSERT_EQ(cnt, 4);
    }
    remove(filename.c_str());
}

TEST(OVERFLOW_PAGE, OVERFLOW_MOVE_FROM) {
    std::string filename("testfile");
    remove(filename.c_str());

    std::string src_data("2");
    pager pg(filename.c_str());
    {
        int pid = pg.new_page();
        variant_page page{pg.read_for_write(pid), &pg};
        page.init();
        ASSERT_EQ(page.size(), 0);

        int data_max = overflow_page::block_size() * 2 + PAGE_OV_KEEP_SIZE 
                        - variant_page::BLOCK_HEADER_SIZE;
        std::string fuck_data("");
        while (fuck_data.length() < data_max) {
            fuck_data.append(src_data);
        }
        ASSERT_TRUE(page.insert(0, fuck_data.c_str(), fuck_data.length()));
        
        int pid2 = pg.new_page();
        variant_page page2{pg.read_for_write(pid2), &pg};
        page2.init();
        page2.move_from(page, 0, 0);

        auto ret = page2.get_block(0);
        int ov_pid = ret.first.ov_page;
        ASSERT_GT(ov_pid, 0);
        std::string tmp("");
        tmp.append(ret.second, ret.first.size - variant_page::BLOCK_HEADER_SIZE);
        int cnt = 0;
        while (ov_pid) {
            overflow_page ov_page {pg.read(ov_pid), &pg};
            tmp.append(ov_page.block(), ov_page.size());
            ov_pid = ov_page.next();
            cnt++;
        }
        ASSERT_EQ(memcmp(tmp.c_str(), 
                  fuck_data.c_str(), fuck_data.length()), 0);
        ASSERT_EQ(cnt, 2);
    }
    remove(filename.c_str());
}
