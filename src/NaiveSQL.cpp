#include <iostream>
#include <unistd.h>
#include <stdlib.h>

#include <readline/readline.h>
#include <readline/history.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/time.h>

#include "runner.h"

#include "sql-parser/src/SQLParser.h"

static void strip_whitespace(std::string & str) {
    while(!str.empty()) {
        auto c = str.back();
        if(c == ' ' || c == '\r' || c == '\n' || c == '\t')
            str.pop_back();
        else break;
    }
}

static std::string read_sql() {
    std::string ret;
    char * line_read = readline("> ");
    if(line_read == nullptr) return ret;
    ret += line_read;
    free(line_read);
    strip_whitespace(ret);
    while(ret.back() != ';') {
        char * line_read = readline("... ");
        if(line_read == nullptr) break;
        ret += " ";
        ret += line_read;
        free(line_read);
        strip_whitespace(ret);
    }
    return ret;
}

static long long get_time() {
    struct timeval tp;
    gettimeofday(&tp, nullptr);
    return tp.tv_sec * 1000 + tp.tv_usec / 1000;
}

int main(int argc, char *argv[])
{

    std::string db_dir = "NaiveSQL.db";
    if(access(db_dir.c_str(), F_OK) < 0 ){
        mkdir(db_dir.c_str(), W_OK | R_OK | X_OK);
    }
    auto runner = std::make_unique<Runner>(db_dir);

    while (true) {
        std::string sql = read_sql();
        if(sql.size() == 0) break;

        add_history(sql.c_str());


        auto t0 = get_time();

        hsql::SQLParserResult result;
        hsql::SQLParser::parse(sql, &result);

        if (!result.isValid()) {
            std::cerr << "Syntax error." << std::endl;
            continue;
        }
        if (result.size() == 0) {
            continue;
        }

        auto t1 = get_time();

        const hsql::SQLStatement* stmt = result.getStatement(0);
        runner->run(stmt);

        auto t2 = get_time();

        std::cerr << std::endl << "Time: parse " 
            << t1 - t0 << "ms, execution " << t2 - t1 << "ms" << std::endl;
    }
    return 0;
}