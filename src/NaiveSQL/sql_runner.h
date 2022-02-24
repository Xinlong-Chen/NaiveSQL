#pragma once

#include <memory>

#include "fs/page_file.h"

#include "sql-parser/src/sql/SQLStatement.h"

class SQLRunner
{
private:
    page_file &page_io;

public:
    SQLRunner(page_file &page_io) : page_io(page_io) {}
    void run(const hsql::SQLStatement *stmt);
};