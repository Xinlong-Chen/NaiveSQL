#include "page/variant_page.h"

#include <cstring>

#include "gtest/gtest.h"

#include "page/pager.h"

TEST(VARIANT_PAGE, DEF) {
    std::string filename("testfile");
    remove(filename.c_str());

    pager pg(filename.c_str());
    char* buf = new char[PAGE_SIZE];

    variant_page page{buf, &pg};
    page.init(sizeof(int));

    ASSERT_EQ(page.magic(),      PAGE_VARIANT);
    ASSERT_EQ(page.free_block(), 0);
    ASSERT_EQ(page.free_size(),  PAGE_SIZE - variant_page::header_size());
    ASSERT_EQ(page.size(),       0);
    ASSERT_EQ(page.tail_max(),   0);
    ASSERT_EQ(page.next_page(),  0);
    ASSERT_EQ(page.prev_page(),  0);
    ASSERT_EQ(reinterpret_cast<void*>(page.slots()), reinterpret_cast<void*>(buf + page.header_size()));
    
    delete[] buf;
    remove(filename.c_str());
}

TEST(VARIANT_PAGE, INSERT_ERASE) {    
    std::string filename("testfile");
    remove(filename.c_str());

    std::string data0("012023034");
    std::string data1("012045067");
    std::string data2("089022032");
    std::string data3("099021031");
    std::string data4("034021031");
    pager pg(filename.c_str());
    int pid = pg.new_page();
    {
        variant_page page{pg.read_for_write(pid), &pg};
        page.init();
        ASSERT_EQ(page.size(), 0);

        page.insert(0, data0.c_str(),  data0.length());
        page.insert(1, data2.c_str(),  data2.length());
        page.insert(2, data3.c_str(),  data3.length());
        page.insert(3, data4.c_str(),  data4.length());
        page.insert(1, data1.c_str(),  data1.length());
        ASSERT_EQ(memcmp(page.get_block(0).second, data0.c_str(), data0.length()), 0);
        ASSERT_EQ(memcmp(page.get_block(1).second, data1.c_str(), data1.length()), 0);
        ASSERT_EQ(memcmp(page.get_block(2).second, data2.c_str(), data2.length()), 0);
        ASSERT_EQ(memcmp(page.get_block(3).second, data3.c_str(), data3.length()), 0);
        ASSERT_EQ(memcmp(page.get_block(4).second, data4.c_str(), data4.length()), 0);

        page.erase(4);
        page.erase(2);
        page.erase(0);
        ASSERT_EQ(memcmp(page.get_block(0).second, data1.c_str(), data1.length()), 0);
        ASSERT_EQ(memcmp(page.get_block(1).second, data3.c_str(), data3.length()), 0);
    }
    remove(filename.c_str());
}

TEST(VARIANT_PAGE, INSERT_ERASE_FRAGMENT) {    
    std::string filename("testfile");
    remove(filename.c_str());

    std::string src_data("12");
    pager pg(filename.c_str());
    int pid = pg.new_page();
    {
        variant_page page{pg.read_for_write(pid), &pg};
        page.init();
        ASSERT_EQ(page.size(), 0);

        int data_max = (PAGE_SIZE - page.used_size()) / 45;
        std::string fuck_data("");
        while (fuck_data.length() + src_data.length() < data_max) {
            fuck_data.append(src_data);
        }
        while(page.insert(0, fuck_data.c_str(), fuck_data.length()));
        int size_before = page.free_size();
        page.erase(2);
        page.erase(5);
        page.erase(page.size() - 2);
        page.erase(page.size() - 5);
        fuck_data.append(fuck_data);
        fuck_data.append(fuck_data);
        ASSERT_TRUE(page.insert(1, fuck_data.c_str(), fuck_data.length()));     
        int size_after = page.free_size();
        ASSERT_EQ(size_after - size_before, 30);
        ASSERT_EQ(memcmp(page.get_block(1).second, 
                  fuck_data.c_str(), fuck_data.length()), 0);
    }
    remove(filename.c_str());
}

TEST(VARIANT_PAGE, SPLIT) {    
    std::string filename("testfile");
    remove(filename.c_str());

    pager pg(filename.c_str());
    int pid = pg.new_page();
    {
        variant_page page{pg.read_for_write(pid), &pg};
        page.init();
        ASSERT_EQ(page.size(), 0);
        int pos = 0;
        std::string tmp;
        do {
            tmp = std::to_string(pos);
        } while(page.insert(pos++, tmp.c_str(), tmp.length()));

        int total_size = page.size();
        auto ret = page.split(pid);
        auto& upper_page = ret.second;
        int lower_size = page.size();
        int upper_size = upper_page.size();
        ASSERT_GT(ret.first, 0);
        ASSERT_EQ(lower_size + upper_size, total_size);
        for (int i = 0; i < page.size(); ++i) {
            tmp = std::to_string(i);
            ASSERT_EQ(memcmp(page.get_block(i).second, 
                      tmp.c_str(), tmp.length()), 0);
        }
        for (int i = 0; i < upper_page.size(); ++i) {
            tmp = std::to_string(i + lower_size);
            ASSERT_EQ(memcmp(upper_page.get_block(i).second, 
                      tmp.c_str(), tmp.length()), 0);
        }
 

    }
    remove(filename.c_str());
}

TEST(VARIANT_PAGE, MERGE) {    
    std::string filename("testfile");
    remove(filename.c_str());

    pager pg(filename.c_str());
    int pid = pg.new_page();
    {
        variant_page page{pg.read_for_write(pid), &pg};
        page.init();
        ASSERT_EQ(page.size(), 0);
        int pos = 0;
        std::string tmp;
        do {
            tmp = std::to_string(pos);
        } while(page.insert(pos++, tmp.c_str(), tmp.length()));

        int total_size = page.size();
        auto ret = page.split(pid);
        ASSERT_GT(ret.first, 0);

        auto& upper_page = ret.second;
        int lower_size = page.size();
        int upper_size = upper_page.size();

        ASSERT_TRUE(upper_page.merge(page, ret.first));
        ASSERT_EQ(upper_page.size(), lower_size + upper_size);

        for (int i = 0; i < upper_size; ++i) {
            tmp = std::to_string(i + lower_size);
            ASSERT_EQ(memcmp(upper_page.get_block(i).second, 
                      tmp.c_str(), tmp.length()), 0);
        }
        for (int i = 0; i < lower_size; ++i) {
            tmp = std::to_string(i);
            ASSERT_EQ(memcmp(upper_page.get_block(i + upper_size).second, 
                      tmp.c_str(), tmp.length()), 0);
        }
    }
    remove(filename.c_str());
}

TEST(VARIANT_PAGE, MOVE_FROM) {    
    std::string filename("testfile");
    remove(filename.c_str());

    pager pg(filename.c_str());
    int pid = pg.new_page();
    {
        variant_page page{pg.read_for_write(pid), &pg};
        page.init();
        ASSERT_EQ(page.size(), 0);
        int pos = 0;
        std::string tmp;
        do {
            tmp = std::to_string(pos);
        } while(page.insert(pos++, tmp.c_str(), tmp.length()));
        int total_size = page.size();
        auto ret = page.split(pid);
        ASSERT_GT(ret.first, 0);

        auto& upper_page = ret.second;
        int lower_size = page.size();
        int upper_size = upper_page.size();

        while (page.size() > 0)
        {
            upper_page.move_from(page, page.size() - 1, upper_page.size());
        }
        
        ASSERT_EQ(upper_page.size(), lower_size + upper_size);

        for (int i = 0; i < upper_size; ++i) {
            tmp = std::to_string(i + lower_size);
            ASSERT_EQ(memcmp(upper_page.get_block(i).second, 
                      tmp.c_str(), tmp.length()), 0);
        }
        for (int i = 0; i < lower_size; ++i) {
            tmp = std::to_string(upper_page.size() - upper_size - i - 1);
            ASSERT_EQ(memcmp(upper_page.get_block(i + upper_size).second, 
                      tmp.c_str(), tmp.length()), 0);
        }
    }
    remove(filename.c_str());
}
