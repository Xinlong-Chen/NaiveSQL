#include "runner.h"

#include <iostream>
#include <unistd.h>

#include "sql_runner.h"

#include "sql-parser/src/sql/DbStatement.h"

void Runner::createDB(std::string dbname)
{
    auto filename = getFileName(dbname);
    if (access(filename.c_str(), R_OK | W_OK) == 0)
    {
        // Database exists
        return;
    }
    printf("create db: %s; filename\n", dbname.c_str(), filename.c_str());
    this->dbname = dbname;
    page_io = std::make_unique<page_file>(filename.c_str());
    sql_runner = std::make_unique<SQLRunner>(*page_io);
}

void Runner::useDB(std::string dbname)
{
    auto filename = getFileName(dbname);
    if (access(filename.c_str(), R_OK | W_OK))
    {
        // Database not exists
        return;
    }
    this->dbname = dbname;
    page_io = std::make_unique<page_file>(filename.c_str());
    sql_runner = std::make_unique<SQLRunner>(*page_io);
}

void Runner::dropDB(std::string dbname)
{
    auto filename = getFileName(dbname);
    if (dbname == this->dbname)
    {
        sql_runner = nullptr;
        page_io = nullptr;
    }
    unlink(filename.c_str());
}

void Runner::run(const hsql::SQLStatement *stmt)
{
    if (stmt->isType(hsql::kStmtDb))
    {
        const auto *db_stmt = static_cast<const hsql::DbStatement *>(stmt);
        switch (db_stmt->type)
        {
        case hsql::kCreateDB:
            this->createDB(db_stmt->dbname);
            break;
        case hsql::kDropDB:
            this->dropDB(db_stmt->dbname);
            break;
        case hsql::kUseDB:
            this->useDB(db_stmt->dbname);
            break;
        default:
            // printf()
            break;
        }
        return;
    }
    // run other sql
}
