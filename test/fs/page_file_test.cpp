#include "fs/page_file.h"

#include "gtest/gtest.h"

TEST(PAGE_FILE, SINGLETON) {
    buffer_manager* bm_0 = buffer_manager::get_instance();
    buffer_manager* bm_1 = buffer_manager::get_instance();
    ASSERT_EQ(bm_0, bm_1);
}

TEST(PAGE_FILE, READ_WRITE_FLUSH) {
    std::string filename("test_file");
    std::string test("test");
    std::string test_after("test_after");
    
    page_file file;
    ASSERT_TRUE(file.open(filename.c_str()));

    // write to file
    int pid = file.new_page();
    ASSERT_NE(pid, 0);
    char *pos_read_only = file.read(pid);
    strcpy(pos_read_only, test.c_str());
    file.flush();
    // write over cache
    strcpy(pos_read_only, test_after.c_str());
    // re-read, if written will equal to test
    pos_read_only = file.read(pid);
    ASSERT_NE(strcmp(pos_read_only, test.c_str()), 0);
    ASSERT_EQ(strcmp(pos_read_only, test_after.c_str()), 0);

    int pid_2 = file.new_page();
    ASSERT_NE(pid_2, 0);
    char *pos = file.read_for_write(pid_2);
    strcpy(pos, test.c_str());
    file.flush();
    strcpy(pos, test_after.c_str());
    pos = file.read(pid_2);
    ASSERT_EQ(strcmp(pos, test.c_str()), 0);
    ASSERT_NE(strcmp(pos, test_after.c_str()), 0);

    remove(filename.c_str());
}

TEST(PAGE_FILE, ONE_FILE_ONE_PAGE_WRITE_READ) {
    std::string filename("test_file");
    
    page_file file;
    ASSERT_TRUE(file.open(filename.c_str()));

    // write to file
    int pid = file.new_page();
    ASSERT_NE(pid, 0);
    char *pos = file.read_for_write(pid);
    std::string test("12345_test_@@@@!@#$%^&*()LKJHGFDSAMNBVCXZqwertyuioplkjhgfdsazxcvbnm\n\t\\n\n");
    strcpy(pos, test.c_str());
    file.close();

    // reopen, read from file
    ASSERT_TRUE(file.open(filename.c_str()));
    char * ans = file.read(pid);
    ASSERT_EQ(strcmp(ans, test.c_str()), 0);
    file.close();
    
    remove(filename.c_str());
}

TEST(PAGE_FILE, MULTI_FILE_ONE_PAGE_WRITE_READ) {
    std::string filename_1("test_file_1");
    std::string filename_2("test_file_2");
    std::string test_str_1("12345_test_@@@@!@#$%^&*()LKJHGFDSAMNBVCXZqwertyuioplkjhgfdsazxcvbnm\n\t\\n\n");
    std::string test_str_2("54321_test_@@@@!@#$%^&*()LKJHGFDSAMNBVCXZqwertyuioplkjhgfdsazxcvbnm\n\t\\n\n");
    
    int pid_1, pid_2;
    page_file file_1(filename_1.c_str());
    pid_1 = file_1.new_page();
    char *pos_1 = file_1.read_for_write(pid_1);
    strcpy(pos_1, test_str_1.c_str());
    file_1.close();

    page_file file_2(filename_2.c_str());
    pid_2 = file_2.new_page();
    char *pos_2 = file_2.read_for_write(pid_2);
    strcpy(pos_2, test_str_2.c_str());
    file_2.close();
        
    ASSERT_NE(pid_1, 0);
    ASSERT_NE(pid_2, 0);

    file_1.open(filename_1.c_str());
    char *read_pos_1 = file_1.read(pid_1);
    ASSERT_EQ(strcmp(read_pos_1, test_str_1.c_str()), 0);
    ASSERT_NE(strcmp(read_pos_1, test_str_2.c_str()), 0);

    file_2.open(filename_2.c_str());
    char *read_pos_2 = file_2.read(pid_2);    
    ASSERT_NE(strcmp(read_pos_2, test_str_1.c_str()), 0);
    ASSERT_EQ(strcmp(read_pos_2, test_str_2.c_str()), 0);

    remove(filename_1.c_str());
    remove(filename_2.c_str());
}

TEST(PAGE_FILE, MULTI_FILE_ONE_PAGE_WRITE_READ_SAME_FID) {
    std::string filename_1("test_file_1");
    std::string filename_2("test_file_2");
    std::string test_str_1("12345_test_@@@@!@#$%^&*()LKJHGFDSAMNBVCXZqwertyuioplkjhgfdsazxcvbnm\n\t\\n\n");
    std::string test_str_2("54321_test_@@@@!@#$%^&*()LKJHGFDSAMNBVCXZqwertyuioplkjhgfdsazxcvbnm\n\t\\n\n");
    
    int pid_1, pid_2;
    {
        page_file file(filename_1.c_str());
        pid_1 = file.new_page();
        char *pos = file.read_for_write(pid_1);
        strcpy(pos, test_str_1.c_str());
        // de-constructor
    }
    {
        page_file file(filename_2.c_str());
        pid_2 = file.new_page();
        char *pos = file.read_for_write(pid_2);
        strcpy(pos, test_str_2.c_str());
        // de-constructor
    }
    ASSERT_NE(pid_1, 0);
    ASSERT_NE(pid_2, 0);

    page_file file_1(filename_1.c_str());
    char *read_pos_1 = file_1.read(pid_1);
    ASSERT_EQ(strcmp(read_pos_1, test_str_1.c_str()), 0);
    ASSERT_NE(strcmp(read_pos_1, test_str_2.c_str()), 0);

    page_file file_2(filename_2.c_str());
    char *read_pos_2 = file_2.read(pid_2);    
    ASSERT_NE(strcmp(read_pos_2, test_str_1.c_str()), 0);
    ASSERT_EQ(strcmp(read_pos_2, test_str_2.c_str()), 0);

    remove(filename_1.c_str());
    remove(filename_2.c_str());
}

TEST(PAGE_FILE, ONE_FILE_MULTI_PAGE_WRITE_READ) {
    std::string filename("test_file");
    std::string test_str_1("12345_test_@@@@!@#$%^&*()LKJHGFDSAMNBVCXZqwertyuioplkjhgfdsazxcvbnm\n\t\\n\n");
    std::string test_str_2("54321_test_@@@@!@#$%^&*()LKJHGFDSAMNBVCXZqwertyuioplkjhgfdsazxcvbnm\n\t\\n\n");
    
    int pid_1, pid_2;
    {
        page_file file(filename.c_str());
        pid_1 = file.new_page();
        char *pos = file.read_for_write(pid_1);
        strcpy(pos, test_str_1.c_str());
        
        pid_2 = file.new_page();
        pos = file.read_for_write(pid_2);
        strcpy(pos, test_str_2.c_str());
        file.close();
        // de-constructor
    }
    ASSERT_LE(pid_1, pid_2);

    page_file file(filename.c_str());
    char *read_pos_1 = file.read(pid_1);
    ASSERT_EQ(strcmp(read_pos_1, test_str_1.c_str()), 0);
    ASSERT_NE(strcmp(read_pos_1, test_str_2.c_str()), 0);
    char *read_pos_2 = file.read(pid_2);
    ASSERT_NE(strcmp(read_pos_2, test_str_1.c_str()), 0);
    ASSERT_EQ(strcmp(read_pos_2, test_str_2.c_str()), 0);

    remove(filename.c_str());
}

TEST(PAGE_FILE, OPEN_MAX) {
    std::string filename("test_file");
    std::string test("test");
    page_file* files = new page_file[MAX_FILE_ID];
    for (int i = 0; i < MAX_FILE_ID - 1; i++) {
        ASSERT_TRUE(files[i].open(filename.c_str()));
    }
    ASSERT_FALSE(files[MAX_FILE_ID - 1].open(filename.c_str()));
    for (int i = 0; i < MAX_FILE_ID; i++) {
        files[i].close();
    }
    remove(filename.c_str());
}
