/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs


/* Copy the first part of user declarations.  */
#line 2 "bison_parser.y" /* yacc.c:339  */

  // clang-format on
  /**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
  /*********************************
 ** Section 1: C Declarations
 *********************************/

#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>
#include <string.h>

  using namespace hsql;

  int yyerror(YYLTYPE * llocp, SQLParserResult * result, yyscan_t scanner, const char* msg) {
    result->setIsValid(false);
    result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
    return 0;
  }
  // clang-format off

#line 104 "bison_parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison_parser.h".  */
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
#line 38 "bison_parser.y" /* yacc.c:355  */

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

#line 166 "bison_parser.cpp" /* yacc.c:355  */

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
    SQL_DATABASE = 279,
    SQL_USE = 280,
    SQL_INTEGER = 281,
    SQL_NATURAL = 282,
    SQL_PREPARE = 283,
    SQL_PRIMARY = 284,
    SQL_SCHEMAS = 285,
    SQL_CHARACTER_VARYING = 286,
    SQL_REAL = 287,
    SQL_DECIMAL = 288,
    SQL_SMALLINT = 289,
    SQL_SPATIAL = 290,
    SQL_VARCHAR = 291,
    SQL_VIRTUAL = 292,
    SQL_DESCRIBE = 293,
    SQL_BEFORE = 294,
    SQL_COLUMN = 295,
    SQL_CREATE = 296,
    SQL_DELETE = 297,
    SQL_DIRECT = 298,
    SQL_DOUBLE = 299,
    SQL_ESCAPE = 300,
    SQL_EXCEPT = 301,
    SQL_EXISTS = 302,
    SQL_EXTRACT = 303,
    SQL_CAST = 304,
    SQL_FORMAT = 305,
    SQL_GLOBAL = 306,
    SQL_HAVING = 307,
    SQL_IMPORT = 308,
    SQL_INSERT = 309,
    SQL_ISNULL = 310,
    SQL_OFFSET = 311,
    SQL_RENAME = 312,
    SQL_SCHEMA = 313,
    SQL_SELECT = 314,
    SQL_SORTED = 315,
    SQL_TABLES = 316,
    SQL_UNIQUE = 317,
    SQL_UNLOAD = 318,
    SQL_UPDATE = 319,
    SQL_VALUES = 320,
    SQL_AFTER = 321,
    SQL_ALTER = 322,
    SQL_CROSS = 323,
    SQL_DELTA = 324,
    SQL_FLOAT = 325,
    SQL_GROUP = 326,
    SQL_INDEX = 327,
    SQL_INNER = 328,
    SQL_LIMIT = 329,
    SQL_LOCAL = 330,
    SQL_MERGE = 331,
    SQL_MINUS = 332,
    SQL_ORDER = 333,
    SQL_OUTER = 334,
    SQL_RIGHT = 335,
    SQL_TABLE = 336,
    SQL_UNION = 337,
    SQL_USING = 338,
    SQL_WHERE = 339,
    SQL_CALL = 340,
    SQL_CASE = 341,
    SQL_CHAR = 342,
    SQL_COPY = 343,
    SQL_DATE = 344,
    SQL_DATETIME = 345,
    SQL_DESC = 346,
    SQL_DROP = 347,
    SQL_ELSE = 348,
    SQL_FILE = 349,
    SQL_FROM = 350,
    SQL_FULL = 351,
    SQL_HASH = 352,
    SQL_HINT = 353,
    SQL_INTO = 354,
    SQL_JOIN = 355,
    SQL_LEFT = 356,
    SQL_LIKE = 357,
    SQL_LOAD = 358,
    SQL_LONG = 359,
    SQL_NULL = 360,
    SQL_PLAN = 361,
    SQL_SHOW = 362,
    SQL_TEXT = 363,
    SQL_THEN = 364,
    SQL_TIME = 365,
    SQL_VIEW = 366,
    SQL_WHEN = 367,
    SQL_WITH = 368,
    SQL_ADD = 369,
    SQL_ALL = 370,
    SQL_AND = 371,
    SQL_ASC = 372,
    SQL_END = 373,
    SQL_FOR = 374,
    SQL_INT = 375,
    SQL_KEY = 376,
    SQL_NOT = 377,
    SQL_OFF = 378,
    SQL_SET = 379,
    SQL_TOP = 380,
    SQL_AS = 381,
    SQL_BY = 382,
    SQL_IF = 383,
    SQL_IN = 384,
    SQL_IS = 385,
    SQL_OF = 386,
    SQL_ON = 387,
    SQL_OR = 388,
    SQL_TO = 389,
    SQL_ARRAY = 390,
    SQL_CONCAT = 391,
    SQL_ILIKE = 392,
    SQL_SECOND = 393,
    SQL_MINUTE = 394,
    SQL_HOUR = 395,
    SQL_DAY = 396,
    SQL_MONTH = 397,
    SQL_YEAR = 398,
    SQL_SECONDS = 399,
    SQL_MINUTES = 400,
    SQL_HOURS = 401,
    SQL_DAYS = 402,
    SQL_MONTHS = 403,
    SQL_YEARS = 404,
    SQL_INTERVAL = 405,
    SQL_TRUE = 406,
    SQL_FALSE = 407,
    SQL_TRANSACTION = 408,
    SQL_BEGIN = 409,
    SQL_COMMIT = 410,
    SQL_ROLLBACK = 411,
    SQL_EQUALS = 412,
    SQL_NOTEQUALS = 413,
    SQL_LESS = 414,
    SQL_GREATER = 415,
    SQL_LESSEQ = 416,
    SQL_GREATEREQ = 417,
    SQL_NOTNULL = 418,
    SQL_UMINUS = 419
  };
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED

union HSQL_STYPE
{
#line 98 "bison_parser.y" /* yacc.c:355  */

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
  hsql::SQLStatement* statement;
  hsql::TransactionStatement* transaction_stmt;
  hsql::UpdateStatement* update_stmt;
  hsql::DbStatement* db_stmt;

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

#line 403 "bison_parser.cpp" /* yacc.c:355  */
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

/* Copy the second part of user declarations.  */

#line 433 "bison_parser.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  72
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   922

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  182
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  121
/* YYNRULES -- Number of rules.  */
#define YYNRULES  307
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  556

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   419

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   171,     2,     2,
     176,   177,   169,   167,   180,   168,   178,   170,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   179,
     160,   157,   161,   181,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   174,     2,   175,   172,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   158,   159,   162,   163,   164,   165,   166,   173
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   296,   296,   315,   321,   328,   332,   336,   337,   338,
     339,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   356,   357,   359,   363,   368,   372,   382,   383,   384,
     386,   386,   392,   398,   400,   404,   415,   421,   428,   443,
     448,   449,   455,   467,   468,   473,   483,   487,   491,   502,
     515,   523,   530,   537,   546,   547,   549,   553,   558,   559,
     561,   566,   567,   568,   569,   570,   571,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   585,   586,   588,   589,
     590,   592,   593,   595,   599,   604,   605,   606,   607,   609,
     610,   618,   624,   630,   636,   642,   643,   650,   656,   658,
     668,   675,   686,   693,   701,   702,   709,   716,   720,   725,
     735,   739,   743,   755,   755,   757,   758,   767,   768,   770,
     780,   791,   796,   800,   804,   809,   810,   812,   822,   823,
     825,   827,   828,   830,   832,   833,   835,   840,   842,   843,
     845,   846,   848,   852,   857,   859,   860,   861,   865,   866,
     868,   869,   870,   871,   872,   873,   878,   882,   887,   888,
     890,   894,   899,   907,   907,   907,   907,   907,   909,   910,
     910,   910,   910,   910,   910,   910,   910,   911,   911,   915,
     915,   917,   918,   919,   920,   921,   923,   923,   924,   925,
     926,   927,   928,   929,   930,   931,   932,   934,   935,   937,
     938,   939,   940,   944,   945,   946,   947,   949,   950,   952,
     953,   955,   956,   957,   958,   959,   960,   961,   963,   964,
     966,   968,   970,   971,   972,   973,   974,   975,   977,   978,
     979,   980,   981,   982,   984,   984,   986,   988,   990,   992,
     993,   994,   995,   997,   997,   997,   997,   997,   997,   997,
     999,  1001,  1002,  1004,  1005,  1007,  1009,  1011,  1022,  1026,
    1037,  1069,  1078,  1078,  1085,  1085,  1087,  1087,  1094,  1098,
    1103,  1111,  1117,  1121,  1126,  1127,  1129,  1129,  1131,  1131,
    1133,  1134,  1136,  1136,  1142,  1142,  1144,  1146,  1150,  1155,
    1165,  1172,  1180,  1196,  1197,  1198,  1199,  1200,  1201,  1202,
    1203,  1204,  1205,  1207,  1213,  1213,  1216,  1220
};
#endif

#if HSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "FLOATVAL",
  "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT", "TEMPORARY",
  "TIMESTAMP", "DISTINCT", "NVARCHAR", "RESTRICT", "TRUNCATE", "ANALYZE",
  "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT", "EXECUTE",
  "EXPLAIN", "DATABASE", "USE", "INTEGER", "NATURAL", "PREPARE", "PRIMARY",
  "SCHEMAS", "CHARACTER_VARYING", "REAL", "DECIMAL", "SMALLINT", "SPATIAL",
  "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE", "COLUMN", "CREATE", "DELETE",
  "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS", "EXTRACT", "CAST",
  "FORMAT", "GLOBAL", "HAVING", "IMPORT", "INSERT", "ISNULL", "OFFSET",
  "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES", "UNIQUE", "UNLOAD",
  "UPDATE", "VALUES", "AFTER", "ALTER", "CROSS", "DELTA", "FLOAT", "GROUP",
  "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE", "MINUS", "ORDER", "OUTER",
  "RIGHT", "TABLE", "UNION", "USING", "WHERE", "CALL", "CASE", "CHAR",
  "COPY", "DATE", "DATETIME", "DESC", "DROP", "ELSE", "FILE", "FROM",
  "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT", "LIKE", "LOAD", "LONG",
  "NULL", "PLAN", "SHOW", "TEXT", "THEN", "TIME", "VIEW", "WHEN", "WITH",
  "ADD", "ALL", "AND", "ASC", "END", "FOR", "INT", "KEY", "NOT", "OFF",
  "SET", "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO",
  "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH",
  "YEAR", "SECONDS", "MINUTES", "HOURS", "DAYS", "MONTHS", "YEARS",
  "INTERVAL", "TRUE", "FALSE", "TRANSACTION", "BEGIN", "COMMIT",
  "ROLLBACK", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS",
  "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','",
  "'?'", "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_file_type", "export_statement",
  "show_statement", "db_statement", "create_statement", "opt_not_exists",
  "table_elem_commalist", "table_elem", "column_def", "column_type",
  "opt_time_precision", "opt_decimal_specification",
  "opt_column_constraints", "column_constraint_list", "column_constraint",
  "table_constraint", "drop_statement", "opt_exists", "alter_statement",
  "alter_action", "drop_action", "delete_statement", "truncate_statement",
  "insert_statement", "opt_column_list", "update_statement",
  "update_clause_commalist", "update_clause", "select_statement",
  "select_within_set_operation",
  "select_within_set_operation_no_parentheses", "select_with_paren",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_top", "opt_limit",
  "expr_list", "opt_literal_list", "literal_list", "expr_alias", "expr",
  "operand", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "case_list", "exists_expr", "comp_expr",
  "function_expr", "extract_expr", "cast_expr", "datetime_field",
  "datetime_field_plural", "duration_field", "array_expr", "array_index",
  "between_expr", "column_name", "literal", "string_literal",
  "bool_literal", "num_literal", "int_literal", "null_literal",
  "date_literal", "interval_literal", "param_expr", "table_ref",
  "table_ref_atomic", "nonjoin_table_ref_atomic", "table_ref_commalist",
  "table_ref_name", "table_ref_name_no_alias", "table_name",
  "opt_index_name", "table_alias", "opt_table_alias", "alias", "opt_alias",
  "opt_with_clause", "with_clause", "with_description_list",
  "with_description", "join_clause", "opt_join_type", "join_condition",
  "opt_semicolon", "ident_commalist", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,    61,   412,   413,
      60,    62,   414,   415,   416,   417,   418,    43,    45,    42,
      47,    37,    94,   419,    91,    93,    40,    41,    46,    59,
      44,    63
};
# endif

#define YYPACT_NINF -439

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-439)))

#define YYTABLE_NINF -305

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-305)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     619,    21,   141,   173,   195,   241,   141,    51,   157,   187,
      -5,   141,   206,   141,   189,    17,   294,   156,   156,   156,
     320,   147,  -439,   235,  -439,   235,  -439,  -439,  -439,  -439,
    -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,   -22,
    -439,   342,   171,  -439,   174,  -439,   256,  -439,   349,   225,
     225,   225,   141,   352,   141,   238,  -439,   228,   -38,   360,
     228,   228,   228,   141,  -439,   239,   184,  -439,  -439,  -439,
    -439,  -439,  -439,   614,  -439,   268,  -439,  -439,   243,   -22,
      46,  -439,   125,  -439,   366,    36,   367,  -439,   250,   371,
     141,   141,   291,  -439,   283,   202,   376,   333,   141,   377,
     377,  -439,   382,   141,   141,  -439,   210,   294,  -439,   211,
     384,   379,   217,   219,  -439,  -439,  -439,   -22,   273,   270,
     -22,    -9,  -439,  -439,  -439,  -439,   394,  -439,   395,  -439,
    -439,  -439,   229,   227,  -439,  -439,  -439,  -439,   709,  -439,
    -439,  -439,  -439,  -439,  -439,   358,  -439,   278,   -52,   202,
     355,  -439,   377,   408,   160,   255,   -50,  -439,  -439,   322,
     302,  -439,   302,  -439,  -439,  -439,  -439,  -439,   417,  -439,
    -439,   355,  -439,  -439,   343,  -439,  -439,    46,  -439,  -439,
     355,   343,   355,   134,  -439,  -439,   190,  -439,    36,  -439,
    -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,
    -439,  -439,  -439,  -439,  -439,   141,   420,   311,   146,   303,
      67,   254,   257,   258,   232,   422,   261,   413,  -439,   287,
      39,   448,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,
    -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,   332,  -439,
     -82,   260,  -439,   355,   376,  -439,   392,  -439,  -439,   390,
    -439,  -439,   266,    38,  -439,   348,   267,  -439,    32,    -9,
     -22,   269,  -439,   -45,    -9,    39,   396,    27,  -439,  -439,
     272,   356,  -439,   802,   325,   277,    74,  -439,  -439,  -439,
     311,     3,    20,   398,   190,   355,   355,    52,   -39,   282,
     413,   629,   355,   153,   289,   -48,   355,   355,   413,  -439,
     413,   -63,   288,    47,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   384,
     141,  -439,   451,    36,    39,  -439,   228,   352,    36,  -439,
     417,    19,   291,  -439,   355,  -439,   456,  -439,  -439,  -439,
    -439,   355,  -439,  -439,  -439,  -439,   355,   355,   408,   377,
    -439,   296,  -439,   297,  -439,   298,  -439,  -439,   305,  -439,
    -439,  -439,  -439,   312,  -439,   104,   316,   408,  -439,   146,
    -439,  -439,   355,  -439,  -439,   290,   383,   -66,   -57,   109,
     355,   355,  -439,   398,   389,  -117,  -439,  -439,  -439,   378,
     578,   655,   413,   317,   287,  -439,   391,   321,   655,   655,
     655,   655,   315,   315,   315,   315,   153,   153,   -92,   -92,
     -92,   -88,   323,  -439,  -439,    82,   494,  -439,    91,  -439,
     311,  -439,    77,  -439,   324,  -439,    25,  -439,   429,  -439,
    -439,  -439,    39,    39,    96,  -439,   495,   503,  -439,   504,
     506,   507,  -439,   393,  -439,  -439,   410,  -439,   104,  -439,
     408,    97,  -439,    98,  -439,   355,   802,   355,   355,  -439,
      83,   131,   339,  -439,   413,   655,   287,   340,   119,  -439,
    -439,  -439,  -439,  -439,   344,   419,  -439,  -439,  -439,   441,
     443,   446,   426,    19,   525,  -439,  -439,  -439,   402,  -439,
    -439,   353,   124,   357,   361,   362,  -439,  -439,  -439,   161,
    -439,  -439,   -46,   363,    39,   130,  -439,   355,  -439,   629,
     364,   162,  -439,  -439,    25,    19,  -439,  -439,  -439,    19,
     132,   369,   355,  -439,  -439,   526,  -439,  -439,  -439,  -439,
    -439,  -439,  -439,    39,  -439,  -439,  -439,  -439,   215,   408,
     -27,   365,   370,   355,   163,   355,  -439,  -439,    23,    39,
    -439,  -439,    39,   359,   372,  -439
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     285,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    31,    31,
       0,   305,     3,    22,    20,    22,    19,     8,     9,     7,
      10,    12,    17,    18,    14,    15,    13,    16,    11,     0,
     284,     0,   272,   101,    34,    48,     0,    45,     0,    55,
      55,    55,     0,     0,     0,     0,   271,    96,     0,     0,
      96,    96,    96,     0,    43,     0,   286,   287,    30,    27,
      29,    28,     1,   285,     2,     0,     6,     5,   149,     0,
     110,   111,   141,    93,     0,   159,     0,    46,     0,   275,
       0,     0,   135,    38,     0,   105,     0,     0,     0,     0,
       0,    47,     0,     0,     0,    44,     0,     0,     4,     0,
       0,   129,     0,     0,   123,   124,   122,     0,   126,     0,
       0,   155,   273,   250,   253,   255,     0,   256,     0,   251,
     252,   261,     0,   158,   160,   243,   244,   245,   254,   246,
     247,   248,   249,    33,    32,     0,   274,     0,     0,   105,
       0,   100,     0,     0,     0,     0,   135,   107,    95,     0,
      41,    39,    41,    94,    91,    92,   289,   288,     0,   148,
     128,     0,   118,   117,   141,   114,   113,   115,   125,   121,
       0,   141,     0,     0,   119,   257,   260,    35,     0,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   258,    54,     0,     0,   285,     0,     0,
     239,     0,     0,     0,     0,     0,     0,     0,   241,     0,
     134,   163,   170,   171,   172,   165,   167,   173,   166,   186,
     174,   175,   176,   177,   169,   164,   179,   180,     0,   306,
       0,     0,   103,     0,     0,   106,     0,    97,    98,     0,
      37,    42,    25,     0,    23,   132,   130,   156,   283,   155,
       0,   140,   142,   147,   155,   151,   153,   150,   259,   161,
       0,     0,    51,     0,     0,     0,     0,    56,    58,    59,
     285,   129,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   182,     0,   181,     0,     0,     0,     0,     0,   183,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   104,     0,     0,   109,   108,    96,     0,     0,    21,
       0,     0,   135,   131,     0,   281,     0,   282,   162,   112,
     116,     0,   146,   145,   144,   120,     0,     0,     0,     0,
      69,     0,    71,    80,    72,     0,    67,    68,     0,    64,
      65,    70,    73,    77,    61,    82,     0,     0,    50,     0,
      53,   218,     0,   240,   242,     0,     0,     0,     0,     0,
       0,     0,   205,     0,     0,     0,   178,   168,   197,   198,
       0,   193,     0,     0,     0,   184,     0,   196,   195,   211,
     212,   213,   214,   215,   216,   217,   188,   187,   190,   189,
     191,   192,     0,    36,   307,     0,     0,    40,     0,    24,
     285,   133,   262,   264,     0,   266,   279,   265,   137,   157,
     280,   143,   154,   152,     0,    49,     0,     0,    66,     0,
       0,     0,    74,     0,    86,    87,     0,    60,    81,    83,
       0,     0,    57,     0,   209,     0,     0,     0,     0,   203,
       0,     0,     0,   236,     0,   194,     0,     0,     0,   185,
     237,   102,    99,    26,     0,     0,   301,   293,   299,   297,
     300,   295,     0,     0,     0,   278,   270,   276,     0,   127,
      52,     0,     0,     0,     0,     0,    85,    88,    84,     0,
      90,   219,     0,     0,   207,     0,   206,     0,   210,   238,
       0,     0,   201,   199,   279,     0,   296,   298,   294,     0,
     263,   280,     0,    63,    79,     0,    75,    62,    76,    89,
     220,   221,   204,   208,   202,   200,   267,   290,   302,     0,
     139,     0,     0,     0,     0,     0,   136,    78,     0,   303,
     291,   277,   138,   239,     0,   292
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -439,  -439,  -439,   460,  -439,   518,  -439,   221,  -439,   248,
    -439,  -439,  -439,  -439,   220,   -91,   397,  -439,  -439,  -439,
    -439,   263,  -439,   183,  -439,    99,  -439,  -439,  -439,  -439,
     105,  -439,  -439,   -54,  -439,  -439,  -439,  -439,  -439,  -439,
     405,  -439,  -439,   314,  -196,   -99,  -439,   135,   -77,   -51,
    -439,  -439,   -93,   275,  -439,  -439,  -439,  -142,  -439,  -439,
     -11,  -439,   226,  -439,  -439,   -80,  -272,  -439,   -94,   234,
    -150,  -199,  -439,  -439,  -439,  -439,  -439,  -439,   274,  -439,
    -439,  -439,  -439,  -439,  -157,  -439,  -439,  -439,  -439,  -439,
      12,   -68,   -96,  -439,  -439,   -97,  -439,  -439,  -439,  -439,
    -439,  -438,    54,  -439,  -439,  -439,    -1,  -439,  -439,    48,
     308,  -439,  -439,  -439,  -439,   464,  -439,  -439,  -439,  -439,
    -329
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,    21,    22,    23,    76,   253,   254,    24,    69,
      25,   144,    26,    27,    94,   160,   250,    28,    29,    30,
      31,    89,   276,   277,   278,   365,   442,   438,   447,   448,
     449,   279,    32,    98,    33,   247,   248,    34,    35,    36,
     154,    37,   156,   157,    38,   174,   175,   176,    81,   117,
     118,   179,    82,   171,   255,   332,   333,   151,   489,   546,
     121,   261,   262,   344,   111,   184,   256,   132,   133,   257,
     258,   221,   222,   223,   224,   225,   226,   227,   288,   228,
     229,   230,   231,   232,   201,   202,   203,   233,   234,   235,
     236,   237,   135,   136,   137,   138,   139,   140,   141,   142,
     421,   422,   423,   424,   425,    55,   426,   147,   485,   486,
     487,   338,    39,    40,    66,    67,   427,   482,   550,    74,
     240
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     220,    43,   113,   161,   161,    47,   102,   103,   104,   162,
      56,   272,    58,   169,   245,   170,   291,   134,   293,   434,
     385,   181,    42,   373,   177,   545,   553,   177,   335,   268,
     263,   120,   265,   267,   150,   335,    63,    78,   451,   392,
     123,   124,   125,   206,   304,   520,   342,   182,   304,    41,
     296,    92,   457,    95,   380,   114,   161,    99,   463,   296,
     456,   238,   105,   334,   287,   183,   393,   297,   296,   295,
     296,   296,   343,   381,   207,    48,   297,   242,    64,   382,
     318,   538,   319,   347,   370,   297,   319,   297,   297,   148,
     149,   291,   115,   324,    54,   321,   100,   159,   322,   390,
     453,   391,   164,   165,   475,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     269,   499,   468,    49,   208,   126,   260,   376,   116,   387,
     244,   530,    50,   443,   114,   377,   378,   210,   123,   124,
     125,   127,   294,   296,    42,   476,   388,   389,   296,   273,
     477,   484,   395,   334,    79,   296,   478,   479,   336,   475,
     297,   340,    51,   259,   286,   297,   444,   177,   296,   396,
     264,   115,   297,   480,    80,   274,    44,  -302,   481,   339,
     371,   211,   212,   213,   345,   297,   128,   129,   130,   374,
     428,   263,   218,   465,   511,   420,   432,   433,    45,   296,
     476,   506,   458,   119,   270,   477,   375,   116,   275,   445,
     544,   478,   479,    59,   112,   329,   297,   131,   330,    78,
     214,   381,   412,   126,   474,   241,   446,   459,   480,   415,
     460,   461,  -302,   481,   418,   210,   123,   124,   125,   127,
     507,   166,   475,   281,    46,   282,   296,   296,   532,   266,
     540,   368,    52,   161,   369,   134,   215,  -268,   435,   471,
     134,    60,   188,   297,   297,   509,    70,    71,   473,   216,
      61,   188,   416,   490,   500,   501,   322,   322,   334,   211,
     212,   213,    53,   476,   128,   129,   130,    57,   477,   304,
     210,   123,   124,   125,   478,   479,   513,    65,   542,   334,
      62,   524,   217,   218,   525,   502,   462,   504,   505,    68,
     219,   480,  -269,    90,    91,   131,   481,   467,   214,   413,
      72,   126,   315,   316,   317,   318,    73,   319,   189,   190,
     191,   192,   193,   194,   211,   212,   213,   127,   529,   535,
     551,   322,   334,   322,   286,    83,    78,   543,    75,    84,
      85,    86,    87,    88,   215,    93,    97,   533,   210,   123,
     124,   125,    96,   101,   107,   106,   109,   216,   110,   122,
     299,   143,   145,   214,   146,   150,   126,   152,   153,   155,
     158,   123,   128,   129,   130,   163,    79,   168,   178,   510,
     125,   170,   127,   549,   172,   552,   173,   180,   185,   186,
     217,   218,   211,   212,   213,   204,   187,   188,   219,   215,
     205,   239,   243,   131,   246,   249,   210,   123,   124,   125,
     252,   119,   216,   271,    16,   210,   123,   124,   125,   280,
     283,   320,   326,   284,   285,   292,   323,   128,   129,   130,
     327,   214,   328,   331,   126,   303,   366,   334,   348,   341,
     349,   304,   346,   367,   414,   217,   218,    78,   383,   430,
     127,   212,   213,   219,   394,   298,   386,   454,   131,   289,
     212,   213,   436,   437,   439,  -305,  -305,   215,   455,  -305,
    -305,   440,   313,   314,   315,   316,   317,   318,   441,   319,
     216,   392,   450,   466,   296,   319,   469,   472,   470,   214,
     488,   491,   126,   299,   483,   128,   129,   130,   214,   492,
     493,   126,   494,   495,   496,   497,   508,   512,   127,   515,
     516,   514,   517,   217,   218,   518,   519,   127,   521,   522,
     523,   219,   541,   108,   526,   290,   131,   282,   527,   528,
     531,   534,   547,    77,   290,   539,   548,   417,   216,   555,
     300,   419,   452,   498,   209,   503,   372,   216,   325,   251,
     554,   379,   536,   128,   129,   130,   337,   431,   429,   537,
     301,   167,   128,   129,   130,     0,     0,   302,   303,     0,
       0,   217,   218,     0,   304,   305,     0,     0,     0,   219,
     217,   218,     0,     0,   131,     0,     0,     0,   219,     0,
       0,     0,     0,   131,     0,   306,   307,   308,   309,   310,
       0,     0,   311,   312,  -304,   313,   314,   315,   316,   317,
     318,     1,   319,     0,     0,     0,     1,     0,     0,     2,
       0,     0,     0,   299,     2,     0,     3,     0,     0,     4,
       0,     3,     5,     0,     4,     0,     0,     5,     0,     0,
       0,     0,     6,     0,     0,     7,     8,     6,     0,     0,
       7,     8,     0,     0,     0,     0,     0,     9,    10,     0,
       0,     0,     9,    10,     0,     0,     0,     0,    11,     0,
     300,    12,     0,    11,   299,     0,    12,     0,     0,     0,
       0,     0,     0,     0,   464,     0,     0,     0,     0,     0,
     384,     0,    13,     0,     0,     0,    14,    13,   303,     0,
     299,    14,     0,     0,   304,   305,     0,     0,     0,     0,
       0,    15,     0,     0,     0,     0,    15,    16,     0,     0,
       0,   300,    16,     0,     0,   306,   307,   308,   309,   310,
       0,     0,   311,   312,     0,   313,   314,   315,   316,   317,
     318,   384,   319,     0,     0,     0,     0,  -305,     0,   303,
       0,     0,     0,     0,     0,   304,   305,     0,    17,    18,
      19,     0,     0,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   303,   306,   307,   308,   309,
     310,   304,  -305,   311,   312,     0,   313,   314,   315,   316,
     317,   318,     0,   319,     0,     0,     0,     0,     0,     0,
       0,     0,  -305,  -305,  -305,   309,   310,     0,     0,   311,
     312,     0,   313,   314,   315,   316,   317,   318,   350,   319,
       0,     0,     0,   351,   352,   353,   354,     0,   355,     0,
       0,     0,     0,     0,     0,     0,   356,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   357,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   358,
       0,   359,   360,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   361,     0,     0,     0,
     362,     0,   363,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   364
};

static const yytype_int16 yycheck[] =
{
     150,     2,    79,    99,   100,     6,    60,    61,    62,   100,
      11,   207,    13,   110,   156,    12,   215,    85,   217,   348,
     292,   120,     3,     3,   117,    52,     3,   120,     3,   186,
     180,    82,   182,   183,    84,     3,    19,    59,   367,   102,
       4,     5,     6,    95,   136,   483,    91,    56,   136,    28,
     116,    52,   109,    54,    93,     9,   152,    95,   175,   116,
     126,   152,    63,   180,   214,    74,   129,   133,   116,   219,
     116,   116,   117,   112,   126,    24,   133,   154,    61,   118,
     172,   519,   174,    56,   280,   133,   174,   133,   133,    90,
      91,   290,    46,   243,    99,   177,   134,    98,   180,   298,
     372,   300,   103,   104,    27,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     188,   450,   394,    72,   176,    89,   177,   284,    82,   177,
     180,   177,    81,    29,     9,   285,   286,     3,     4,     5,
       6,   105,   219,   116,     3,    68,   296,   297,   116,     3,
      73,   126,   105,   180,   176,   116,    79,    80,   126,    27,
     133,   260,   111,   174,   112,   133,    62,   260,   116,   122,
     181,    46,   133,    96,    39,    29,     3,   100,   101,   259,
     177,    47,    48,    49,   264,   133,   150,   151,   152,   169,
     332,   341,   169,   392,   466,   176,   346,   347,     3,   116,
      68,   118,    93,    78,   205,    73,   283,    82,    62,   105,
     539,    79,    80,    24,    79,   177,   133,   181,   180,    59,
      86,   112,   319,    89,   420,    65,   122,   118,    96,   323,
     380,   381,   100,   101,   328,     3,     4,     5,     6,   105,
     109,   106,    27,   176,     3,   178,   116,   116,   118,   115,
     522,   177,    95,   349,   180,   323,   122,   180,   349,   177,
     328,    72,   180,   133,   133,   464,    18,    19,   177,   135,
      81,   180,   326,   177,   177,   177,   180,   180,   180,    47,
      48,    49,    95,    68,   150,   151,   152,    81,    73,   136,
       3,     4,     5,     6,    79,    80,   177,     3,    83,   180,
     111,   177,   168,   169,   180,   455,   383,   457,   458,   153,
     176,    96,   180,    50,    51,   181,   101,   394,    86,   320,
       0,    89,   169,   170,   171,   172,   179,   174,   138,   139,
     140,   141,   142,   143,    47,    48,    49,   105,   177,   177,
     177,   180,   180,   180,   112,     3,    59,   132,   113,   178,
     176,    95,     3,   128,   122,     3,   128,   507,     3,     4,
       5,     6,   124,     3,   180,   126,    98,   135,   125,     3,
      55,     4,   122,    86,     3,    84,    89,    94,   176,     3,
      47,     4,   150,   151,   152,     3,   176,   176,   115,   466,
       6,    12,   105,   543,   177,   545,   177,   127,     4,     4,
     168,   169,    47,    48,    49,    47,   177,   180,   176,   122,
     132,     3,   157,   181,    92,   113,     3,     4,     5,     6,
       3,    78,   135,     3,   113,     3,     4,     5,     6,   126,
     176,    99,    40,   176,   176,   174,   176,   150,   151,   152,
      50,    86,   176,    95,    89,   130,   121,   180,   176,   180,
      94,   136,    56,   176,     3,   168,   169,    59,   176,     3,
     105,    48,    49,   176,   176,    17,   177,   177,   181,    47,
      48,    49,   176,   176,   176,   160,   161,   122,    95,   164,
     165,   176,   167,   168,   169,   170,   171,   172,   176,   174,
     135,   102,   176,   176,   116,   174,   105,     3,   175,    86,
      71,     6,    89,    55,   180,   150,   151,   152,    86,     6,
       6,    89,     6,     6,   121,   105,   177,   177,   105,   100,
      79,   177,    79,   168,   169,    79,   100,   105,     3,   127,
     177,   176,     6,    73,   177,   122,   181,   178,   177,   177,
     177,   177,   177,    25,   122,   176,   176,   327,   135,   177,
     102,   330,   369,   448,   149,   456,   281,   135,   244,   162,
     548,   287,   514,   150,   151,   152,   258,   341,   334,   515,
     122,   107,   150,   151,   152,    -1,    -1,   129,   130,    -1,
      -1,   168,   169,    -1,   136,   137,    -1,    -1,    -1,   176,
     168,   169,    -1,    -1,   181,    -1,    -1,    -1,   176,    -1,
      -1,    -1,    -1,   181,    -1,   157,   158,   159,   160,   161,
      -1,    -1,   164,   165,     0,   167,   168,   169,   170,   171,
     172,     7,   174,    -1,    -1,    -1,     7,    -1,    -1,    15,
      -1,    -1,    -1,    55,    15,    -1,    22,    -1,    -1,    25,
      -1,    22,    28,    -1,    25,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    42,    38,    -1,    -1,
      41,    42,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,
      -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    64,    -1,
     102,    67,    -1,    64,    55,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
     122,    -1,    88,    -1,    -1,    -1,    92,    88,   130,    -1,
      55,    92,    -1,    -1,   136,   137,    -1,    -1,    -1,    -1,
      -1,   107,    -1,    -1,    -1,    -1,   107,   113,    -1,    -1,
      -1,   102,   113,    -1,    -1,   157,   158,   159,   160,   161,
      -1,    -1,   164,   165,    -1,   167,   168,   169,   170,   171,
     172,   122,   174,    -1,    -1,    -1,    -1,   102,    -1,   130,
      -1,    -1,    -1,    -1,    -1,   136,   137,    -1,   154,   155,
     156,    -1,    -1,   154,   155,   156,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   130,   157,   158,   159,   160,
     161,   136,   137,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,   158,   159,   160,   161,    -1,    -1,   164,
     165,    -1,   167,   168,   169,   170,   171,   172,    26,   174,
      -1,    -1,    -1,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,
     108,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   120
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,    15,    22,    25,    28,    38,    41,    42,    53,
      54,    64,    67,    88,    92,   107,   113,   154,   155,   156,
     183,   184,   185,   186,   190,   192,   194,   195,   199,   200,
     201,   202,   214,   216,   219,   220,   221,   223,   226,   294,
     295,    28,     3,   288,     3,     3,     3,   288,    24,    72,
      81,   111,    95,    95,    99,   287,   288,    81,   288,    24,
      72,    81,   111,    19,    61,     3,   296,   297,   153,   191,
     191,   191,     0,   179,   301,   113,   187,   187,    59,   176,
     229,   230,   234,     3,   178,   176,    95,     3,   128,   203,
     203,   203,   288,     3,   196,   288,   124,   128,   215,    95,
     134,     3,   215,   215,   215,   288,   126,   180,   185,    98,
     125,   246,   229,   230,     9,    46,    82,   231,   232,    78,
     231,   242,     3,     4,     5,     6,    89,   105,   150,   151,
     152,   181,   249,   250,   273,   274,   275,   276,   277,   278,
     279,   280,   281,     4,   193,   122,     3,   289,   288,   288,
      84,   239,    94,   176,   222,     3,   224,   225,    47,   288,
     197,   274,   197,     3,   288,   288,   229,   297,   176,   277,
      12,   235,   177,   177,   227,   228,   229,   234,   115,   233,
     127,   227,    56,    74,   247,     4,     4,   177,   180,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   266,   267,   268,    47,   132,    95,   126,   176,   222,
       3,    47,    48,    49,    86,   122,   135,   168,   169,   176,
     252,   253,   254,   255,   256,   257,   258,   259,   261,   262,
     263,   264,   265,   269,   270,   271,   272,   273,   197,     3,
     302,    65,   230,   157,   180,   239,    92,   217,   218,   113,
     198,   198,     3,   188,   189,   236,   248,   251,   252,   242,
     231,   243,   244,   252,   242,   252,   115,   252,   266,   273,
     288,     3,   226,     3,    29,    62,   204,   205,   206,   213,
     126,   176,   178,   176,   176,   176,   112,   252,   260,    47,
     122,   253,   174,   253,   230,   252,   116,   133,    17,    55,
     102,   122,   129,   130,   136,   137,   157,   158,   159,   160,
     161,   164,   165,   167,   168,   169,   170,   171,   172,   174,
      99,   177,   180,   176,   252,   225,    40,    50,   176,   177,
     180,    95,   237,   238,   180,     3,   126,   292,   293,   247,
     227,   180,    91,   117,   245,   247,    56,    56,   176,    94,
      26,    31,    32,    33,    34,    36,    44,    70,    87,    89,
      90,   104,   108,   110,   120,   207,   121,   176,   177,   180,
     226,   177,   235,     3,   169,   230,   266,   252,   252,   260,
      93,   112,   118,   176,   122,   248,   177,   177,   252,   252,
     253,   253,   102,   129,   176,   105,   122,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   277,   288,     3,   250,   215,   196,   250,   189,
     176,   282,   283,   284,   285,   286,   288,   298,   239,   251,
       3,   244,   252,   252,   302,   197,   176,   176,   209,   176,
     176,   176,   208,    29,    62,   105,   122,   210,   211,   212,
     176,   302,   205,   248,   177,    95,   126,   109,    93,   118,
     252,   252,   230,   175,   116,   253,   176,   230,   248,   105,
     175,   177,     3,   177,   226,    27,    68,    73,    79,    80,
      96,   101,   299,   180,   126,   290,   291,   292,    71,   240,
     177,     6,     6,     6,     6,     6,   121,   105,   212,   302,
     177,   177,   252,   207,   252,   252,   118,   109,   177,   253,
     230,   248,   177,   177,   177,   100,    79,    79,    79,   100,
     283,     3,   127,   177,   177,   180,   177,   177,   177,   177,
     177,   177,   118,   252,   177,   177,   291,   284,   283,   176,
     248,     6,    83,   132,   302,    52,   241,   177,   176,   252,
     300,   177,   252,     3,   272,   177
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   182,   183,   184,   184,   185,   185,   185,   185,   185,
     185,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   187,   187,   188,   188,   189,   189,   190,   190,   190,
     191,   191,   192,   193,   194,   194,   195,   195,   196,   197,
     198,   198,   199,   200,   200,   200,   201,   201,   201,   202,
     202,   202,   202,   202,   203,   203,   204,   204,   205,   205,
     206,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   208,   208,   209,   209,
     209,   210,   210,   211,   211,   212,   212,   212,   212,   213,
     213,   214,   214,   214,   214,   215,   215,   216,   217,   218,
     219,   220,   221,   221,   222,   222,   223,   224,   224,   225,
     226,   226,   226,   227,   227,   228,   228,   229,   229,   230,
     230,   231,   232,   232,   232,   233,   233,   234,   235,   235,
     236,   237,   237,   238,   239,   239,   240,   240,   241,   241,
     242,   242,   243,   243,   244,   245,   245,   245,   246,   246,
     247,   247,   247,   247,   247,   247,   248,   248,   249,   249,
     250,   250,   251,   252,   252,   252,   252,   252,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   254,
     254,   255,   255,   255,   255,   255,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   257,   257,   258,
     258,   258,   258,   259,   259,   259,   259,   260,   260,   261,
     261,   262,   262,   262,   262,   262,   262,   262,   263,   263,
     264,   265,   266,   266,   266,   266,   266,   266,   267,   267,
     267,   267,   267,   267,   268,   268,   269,   270,   271,   272,
     272,   272,   272,   273,   273,   273,   273,   273,   273,   273,
     274,   275,   275,   276,   276,   277,   278,   279,   280,   280,
     280,   281,   282,   282,   283,   283,   284,   284,   285,   285,
     286,   287,   288,   288,   289,   289,   290,   290,   291,   291,
     292,   292,   293,   293,   294,   294,   295,   296,   296,   297,
     298,   298,   298,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   300,   301,   301,   302,   302
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     0,     1,     3,     1,     4,     2,     2,     2,
       1,     0,     4,     1,     2,     5,     7,     5,     1,     1,
       3,     0,     5,     2,     3,     2,     3,     3,     2,     8,
       7,     6,     9,     7,     3,     0,     1,     3,     1,     1,
       3,     1,     4,     4,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     3,     0,     5,     3,
       0,     1,     0,     1,     2,     2,     1,     1,     2,     5,
       4,     4,     4,     3,     4,     2,     0,     5,     1,     4,
       4,     2,     8,     5,     3,     0,     5,     1,     3,     3,
       2,     2,     6,     1,     1,     1,     3,     3,     3,     3,
       5,     2,     1,     1,     1,     1,     0,     7,     1,     0,
       1,     1,     0,     2,     2,     0,     4,     0,     2,     0,
       3,     0,     1,     3,     2,     1,     1,     0,     2,     0,
       2,     2,     4,     2,     4,     0,     1,     3,     1,     0,
       1,     3,     2,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     2,     2,     2,     3,     4,     1,     3,     3,     3,
       3,     3,     3,     3,     4,     3,     3,     3,     3,     5,
       6,     5,     6,     4,     6,     3,     5,     4,     5,     4,
       5,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       6,     6,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     5,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       2,     1,     1,     3,     1,     1,     1,     4,     1,     3,
       2,     1,     1,     3,     1,     0,     1,     5,     1,     0,
       2,     1,     1,     0,     1,     0,     2,     1,     3,     3,
       4,     6,     8,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     0,     1,     1,     0,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, result, scanner);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* IDENTIFIER  */
#line 164 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1872 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 164 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1878 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1884 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1890 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 184: /* statement_list  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).stmt_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).stmt_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).stmt_vec));
    }
#line 1903 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 185: /* statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1909 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 186: /* preparable_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1915 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 187: /* opt_hints  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 1928 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 188: /* hint_list  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 1941 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 189: /* hint  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1947 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 190: /* transaction_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).transaction_stmt)); }
#line 1953 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 192: /* prepare_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1959 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 193: /* prepare_target_query  */
#line 164 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1965 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 194: /* execute_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1971 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 195: /* import_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1977 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 196: /* file_type  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1983 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 197: /* file_path  */
#line 164 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1989 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 198: /* opt_file_type  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1995 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 199: /* export_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).export_stmt)); }
#line 2001 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 200: /* show_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).show_stmt)); }
#line 2007 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 201: /* db_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).db_stmt)); }
#line 2013 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* create_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 2019 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 203: /* opt_not_exists  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2025 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 204: /* table_elem_commalist  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).table_element_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).table_element_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_element_vec));
    }
#line 2038 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 205: /* table_elem  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table_element_t)); }
#line 2044 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 206: /* column_def  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 2050 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* column_type  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2056 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 208: /* opt_time_precision  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2062 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* opt_decimal_specification  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).ival_pair)); }
#line 2068 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* opt_column_constraints  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2074 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* column_constraint_list  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2080 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* column_constraint  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2086 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* table_constraint  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table_constraint_t)); }
#line 2092 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* drop_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 2098 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 215: /* opt_exists  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2104 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* alter_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alter_stmt)); }
#line 2110 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* alter_action  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alter_action_t)); }
#line 2116 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* drop_action  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_action_t)); }
#line 2122 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* delete_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 2128 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* truncate_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 2134 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* insert_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 2140 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* opt_column_list  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).str_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2153 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* update_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 2159 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* update_clause_commalist  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).update_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).update_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).update_vec));
    }
#line 2172 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* update_clause  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 2178 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* select_statement  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2184 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* select_within_set_operation  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2190 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* select_within_set_operation_no_parentheses  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2196 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* select_with_paren  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2202 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* select_no_paren  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2208 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* set_operator  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).set_operator_t)); }
#line 2214 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* set_type  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).set_operator_t)); }
#line 2220 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* opt_all  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2226 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* select_clause  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2232 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* opt_distinct  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2238 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* select_list  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2251 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 237: /* opt_from_clause  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2257 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* from_clause  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2263 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 239: /* opt_where  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2269 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 240: /* opt_group  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 2275 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 241: /* opt_having  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2281 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 242: /* opt_order  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).order_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2294 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 243: /* order_list  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).order_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2307 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 244: /* order_desc  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 2313 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 245: /* opt_order_type  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2319 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 246: /* opt_top  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2325 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 247: /* opt_limit  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2331 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 248: /* expr_list  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2344 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 249: /* opt_literal_list  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2357 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 250: /* literal_list  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2370 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 251: /* expr_alias  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2376 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 252: /* expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2382 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 253: /* operand  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2388 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 254: /* scalar_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2394 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 255: /* unary_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2400 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 256: /* binary_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2406 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 257: /* logic_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2412 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 258: /* in_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2418 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 259: /* case_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2424 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 260: /* case_list  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2430 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 261: /* exists_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2436 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 262: /* comp_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2442 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 263: /* function_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2448 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 264: /* extract_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2454 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 265: /* cast_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2460 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 266: /* datetime_field  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2466 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 267: /* datetime_field_plural  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2472 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 268: /* duration_field  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2478 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 269: /* array_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2484 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 270: /* array_index  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2490 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 271: /* between_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2496 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 272: /* column_name  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2502 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 273: /* literal  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2508 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 274: /* string_literal  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2514 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 275: /* bool_literal  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2520 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 276: /* num_literal  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2526 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 277: /* int_literal  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2532 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 278: /* null_literal  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2538 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 279: /* date_literal  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2544 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 280: /* interval_literal  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2550 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 281: /* param_expr  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2556 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 282: /* table_ref  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2562 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 283: /* table_ref_atomic  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2568 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 284: /* nonjoin_table_ref_atomic  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2574 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 285: /* table_ref_commalist  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).table_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).table_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_vec));
    }
#line 2587 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 286: /* table_ref_name  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2593 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 287: /* table_ref_name_no_alias  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2599 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 288: /* table_name  */
#line 163 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2605 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 289: /* opt_index_name  */
#line 164 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2611 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 290: /* table_alias  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2617 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 291: /* opt_table_alias  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2623 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 292: /* alias  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2629 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 293: /* opt_alias  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2635 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 294: /* opt_with_clause  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2641 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 295: /* with_clause  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2647 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 296: /* with_description_list  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2653 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 297: /* with_description  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_t)); }
#line 2659 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 298: /* join_clause  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2665 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 299: /* opt_join_type  */
#line 162 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2671 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 300: /* join_condition  */
#line 173 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2677 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 302: /* ident_commalist  */
#line 165 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).str_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2690 "bison_parser.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (hsql::SQLParserResult* result, yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 77 "bison_parser.y" /* yacc.c:1429  */
{
  // Initialize
  yylloc.first_column = 0;
  yylloc.last_column = 0;
  yylloc.first_line = 0;
  yylloc.last_line = 0;
  yylloc.total_column = 0;
  yylloc.string_length = 0;
}

#line 2809 "bison_parser.cpp" /* yacc.c:1429  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 296 "bison_parser.y" /* yacc.c:1646  */
    {
  for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
    // Transfers ownership of the statement.
    result->addStatement(stmt);
  }

  unsigned param_id = 0;
  for (void* param : yyloc.param_list) {
    if (param != nullptr) {
      Expr* expr = (Expr*)param;
      expr->ival = param_id;
      result->addParameter(expr);
      ++param_id;
    }
  }
    delete (yyvsp[-1].stmt_vec);
  }
#line 3014 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 315 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3025 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 321 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3036 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 328 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3045 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 332 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3054 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 336 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3060 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 337 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3066 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 338 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3072 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 339 "bison_parser.y" /* yacc.c:1646  */
    {(yyval.statement) = (yyvsp[0].db_stmt); }
#line 3078 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 341 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3084 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 342 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3090 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 343 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3096 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 344 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3102 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 345 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3108 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 346 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3114 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 347 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3120 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 348 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3126 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 349 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3132 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 350 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3138 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 356 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3144 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 357 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 3150 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 359 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3159 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 363 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3168 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 368 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3177 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 372 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3187 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 382 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3193 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 383 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3199 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 384 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3205 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 392 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3215 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 400 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3224 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 404 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3234 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 415 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3245 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 421 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3256 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 428 "bison_parser.y" /* yacc.c:1646  */
    {
  if (strcasecmp((yyvsp[0].sval), "csv") == 0) {
    (yyval.import_type_t) = kImportCSV;
  } else if (strcasecmp((yyvsp[0].sval), "tbl") == 0) {
    (yyval.import_type_t) = kImportTbl;
  } else if (strcasecmp((yyvsp[0].sval), "binary") == 0 || strcasecmp((yyvsp[0].sval), "bin") == 0) {
    (yyval.import_type_t) = kImportBinary;
  } else {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "File type is unknown.");
    YYERROR;
  }
  free((yyvsp[0].sval));
}
#line 3275 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 443 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.sval) = strdup((yyvsp[0].expr)->name);
  delete (yyvsp[0].expr);
}
#line 3284 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 448 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.import_type_t) = (yyvsp[0].import_type_t); }
#line 3290 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 449 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.import_type_t) = kImportAuto; }
#line 3296 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 455 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3307 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 467 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3313 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 468 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3323 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 473 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3333 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 483 "bison_parser.y" /* yacc.c:1646  */
    { 
  (yyval.db_stmt) = new DbStatement(kCreateDB); 
  (yyval.db_stmt)->dbname = (yyvsp[0].sval);
}
#line 3342 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 487 "bison_parser.y" /* yacc.c:1646  */
    { 
  (yyval.db_stmt) = new DbStatement(kDropDB); 
  (yyval.db_stmt)->dbname = (yyvsp[0].sval);
}
#line 3351 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 491 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.db_stmt) = new DbStatement(kUseDB);
  (yyval.db_stmt)->dbname = (yyvsp[0].sval);
}
#line 3360 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 502 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
  (yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
  if (strcasecmp((yyvsp[-2].sval), "tbl") != 0) {
    free((yyvsp[-2].sval));
    yyerror(&yyloc, result, scanner, "File type is unknown.");
    YYERROR;
  }
  free((yyvsp[-2].sval));
  (yyval.create_stmt)->filePath = (yyvsp[0].sval);
}
#line 3378 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 515 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->setColumnDefsAndConstraints((yyvsp[-1].table_element_vec));
  delete (yyvsp[-1].table_element_vec);
}
#line 3391 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 523 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3403 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 530 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3415 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 537 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3428 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 546 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3434 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 547 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3440 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 549 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3449 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 553 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3458 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 558 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3464 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 559 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3470 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 561 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_vec));
  (yyval.column_t)->setNullableExplicit();
}
#line 3479 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 566 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3485 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 567 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3491 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 568 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3497 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 569 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3503 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 570 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3509 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 571 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 3518 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 575 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3524 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 576 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3530 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 577 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3536 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 578 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3542 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 579 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3548 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 580 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 3554 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 581 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3560 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 582 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 3566 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 583 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3572 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 585 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (yyvsp[-1].ival); }
#line 3578 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 586 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 3584 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 588 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3590 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 589 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 3596 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 590 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 3602 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 592 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_vec) = (yyvsp[0].column_constraint_vec); }
#line 3608 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 593 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_vec) = new std::vector<ConstraintType>(); }
#line 3614 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 595 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.column_constraint_vec) = new std::vector<ConstraintType>();
  (yyval.column_constraint_vec)->push_back((yyvsp[0].column_constraint_t));
}
#line 3623 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 599 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-1].column_constraint_vec)->push_back((yyvsp[0].column_constraint_t));
  (yyval.column_constraint_vec) = (yyvsp[-1].column_constraint_vec);
}
#line 3632 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 604 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 3638 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 605 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 3644 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 606 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 3650 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 607 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 3656 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 609 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 3662 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 610 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 3668 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 618 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3679 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 624 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3690 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 630 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 3700 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 636 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 3710 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 642 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3716 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 643 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3722 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 650 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 3732 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 656 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 3738 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 658 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 3747 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 668 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 3758 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 675 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3768 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 686 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 3780 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 693 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3792 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 701 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3798 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 702 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = nullptr; }
#line 3804 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 709 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 3815 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 716 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 3824 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 720 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 3833 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 725 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 3843 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 735 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 3852 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 739 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 3861 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 743 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[-4].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
  (yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
  (yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-5].with_description_vec);
}
#line 3877 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 757 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3883 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 758 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 3896 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 767 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3902 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 768 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3908 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 770 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  (yyval.select_stmt)->order = (yyvsp[-1].order_vec);

  // Limit could have been set by TOP.
  if ((yyvsp[0].limit) != nullptr) {
    delete (yyval.select_stmt)->limit;
    (yyval.select_stmt)->limit = (yyvsp[0].limit);
  }
}
#line 3923 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 780 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[-4].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
  (yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
  (yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
}
#line 3938 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 791 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 3947 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 796 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 3956 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 800 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 3965 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 804 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 3974 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 809 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3980 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 810 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3986 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 812 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4000 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 822 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 4006 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 823 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 4012 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 827 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 4018 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 828 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = nullptr; }
#line 4024 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 830 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 4030 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 832 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 4036 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 833 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 4042 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 835 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4052 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 840 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.group_t) = nullptr; }
#line 4058 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 842 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 4064 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 843 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 4070 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 845 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4076 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 846 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = nullptr; }
#line 4082 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 848 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4091 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 852 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4100 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 857 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4106 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 859 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 4112 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 860 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderDesc; }
#line 4118 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 861 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 4124 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 865 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4130 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 866 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 4136 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 868 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4142 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 869 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4148 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 870 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4154 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 871 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4160 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 872 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4166 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 873 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 4172 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 878 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4181 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 882 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4190 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 887 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4196 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 888 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 4202 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 890 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4211 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 894 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4220 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 899 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
    delete (yyvsp[0].alias_t);
  }
}
#line 4232 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 909 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 4238 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 911 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4246 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 917 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4252 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 918 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4258 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 919 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4264 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 920 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4270 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 921 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4276 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 923 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4282 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 924 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4288 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 925 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4294 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 926 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4300 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 927 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4306 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 928 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4312 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 929 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4318 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 930 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4324 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 931 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4330 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 932 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4336 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 934 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4342 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 935 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4348 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 937 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4354 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 938 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4360 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 939 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4366 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 940 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4372 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 944 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4378 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 945 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4384 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 946 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4390 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 947 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4396 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 949 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4402 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 950 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4408 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 952 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4414 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 953 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4420 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 955 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4426 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 956 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4432 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 957 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4438 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 958 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4444 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 959 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4450 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 960 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4456 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 961 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4462 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 963 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4468 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 964 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4474 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 966 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4480 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 968 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4486 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 970 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 4492 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 971 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 4498 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 972 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 4504 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 973 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 4510 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 974 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 4516 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 975 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 4522 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 977 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 4528 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 978 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 4534 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 979 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 4540 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 980 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 4546 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 981 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 4552 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 982 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 4558 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 986 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4564 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 988 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4570 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 990 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4576 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 992 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4582 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 993 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4588 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 994 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar(); }
#line 4594 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 995 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4600 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 999 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4606 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1001 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 4612 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1002 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 4618 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1004 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4624 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1007 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4630 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1009 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4636 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1011 "bison_parser.y" /* yacc.c:1646  */
    {
  int day{0}, month{0}, year{0}, chars_parsed{0};
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[0].sval), "%4d-%2d-%2d%n", &day, &month, &year, &chars_parsed) != 3 || (yyvsp[0].sval)[chars_parsed] != 0) {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect date format. Expected format: YYYY-MM-DD");
    YYERROR;
  }
  (yyval.expr) = Expr::makeDateLiteral((yyvsp[0].sval));
}
#line 4651 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1022 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].expr)->ival, (yyvsp[0].datetime_field));
  delete (yyvsp[-1].expr);
}
#line 4660 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1026 "bison_parser.y" /* yacc.c:1646  */
    {
  int duration{0}, chars_parsed{0};
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[-1].sval), "%d%n", &duration, &chars_parsed) != 1 || (yyvsp[-1].sval)[chars_parsed] != 0) {
    free((yyvsp[-1].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect interval format. Expected format: INTEGER");
    YYERROR;
  }
  free((yyvsp[-1].sval));
  (yyval.expr) = Expr::makeIntervalLiteral(duration, (yyvsp[0].datetime_field));
}
#line 4676 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1037 "bison_parser.y" /* yacc.c:1646  */
    {
  int duration{0}, chars_parsed{0};
  // 'seconds' and 'minutes' are the longest accepted interval qualifiers (7 chars) + null byte
  char unit_string[8];
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[0].sval), "%d %7s%n", &duration, unit_string, &chars_parsed) != 2 || (yyvsp[0].sval)[chars_parsed] != 0) {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect interval format. Expected format: INTEGER INTERVAL_QUALIIFIER");
    YYERROR;
  }
  free((yyvsp[0].sval));

  DatetimeField unit;
  if (strcasecmp(unit_string, "second") == 0 || strcasecmp(unit_string, "seconds") == 0) {
    unit = kDatetimeSecond;
  } else if (strcasecmp(unit_string, "minute") == 0 || strcasecmp(unit_string, "minutes") == 0) {
    unit = kDatetimeMinute;
  } else if (strcasecmp(unit_string, "hour") == 0 || strcasecmp(unit_string, "hours") == 0) {
    unit = kDatetimeHour;
  } else if (strcasecmp(unit_string, "day") == 0 || strcasecmp(unit_string, "days") == 0) {
    unit = kDatetimeDay;
  } else if (strcasecmp(unit_string, "month") == 0 || strcasecmp(unit_string, "months") == 0) {
    unit = kDatetimeMonth;
  } else if (strcasecmp(unit_string, "year") == 0 || strcasecmp(unit_string, "years") == 0) {
    unit = kDatetimeYear;
  } else {
    yyerror(&yyloc, result, scanner, "Interval qualifier is unknown.");
    YYERROR;
  }
  (yyval.expr) = Expr::makeIntervalLiteral(duration, unit);
}
#line 4712 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1069 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 4722 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1078 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 4733 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1087 "bison_parser.y" /* yacc.c:1646  */
    {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 4744 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1094 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 4753 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1098 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 4762 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1103 "bison_parser.y" /* yacc.c:1646  */
    {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 4774 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1111 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 4784 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1117 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 4793 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1121 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 4802 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1126 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 4808 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1127 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = nullptr; }
#line 4814 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1129 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4820 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1131 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = nullptr; }
#line 4826 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1133 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4832 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1134 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4838 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1136 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = nullptr; }
#line 4844 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1142 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.with_description_vec) = nullptr; }
#line 4850 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1144 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4856 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1146 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 4865 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1150 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 4874 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1155 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 4884 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1165 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 4896 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1172 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 4909 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1180 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-6].join_type);
  (yyval.table)->join->left = (yyvsp[-7].table);
  (yyval.table)->join->right = (yyvsp[-4].table);
  auto left_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
  if ((yyvsp[-1].expr)->alias != nullptr) left_col->alias = strdup((yyvsp[-1].expr)->alias);
  if ((yyvsp[-7].table)->getName() != nullptr) left_col->table = strdup((yyvsp[-7].table)->getName());
  auto right_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
  if ((yyvsp[-1].expr)->alias != nullptr) right_col->alias = strdup((yyvsp[-1].expr)->alias);
  if ((yyvsp[-4].table)->getName() != nullptr) right_col->table = strdup((yyvsp[-4].table)->getName());
  (yyval.table)->join->condition = Expr::makeOpBinary(left_col, kOpEquals, right_col);
  delete (yyvsp[-1].expr);
}
#line 4929 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1196 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinInner; }
#line 4935 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1197 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinLeft; }
#line 4941 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1198 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinLeft; }
#line 4947 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1199 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinRight; }
#line 4953 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1200 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinRight; }
#line 4959 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1201 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinFull; }
#line 4965 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1202 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinFull; }
#line 4971 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1203 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinFull; }
#line 4977 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1204 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinCross; }
#line 4983 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1205 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinInner; }
#line 4989 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1216 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 4998 "bison_parser.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1220 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5007 "bison_parser.cpp" /* yacc.c:1646  */
    break;


#line 5011 "bison_parser.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, result, scanner, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, result, scanner);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1226 "bison_parser.y" /* yacc.c:1906  */

    // clang-format on
    /*********************************
 ** Section 4: Additional C code
 *********************************/

    /* empty */
