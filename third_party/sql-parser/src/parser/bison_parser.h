/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_HSQL_BISON_PARSER_H_INCLUDED
# define YY_HSQL_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef HSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HSQL_DEBUG 1
#  else
#   define HSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HSQL_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 38 "bison_parser.y" /* yacc.c:1909  */

  // clang-format on
  // %code requires block

#include "../SQLParserResult.h"
#include "../sql/statements.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION                        \
  yylloc->first_line = yylloc->last_line;     \
  yylloc->first_column = yylloc->last_column; \
  for (int i = 0; yytext[i] != '\0'; i++) {   \
    yylloc->total_column++;                   \
    yylloc->string_length++;                  \
    if (yytext[i] == '\n') {                  \
      yylloc->last_line++;                    \
      yylloc->last_column = 0;                \
    } else {                                  \
      yylloc->last_column++;                  \
    }                                         \
  }

#line 76 "bison_parser.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_IDENTIFIER = 258,
    SQL_STRING = 259,
    SQL_FLOATVAL = 260,
    SQL_INTVAL = 261,
    SQL_DEALLOCATE = 262,
    SQL_PARAMETERS = 263,
    SQL_INTERSECT = 264,
    SQL_TEMPORARY = 265,
    SQL_TIMESTAMP = 266,
    SQL_DISTINCT = 267,
    SQL_NVARCHAR = 268,
    SQL_RESTRICT = 269,
    SQL_TRUNCATE = 270,
    SQL_ANALYZE = 271,
    SQL_BETWEEN = 272,
    SQL_CASCADE = 273,
    SQL_COLUMNS = 274,
    SQL_CONTROL = 275,
    SQL_DEFAULT = 276,
    SQL_EXECUTE = 277,
    SQL_EXPLAIN = 278,
    SQL_INTEGER = 279,
    SQL_NATURAL = 280,
    SQL_PREPARE = 281,
    SQL_PRIMARY = 282,
    SQL_SCHEMAS = 283,
    SQL_CHARACTER_VARYING = 284,
    SQL_REAL = 285,
    SQL_DECIMAL = 286,
    SQL_SMALLINT = 287,
    SQL_SPATIAL = 288,
    SQL_VARCHAR = 289,
    SQL_VIRTUAL = 290,
    SQL_DESCRIBE = 291,
    SQL_BEFORE = 292,
    SQL_COLUMN = 293,
    SQL_CREATE = 294,
    SQL_DELETE = 295,
    SQL_DIRECT = 296,
    SQL_DOUBLE = 297,
    SQL_ESCAPE = 298,
    SQL_EXCEPT = 299,
    SQL_EXISTS = 300,
    SQL_EXTRACT = 301,
    SQL_CAST = 302,
    SQL_FORMAT = 303,
    SQL_GLOBAL = 304,
    SQL_HAVING = 305,
    SQL_IMPORT = 306,
    SQL_INSERT = 307,
    SQL_ISNULL = 308,
    SQL_OFFSET = 309,
    SQL_RENAME = 310,
    SQL_SCHEMA = 311,
    SQL_SELECT = 312,
    SQL_SORTED = 313,
    SQL_USE = 314,
    SQL_TABLES = 315,
    SQL_UNIQUE = 316,
    SQL_UNLOAD = 317,
    SQL_UPDATE = 318,
    SQL_VALUES = 319,
    SQL_AFTER = 320,
    SQL_ALTER = 321,
    SQL_CROSS = 322,
    SQL_DELTA = 323,
    SQL_FLOAT = 324,
    SQL_GROUP = 325,
    SQL_INDEX = 326,
    SQL_INNER = 327,
    SQL_LIMIT = 328,
    SQL_LOCAL = 329,
    SQL_MERGE = 330,
    SQL_MINUS = 331,
    SQL_ORDER = 332,
    SQL_OUTER = 333,
    SQL_RIGHT = 334,
    SQL_TABLE = 335,
    SQL_UNION = 336,
    SQL_USING = 337,
    SQL_WHERE = 338,
    SQL_CALL = 339,
    SQL_CASE = 340,
    SQL_CHAR = 341,
    SQL_COPY = 342,
    SQL_DATE = 343,
    SQL_DATETIME = 344,
    SQL_DESC = 345,
    SQL_DROP = 346,
    SQL_ELSE = 347,
    SQL_FILE = 348,
    SQL_FROM = 349,
    SQL_FULL = 350,
    SQL_HASH = 351,
    SQL_HINT = 352,
    SQL_INTO = 353,
    SQL_JOIN = 354,
    SQL_LEFT = 355,
    SQL_LIKE = 356,
    SQL_LOAD = 357,
    SQL_LONG = 358,
    SQL_NULL = 359,
    SQL_PLAN = 360,
    SQL_SHOW = 361,
    SQL_TEXT = 362,
    SQL_THEN = 363,
    SQL_TIME = 364,
    SQL_VIEW = 365,
    SQL_WHEN = 366,
    SQL_WITH = 367,
    SQL_ADD = 368,
    SQL_ALL = 369,
    SQL_AND = 370,
    SQL_ASC = 371,
    SQL_END = 372,
    SQL_FOR = 373,
    SQL_INT = 374,
    SQL_KEY = 375,
    SQL_NOT = 376,
    SQL_OFF = 377,
    SQL_SET = 378,
    SQL_TOP = 379,
    SQL_AS = 380,
    SQL_BY = 381,
    SQL_IF = 382,
    SQL_IN = 383,
    SQL_IS = 384,
    SQL_OF = 385,
    SQL_ON = 386,
    SQL_OR = 387,
    SQL_TO = 388,
    SQL_ARRAY = 389,
    SQL_CONCAT = 390,
    SQL_ILIKE = 391,
    SQL_SECOND = 392,
    SQL_MINUTE = 393,
    SQL_HOUR = 394,
    SQL_DAY = 395,
    SQL_MONTH = 396,
    SQL_YEAR = 397,
    SQL_SECONDS = 398,
    SQL_MINUTES = 399,
    SQL_HOURS = 400,
    SQL_DAYS = 401,
    SQL_MONTHS = 402,
    SQL_YEARS = 403,
    SQL_INTERVAL = 404,
    SQL_TRUE = 405,
    SQL_FALSE = 406,
    SQL_TRANSACTION = 407,
    SQL_BEGIN = 408,
    SQL_COMMIT = 409,
    SQL_ROLLBACK = 410,
    SQL_EQUALS = 411,
    SQL_NOTEQUALS = 412,
    SQL_LESS = 413,
    SQL_GREATER = 414,
    SQL_LESSEQ = 415,
    SQL_GREATEREQ = 416,
    SQL_NOTNULL = 417,
    SQL_UMINUS = 418
  };
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED

union HSQL_STYPE
{
#line 98 "bison_parser.y" /* yacc.c:1909  */

  // clang-format on
  bool bval;
  char* sval;
  double fval;
  int64_t ival;
  uintmax_t uval;

  // statements
  hsql::AlterStatement* alter_stmt;
  hsql::CreateStatement* create_stmt;
  hsql::DeleteStatement* delete_stmt;
  hsql::DropStatement* drop_stmt;
  hsql::ExecuteStatement* exec_stmt;
  hsql::ExportStatement* export_stmt;
  hsql::ImportStatement* import_stmt;
  hsql::InsertStatement* insert_stmt;
  hsql::PrepareStatement* prep_stmt;
  hsql::SelectStatement* select_stmt;
  hsql::ShowStatement* show_stmt;
  hsql::DBStatement* db_stmt;
  hsql::SQLStatement* statement;
  hsql::TransactionStatement* transaction_stmt;
  hsql::UpdateStatement* update_stmt;

  hsql::Alias* alias_t;
  hsql::AlterAction* alter_action_t;
  hsql::ColumnDefinition* column_t;
  hsql::ColumnType column_type_t;
  hsql::ConstraintType column_constraint_t;
  hsql::DatetimeField datetime_field;
  hsql::DropColumnAction* drop_action_t;
  hsql::Expr* expr;
  hsql::GroupByDescription* group_t;
  hsql::ImportType import_type_t;
  hsql::JoinType join_type;
  hsql::LimitDescription* limit;
  hsql::OrderDescription* order;
  hsql::OrderType order_type;
  hsql::SetOperation* set_operator_t;
  hsql::TableConstraint* table_constraint_t;
  hsql::TableElement* table_element_t;
  hsql::TableName table_name;
  hsql::TableRef* table;
  hsql::UpdateClause* update_t;
  hsql::WithDescription* with_description_t;

  std::vector<char*>* str_vec;
  std::vector<hsql::ConstraintType>* column_constraint_vec;
  std::vector<hsql::Expr*>* expr_vec;
  std::vector<hsql::OrderDescription*>* order_vec;
  std::vector<hsql::SQLStatement*>* stmt_vec;
  std::vector<hsql::TableElement*>* table_element_vec;
  std::vector<hsql::TableRef*>* table_vec;
  std::vector<hsql::UpdateClause*>* update_vec;
  std::vector<hsql::WithDescription*>* with_description_vec;

  std::pair<int64_t, int64_t>* ival_pair;

#line 312 "bison_parser.h" /* yacc.c:1909  */
};

typedef union HSQL_STYPE HSQL_STYPE;
# define HSQL_STYPE_IS_TRIVIAL 1
# define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HSQL_LTYPE && ! defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HSQL_LTYPE_IS_DECLARED 1
# define HSQL_LTYPE_IS_TRIVIAL 1
#endif



int hsql_parse (hsql::SQLParserResult* result, yyscan_t scanner);

#endif /* !YY_HSQL_BISON_PARSER_H_INCLUDED  */
