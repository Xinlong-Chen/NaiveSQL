#pragma once

#include <string>
#include <memory>

#include "sql_runner.h"
#include "fs/page_file.h"

#include "sql-parser/src/sql/SQLStatement.h"

class Runner
{
private:
    std::unique_ptr<page_file> page_io;
    std::unique_ptr<SQLRunner> sql_runner;
    std::string basedir;
    std::string dbname;

    std::string getFileName(std::string db)
    {
        return basedir + "/" + db + ".naivesql";
    }

protected:
    void createDB(std::string dbname);
    void useDB(std::string dbname);
    void dropDB(std::string dbname);

public:
    Runner(std::string dir) : basedir(dir) {}
    void run(const hsql::SQLStatement *stmt);
};