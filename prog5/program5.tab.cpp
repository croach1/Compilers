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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 6 "program5.ypp" /* yacc.c:339  */


#include <iostream>
#include <FlexLexer.h>
#include "nodes.hpp"
#include "symbols.hpp"
#include <stdlib.h>

using std::cerr;
using std::cout;
using std::endl;

extern Node *tree;
extern yyFlexLexer scanner;
extern SymbolTable *st;
extern SymbolTable *current;

extern vector<SymbolTable *> tempCons;
extern vector<SymbolTable *> tempMeths;
extern vector<SymbolTable *> tempBlocks;

extern unordered_map<string, string> tempClassVars;
extern unordered_map<string, string> tempConsVars;
extern unordered_map<string, string> tempMethVars;
extern unordered_map<string, string> tempBlockVars;

extern map<string, string> tempMethParams;
extern map<string, string> tempConsParams;

#define yylex() scanner.yylex()

void yyerror(const char* str)
{
  cerr << str << endl;
}


#line 104 "program5.tab.cpp" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "program5.tab.hpp".  */
#ifndef YY_YY_PROGRAM5_TAB_HPP_INCLUDED
# define YY_YY_PROGRAM5_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    ID = 259,
    NUMBER = 260,
    READ = 261,
    LPAREN = 262,
    RPAREN = 263,
    ASSIGN = 264,
    NEW = 265,
    THIS = 266,
    NULLT = 267,
    SEMI = 268,
    LBRACE = 269,
    RBRACE = 270,
    DOT = 271,
    COMMA = 272,
    IF = 273,
    WHILE = 274,
    VOID = 275,
    CLASS = 276,
    PRINT = 277,
    RETURN = 278,
    THEN = 279,
    ELSE = 280,
    LBRACK = 281,
    RBRACK = 282,
    EQ = 283,
    NE = 284,
    GE = 285,
    LE = 286,
    GT = 287,
    LT = 288,
    TIMES = 289,
    DIV = 290,
    MOD = 291,
    AND = 292,
    OR = 293,
    PLUS = 294,
    MINUS = 295,
    NOT = 296
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 45 "program5.ypp" /* yacc.c:355  */

    Node *ttype;

#line 190 "program5.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROGRAM5_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 207 "program5.tab.cpp" /* yacc.c:358  */

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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   548

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  204

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    78,    84,   110,   113,   116,   119,   122,
     125,   128,   131,   137,   144,   153,   158,   165,   170,   177,
     182,   203,   209,   213,   219,   223,   229,   233,   239,   265,
     269,   275,   302,   343,   347,   354,   363,   367,   374,   383,
     389,   392,   395,   398,   403,   407,   410,   413,   418,   422,
     426,   430,   436,   440,   446,   449,   453,   456,   461,   464,
     467,   470,   485,   488,   491,   494,   499,   502,   505,   510,
     513,   518,   521,   565,   568,   571,   574,   577,   580,   583,
     586,   589,   592,   595,   598,   601,   604,   607,   610,   613,
     616,   619,   622,   625,   628,   631,   636,   639,   642,   647,
     651,   657,   661,   725,   730
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "ID", "NUMBER", "READ", "LPAREN",
  "RPAREN", "ASSIGN", "NEW", "THIS", "NULLT", "SEMI", "LBRACE", "RBRACE",
  "DOT", "COMMA", "IF", "WHILE", "VOID", "CLASS", "PRINT", "RETURN",
  "THEN", "ELSE", "LBRACK", "RBRACK", "EQ", "NE", "GE", "LE", "GT", "LT",
  "TIMES", "DIV", "MOD", "AND", "OR", "PLUS", "MINUS", "NOT", "$accept",
  "program", "classDeclaration", "classBody", "classVariableDeclarations",
  "constructorVariableDeclarations", "methodVariableDeclarations",
  "blockVariableDeclarations", "vardec", "type", "simpleType",
  "constructorDeclarations", "consdec", "methodDeclarations", "methdec",
  "consParamList", "methParamList", "parameter", "constructorBlock",
  "methodBlock", "subBlock", "statements", "statement", "name", "argList",
  "conditionalStatement", "optionalExpression", "expression",
  "newExpression", "brackExpressions", "bracks", "ident", "number", YY_NULLPTR
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
     295,   296
};
# endif

#define YYPACT_NINF -114

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-114)))

#define YYTABLE_NINF -26

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,    44,    17,  -114,  -114,    -7,  -114,  -114,    94,  -114,
    -114,  -114,    44,   108,  -114,     0,  -114,   115,  -114,   137,
    -114,    45,    52,  -114,  -114,   157,   172,    68,    50,  -114,
       0,  -114,   218,  -114,  -114,  -114,    74,    74,  -114,   221,
    -114,  -114,    74,  -114,    72,  -114,     0,     3,  -114,    33,
    -114,  -114,    54,  -114,    85,    74,   101,    74,   101,   321,
    -114,  -114,   334,  -114,  -114,  -114,  -114,  -114,   347,  -114,
     114,   125,   132,    63,   360,  -114,     0,  -114,   399,  -114,
      40,  -114,     4,  -114,   373,  -114,   412,  -114,   386,  -114,
     425,    63,    63,    63,  -114,   140,    63,    74,  -114,    63,
      63,    63,    29,   146,   501,  -114,  -114,  -114,  -114,  -114,
     438,   150,  -114,  -114,    63,    63,    44,    63,  -114,  -114,
     451,  -114,  -114,  -114,   464,  -114,   224,   237,    99,   501,
     156,   270,    96,   158,  -114,  -114,  -114,    63,  -114,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,  -114,   109,   283,  -114,   252,  -114,  -114,   477,
     477,   153,    63,  -114,  -114,    63,   144,    63,   126,   508,
     508,   508,   508,   508,   508,    41,    41,    41,    41,    41,
    -114,  -114,   155,  -114,  -114,   148,  -114,  -114,   501,   474,
     208,   159,   145,  -114,  -114,   477,  -114,  -114,   488,   162,
    -114,  -114,  -114,  -114
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,   103,     0,     1,     3,     0,     4,
      24,     5,     0,     0,    13,     0,    22,     0,    26,     0,
      29,    25,     0,     6,    14,     0,     0,     0,     0,     7,
       0,    27,     0,     8,    30,    25,    33,    36,     9,     0,
      10,    23,    36,    21,     0,    11,     0,     0,    34,     0,
      37,    12,     0,    39,     0,     0,     0,     0,     0,     0,
      28,    35,     0,    32,    38,    31,    62,    54,     0,    40,
       0,     0,     0,    71,     0,    15,     0,    61,     0,    52,
       0,    59,    63,    44,     0,    17,     0,    48,     0,    19,
       0,     0,     0,    66,   104,     0,     0,     0,    75,     0,
       0,     0,    73,     0,    72,    78,    63,    74,    41,    16,
       0,     0,    42,    53,    66,     0,     0,     0,    45,    18,
       0,    46,    49,    20,     0,    50,     0,     0,     0,    67,
       0,     0,     0,    25,    79,    80,    81,    66,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    43,     0,     0,    64,     0,    47,    51,     0,
       0,     0,     0,    77,    94,     0,    98,    66,     0,    82,
      83,    85,    84,    87,    86,    91,    92,    93,    95,    90,
      88,    89,     0,    55,    65,    69,    57,    58,    68,     0,
       0,    97,     0,    76,    56,     0,    99,   101,     0,     0,
      96,    70,   100,   102
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -114,  -114,   180,  -114,  -114,  -114,  -114,  -114,   143,   142,
      86,   177,   -12,    -3,    14,  -114,   149,   -34,  -114,   135,
    -114,   -56,   -14,   -59,  -113,  -114,  -114,   -57,  -114,  -114,
    -114,   112,  -114
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     9,    13,    74,    84,    88,    14,    30,
      16,    17,    18,    19,    20,    47,    49,    50,    60,    63,
      77,    78,    79,   102,   128,    81,   103,   129,   105,   166,
     191,   106,   107
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      80,   153,    48,    80,     4,    31,    86,     8,   -25,    80,
      26,    54,    90,    31,    32,    80,   104,     6,   110,    80,
      55,    61,    39,    64,   168,    80,    27,    80,   120,    80,
     -25,    80,   124,    34,   126,   127,   137,     1,     1,   131,
      34,    56,   134,   135,   136,   116,    34,   114,     4,   115,
      57,    80,    36,    34,   192,   117,   116,    42,   154,    37,
     156,    80,    58,    43,   113,    80,   117,     4,    94,    95,
      96,    57,   113,    97,    66,    98,   113,    10,     4,    42,
     150,   151,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,    41,   113,    10,     4,    59,
      80,    80,    99,   100,   101,   188,   113,   161,   189,    11,
     113,    10,     4,     5,    12,    62,   162,   182,    10,     4,
      21,    91,   165,    23,    22,    21,   162,    28,    12,    21,
      29,    35,    92,   198,   193,    12,    80,    21,    35,    93,
      10,     4,    44,   162,    35,   185,   186,   130,    35,    35,
      15,    35,    33,   200,    35,    15,    24,    12,    53,   138,
      10,     4,   162,    43,   163,   167,   187,    35,   194,    35,
     190,    82,    38,   195,    82,    10,     4,    12,    46,    46,
      82,   201,     7,   132,    46,   199,    82,    40,   111,   203,
      25,    52,    12,    65,     0,     0,    82,    46,     0,    46,
      82,    76,    75,     0,    76,    85,     0,     0,     0,   133,
      76,    89,     4,    94,    95,    96,    76,   109,    97,    66,
      98,    10,     4,     0,    10,     4,    76,   119,   155,     0,
      76,   123,   159,    45,     0,   197,    51,     0,    12,     0,
       0,    12,     0,     0,     0,   160,     0,    99,   100,   101,
       0,     0,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   164,   184,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,     0,     0,     0,   183,     0,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,    10,     4,     0,     0,     0,     0,
       0,     0,    66,     0,    67,    68,    69,    10,     4,    70,
      71,     0,     0,    72,    73,    66,     0,    67,    68,    83,
      10,     4,    70,    71,     0,     0,    72,    73,    66,     0,
      67,    68,    87,    10,     4,    70,    71,     0,     0,    72,
      73,    66,     0,    67,    68,   108,    10,     4,    70,    71,
       0,     0,    72,    73,    66,     0,    67,    68,   118,    10,
       4,    70,    71,     0,     0,    72,    73,    66,     0,    67,
      68,   122,     0,     4,    70,    71,     0,     0,    72,    73,
      66,     0,    67,    68,   112,     0,     4,    70,    71,     0,
       0,    72,    73,    66,     0,    67,    68,   121,     0,     4,
      70,    71,     0,     0,    72,    73,    66,     0,    67,    68,
     125,     0,     4,    70,    71,     0,     0,    72,    73,    66,
       0,    67,    68,   152,     0,     4,    70,    71,     0,     0,
      72,    73,    66,     0,    67,    68,   157,     0,     4,    70,
      71,     0,     0,    72,    73,    66,     0,    67,    68,   158,
       0,     4,    70,    71,     0,     0,    72,    73,    66,     0,
      67,    68,     0,     0,     0,    70,    71,     0,     0,    72,
      73,   196,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   202,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   145,   146,   147,   148,   149,   150,   151
};

static const yytype_int16 yycheck[] =
{
      59,   114,    36,    62,     4,    17,    62,    14,     4,    68,
      13,     8,    68,    25,    17,    74,    73,     0,    74,    78,
      17,    55,    25,    57,   137,    84,    26,    86,    84,    88,
      26,    90,    88,    19,    91,    92,     7,    21,    21,    96,
      26,     8,    99,   100,   101,    16,    32,     7,     4,     9,
      17,   110,     7,    39,   167,    26,    16,     7,   115,     7,
     117,   120,     8,    13,    78,   124,    26,     4,     5,     6,
       7,    17,    86,    10,    11,    12,    90,     3,     4,     7,
      39,    40,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,    27,   110,     3,     4,    14,
     159,   160,    39,    40,    41,   162,   120,     8,   165,    15,
     124,     3,     4,     1,    20,    14,    17,     8,     3,     4,
       8,     7,    26,    15,    12,    13,    17,    15,    20,    17,
      15,    19,     7,   190,     8,    20,   195,    25,    26,     7,
       3,     4,    30,    17,    32,   159,   160,     7,    36,    37,
       8,    39,    15,     8,    42,    13,    13,    20,    46,    13,
       3,     4,    17,    13,     8,     7,    13,    55,    13,    57,
      26,    59,    15,    25,    62,     3,     4,    20,    36,    37,
      68,   195,     2,    97,    42,    26,    74,    15,    76,    27,
      13,    42,    20,    58,    -1,    -1,    84,    55,    -1,    57,
      88,    59,    59,    -1,    62,    62,    -1,    -1,    -1,    97,
      68,    68,     4,     5,     6,     7,    74,    74,    10,    11,
      12,     3,     4,    -1,     3,     4,    84,    84,   116,    -1,
      88,    88,     8,    15,    -1,    27,    15,    -1,    20,    -1,
      -1,    20,    -1,    -1,    -1,     8,    -1,    39,    40,    41,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     8,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    13,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     3,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    -1,    13,    14,    15,     3,     4,    18,
      19,    -1,    -1,    22,    23,    11,    -1,    13,    14,    15,
       3,     4,    18,    19,    -1,    -1,    22,    23,    11,    -1,
      13,    14,    15,     3,     4,    18,    19,    -1,    -1,    22,
      23,    11,    -1,    13,    14,    15,     3,     4,    18,    19,
      -1,    -1,    22,    23,    11,    -1,    13,    14,    15,     3,
       4,    18,    19,    -1,    -1,    22,    23,    11,    -1,    13,
      14,    15,    -1,     4,    18,    19,    -1,    -1,    22,    23,
      11,    -1,    13,    14,    15,    -1,     4,    18,    19,    -1,
      -1,    22,    23,    11,    -1,    13,    14,    15,    -1,     4,
      18,    19,    -1,    -1,    22,    23,    11,    -1,    13,    14,
      15,    -1,     4,    18,    19,    -1,    -1,    22,    23,    11,
      -1,    13,    14,    15,    -1,     4,    18,    19,    -1,    -1,
      22,    23,    11,    -1,    13,    14,    15,    -1,     4,    18,
      19,    -1,    -1,    22,    23,    11,    -1,    13,    14,    15,
      -1,     4,    18,    19,    -1,    -1,    22,    23,    11,    -1,
      13,    14,    -1,    -1,    -1,    18,    19,    -1,    -1,    22,
      23,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    34,    35,    36,    37,    38,    39,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    43,    44,     4,    73,     0,    44,    14,    45,
       3,    15,    20,    46,    50,    51,    52,    53,    54,    55,
      56,    73,    73,    15,    50,    53,    55,    26,    73,    15,
      51,    54,    55,    15,    56,    73,     7,     7,    15,    55,
      15,    27,     7,    13,    73,    15,    51,    57,    59,    58,
      59,    15,    58,    73,     8,    17,     8,    17,     8,    14,
      60,    59,    14,    61,    59,    61,    11,    13,    14,    15,
      18,    19,    22,    23,    47,    50,    51,    62,    63,    64,
      65,    67,    73,    15,    48,    50,    63,    15,    49,    50,
      63,     7,     7,     7,     5,     6,     7,    10,    12,    39,
      40,    41,    65,    68,    69,    70,    73,    74,    15,    50,
      63,    73,    15,    64,     7,     9,    16,    26,    15,    50,
      63,    15,    15,    50,    63,    15,    69,    69,    66,    69,
       7,    69,    52,    73,    69,    69,    69,     7,    13,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    15,    66,    69,    73,    69,    15,    15,     8,
       8,     8,    17,     8,     8,    26,    71,     7,    66,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,     8,    13,    27,    64,    64,    13,    69,    69,
      26,    72,    66,     8,    13,    25,    27,    27,    69,    26,
       8,    64,    27,    27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    43,    44,    45,    45,    45,    45,    45,
      45,    45,    45,    46,    46,    47,    47,    48,    48,    49,
      49,    50,    51,    51,    52,    52,    53,    53,    54,    55,
      55,    56,    56,    57,    57,    57,    58,    58,    58,    59,
      60,    60,    60,    60,    61,    61,    61,    61,    62,    62,
      62,    62,    63,    63,    64,    64,    64,    64,    64,    64,
      64,    64,    65,    65,    65,    65,    66,    66,    66,    67,
      67,    68,    68,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    70,    70,    70,    71,
      71,    72,    72,    73,    74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     2,     3,     3,     3,     4,
       4,     4,     5,     1,     2,     1,     2,     1,     2,     1,
       2,     3,     1,     3,     1,     1,     1,     2,     5,     1,
       2,     6,     6,     0,     1,     3,     0,     1,     3,     2,
       2,     3,     3,     4,     2,     3,     3,     4,     2,     3,
       3,     4,     1,     2,     1,     4,     5,     5,     5,     1,
       3,     1,     1,     1,     3,     4,     0,     1,     3,     5,
       7,     0,     1,     1,     1,     1,     4,     3,     1,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     5,     4,     3,     3,
       4,     2,     3,     1,     1
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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
      yychar = yylex ();
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 73 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"program"<<endl;
        (yyval.ttype) = new nodeProgram((yyvsp[0].ttype));
	tree = (yyval.ttype);
    }
#line 1499 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 78 "program5.ypp" /* yacc.c:1646  */
    {
	(yyval.ttype) = new nodeProgram((yyvsp[-1].ttype), (yyvsp[0].ttype));
	tree = (yyval.ttype);
    }
#line 1508 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 84 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"classDeclaration"<<endl;
        current = new SymbolTable("<SYMBOL TABLE>: <class> " + (yyvsp[-1].ttype)->getID());
        current->setClassName((yyvsp[-1].ttype)->getID());
        for(auto x: tempClassVars)
        {
            current->insertVariable(x.first, x.second);
        }
        for(SymbolTable *x : tempCons)
        {
            x->setParent(current);
            current->insertConstructor(x);
        }
        for(SymbolTable *x : tempMeths)
        {
            x->setParent(current);
            current->insertMethod(x);
        }
        tempClassVars.clear();
        tempCons.clear();
        tempMeths.clear();
        (yyval.ttype) = new nodeClassDeclaration((yyvsp[-1].ttype), (yyvsp[0].ttype));
        st->insertClassType(current);
    }
#line 1537 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 110 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeClassBody(1);
    }
#line 1545 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 113 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeClassBody((yyvsp[-1].ttype), 2);
    }
#line 1553 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 116 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeClassBody((yyvsp[-1].ttype), 3);
    }
#line 1561 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 119 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeClassBody((yyvsp[-1].ttype), 4);
    }
#line 1569 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 122 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeClassBody((yyvsp[-2].ttype), (yyvsp[-1].ttype), 5);
    }
#line 1577 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 125 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeClassBody((yyvsp[-2].ttype), (yyvsp[-1].ttype), 6);
    }
#line 1585 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 128 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeClassBody((yyvsp[-2].ttype), (yyvsp[-1].ttype), 7);
    }
#line 1593 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 131 "program5.ypp" /* yacc.c:1646  */
    {
        //cout << "classbody" << endl;
        (yyval.ttype) = new nodeClassBody((yyvsp[-3].ttype), (yyvsp[-2].ttype), (yyvsp[-1].ttype), 8);
    }
#line 1602 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 137 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"classVariableDeclartation -> vardec"<<endl;

        //cout<<"\n"<<$1->getID()<<endl;
        tempClassVars.insert(make_pair((yyvsp[0].ttype)->getID(), (yyvsp[0].ttype)->getVardecType()));
        (yyval.ttype) = new nodeClassVariableDeclarations((yyvsp[0].ttype));
    }
#line 1614 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 144 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"classVariableDeclarations -> classVariableDeclarations vardec"<<endl;

        //cout<<"\n"<<$1->getID()<<endl;
        tempClassVars.insert(make_pair((yyvsp[0].ttype)->getID(), (yyvsp[0].ttype)->getVardecType()));
        (yyval.ttype) = new nodeClassVariableDeclarations((yyvsp[-1].ttype), (yyvsp[0].ttype));
    }
#line 1626 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 153 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"constructorVariableDeclartation -> vardec"<<endl;
        tempConsVars.insert(make_pair((yyvsp[0].ttype)->getID(), (yyvsp[0].ttype)->getVardecType()));
        (yyval.ttype) = new nodeConstructorVariableDeclarations((yyvsp[0].ttype));
    }
#line 1636 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 158 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"constructorVariableDeclarations -> constructorVariableDeclarations vardec"<<endl;
        tempConsVars.insert(make_pair((yyvsp[0].ttype)->getID(), (yyvsp[0].ttype)->getVardecType()));
        (yyval.ttype) = new nodeConstructorVariableDeclarations((yyvsp[-1].ttype), (yyvsp[0].ttype));
    }
#line 1646 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 165 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"methodVariableDeclaratation -> vardec"<<endl;
        tempMethVars.insert(make_pair((yyvsp[0].ttype)->getID(), (yyvsp[0].ttype)->getVardecType()));
        (yyval.ttype) = new nodeMethodVariableDeclarations((yyvsp[0].ttype));
    }
#line 1656 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 170 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"methodVariableDeclarations -> methodVariableDeclarations vardec"<<endl;
        tempMethVars.insert(make_pair((yyvsp[0].ttype)->getID(), (yyvsp[0].ttype)->getVardecType()));
        (yyval.ttype) = new nodeMethodVariableDeclarations((yyvsp[-1].ttype), (yyvsp[0].ttype));
    }
#line 1666 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 177 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"blockVariableDeclaratation -> vardec"<<endl;
        tempBlockVars.insert(make_pair((yyvsp[0].ttype)->getID(), (yyvsp[0].ttype)->getVardecType()));
        (yyval.ttype) = new nodeBlockVariableDeclarations((yyvsp[0].ttype));
    }
#line 1676 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 182 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"blockVariableDeclarations -> blockVariableDeclarations vardec"<<endl;
        tempBlockVars.insert(make_pair((yyvsp[0].ttype)->getID(), (yyvsp[0].ttype)->getVardecType()));
        (yyval.ttype) = new nodeBlockVariableDeclarations((yyvsp[-1].ttype), (yyvsp[0].ttype));
    }
#line 1686 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 203 "program5.ypp" /* yacc.c:1646  */
    {
        //cout << "vardec: " << $2->getID() << endl;
        (yyval.ttype) = new nodeVarDec((yyvsp[-2].ttype), (yyvsp[-1].ttype), (yyvsp[-1].ttype)->getID(), (yyvsp[-2].ttype)->getID(), 1);
    }
#line 1695 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 209 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"type -> simpleType"<<endl;
        (yyval.ttype) = new nodeType((yyvsp[0].ttype), 1);
    }
#line 1704 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 213 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"TYPE -> TYPE LBRACK RBRACK"<<endl;
        (yyval.ttype) = new nodeType((yyvsp[-2].ttype), 2);
    }
#line 1713 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 219 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"simpleType -> INT"<<endl;
        (yyval.ttype) = new nodeSimpleType();
    }
#line 1722 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 223 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"simpleType -> ident"<<endl;
        (yyval.ttype) = new nodeSimpleType((yyvsp[0].ttype));
    }
#line 1731 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 229 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"constructorDeclarations -> consdec"<<endl;
        (yyval.ttype) = new nodeConstructorDeclarations((yyvsp[0].ttype));
    }
#line 1740 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 233 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"constructorDeclarations -> constructorDeclarations consdec"<<endl;
        (yyval.ttype) = new nodeConstructorDeclarations((yyvsp[-1].ttype), (yyvsp[0].ttype));
    }
#line 1749 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 239 "program5.ypp" /* yacc.c:1646  */
    {
        //cout << "consdec -> lots" << endl;
        
        current = new SymbolTable("<SYMBOL TABLE>: <constructor> " + (yyvsp[-4].ttype)->getID());
        for(auto x : tempConsVars)
        {
            current->insertVariable(x.first, x.second); //add constructor variables
        }
        for(auto x : tempConsParams)
        {
            current->insertParameter(x.first, x.second);
        }
        for(SymbolTable *x : tempBlocks)
        {
            x->setParent(current);
            current->insertBlock(x);
        }
        tempBlocks.clear();
        tempConsVars.clear(); //clear out constructor variables
        tempConsParams.clear();
        tempCons.push_back(current); //add constructor to temporary vector
        
        (yyval.ttype) = new nodeConsDec((yyvsp[-4].ttype), (yyvsp[-2].ttype), (yyvsp[0].ttype));
    }
#line 1778 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 265 "program5.ypp" /* yacc.c:1646  */
    {
        //cout << "methodDeclarations -> methdec" << endl;
        (yyval.ttype) = new nodeMethodDeclarations((yyvsp[0].ttype));
    }
#line 1787 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 269 "program5.ypp" /* yacc.c:1646  */
    {
        //cout << "methodDeclarations -> methodDeclarations methdec" << endl;
        (yyval.ttype) = new nodeMethodDeclarations((yyvsp[0].ttype), (yyvsp[-1].ttype));
    }
#line 1796 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 275 "program5.ypp" /* yacc.c:1646  */
    {
        //cout << "methdec -> lots" << endl;
        
        current = new SymbolTable("<SYMBOL TABLE>: <method> " + (yyvsp[-4].ttype)->getID());
        current->setMethodReturnType((yyvsp[-5].ttype)->getID());
        for(auto x : tempMethVars)
        {
            //cout<<"INSERTING VARS INTO METHOD TABLE" << endl;
            current->insertVariable(x.first, x.second);
        }
        for(auto x : tempMethParams)
        {
            //cout<<"INSERTING PARAMS INTO METHOD TABLE"<<endl;
            current->insertParameter(x.first, x.second);
        }
        for(SymbolTable *x : tempBlocks)
        {
            x->setParent(current);
            current->insertBlock(x);
        }
        tempBlocks.clear();
        tempMethVars.clear();
        tempMethParams.clear();
        tempMeths.push_back(current);
        
        (yyval.ttype) = new nodeMethDec((yyvsp[-5].ttype), (yyvsp[-4].ttype), (yyvsp[-2].ttype), (yyvsp[0].ttype));
    }
#line 1828 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 302 "program5.ypp" /* yacc.c:1646  */
    {
        //cout << "methdec -> lots" << endl;
        
        current = new SymbolTable("<SYMBOL TABLE>: <method> " + (yyvsp[-4].ttype)->getID());
        current->setMethodReturnType("void");
        for(auto x : tempMethVars)
        {
            //cout<<"INSERTING VARS INTO METHOD TABLE" << endl;
            current->insertVariable(x.first, x.second);
        }
        for(auto x : tempMethParams)
        {
            //cout<<"INSERTING PARAMS INTO METHOD TABLE"<<endl;
            current->insertParameter(x.first, x.second);
        }
        for(SymbolTable *x : tempBlocks)
        {
            x->setParent(current);
            current->insertBlock(x);
        }
        tempBlocks.clear();
        tempMethVars.clear();
        tempMethParams.clear();
        tempMeths.push_back(current);
        
        (yyval.ttype) = new nodeMethDec((yyvsp[-4].ttype), (yyvsp[-2].ttype), (yyvsp[0].ttype));
    }
#line 1860 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 343 "program5.ypp" /* yacc.c:1646  */
    {
        //cout << "paramList -> empty" << endl;
        (yyval.ttype) = new nodeParameterList();
    }
#line 1869 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 347 "program5.ypp" /* yacc.c:1646  */
    {
        //cout << "paramList -> parameter" << endl;
        
        tempConsParams.insert(make_pair((yyvsp[0].ttype)->getID(), (yyvsp[0].ttype)->getVardecType()));

        (yyval.ttype) = new nodeParameterList((yyvsp[0].ttype));
    }
#line 1881 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 354 "program5.ypp" /* yacc.c:1646  */
    {
        //cout << "paramList -> paramList COMMA parameter" << endl;
        
        tempConsParams.insert(make_pair((yyvsp[0].ttype)->getID(), (yyvsp[0].ttype)->getVardecType()));
        
        (yyval.ttype) = new nodeParameterList((yyvsp[-2].ttype), (yyvsp[0].ttype));
    }
#line 1893 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 363 "program5.ypp" /* yacc.c:1646  */
    {
        //cout << "paramList -> empty" << endl;
        (yyval.ttype) = new nodeParameterList();
    }
#line 1902 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 367 "program5.ypp" /* yacc.c:1646  */
    {
        //cout << "paramList -> parameter" << endl;
        
        tempMethParams.insert(make_pair((yyvsp[0].ttype)->getID(), (yyvsp[0].ttype)->getVardecType()));

        (yyval.ttype) = new nodeParameterList((yyvsp[0].ttype));
    }
#line 1914 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 374 "program5.ypp" /* yacc.c:1646  */
    {
        //cout << "paramList -> paramList COMMA parameter" << endl;
        
        tempMethParams.insert(make_pair((yyvsp[0].ttype)->getID(), (yyvsp[0].ttype)->getVardecType()));
        
        (yyval.ttype) = new nodeParameterList((yyvsp[-2].ttype), (yyvsp[0].ttype));
    }
#line 1926 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 383 "program5.ypp" /* yacc.c:1646  */
    {
        //cout << "parameter -> type ident" << endl;
        (yyval.ttype) = new nodeParameter((yyvsp[-1].ttype), (yyvsp[0].ttype), (yyvsp[0].ttype)->getID(), (yyvsp[-1].ttype)->getID());
    }
#line 1935 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 389 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeBlock(1);
    }
#line 1943 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 392 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeBlock((yyvsp[-1].ttype), 2);
    }
#line 1951 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 395 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeBlock((yyvsp[-1].ttype), 3);
    }
#line 1959 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 398 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeBlock((yyvsp[-2].ttype), (yyvsp[-1].ttype), 4);
    }
#line 1967 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 403 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"methodBlock"<<endl;
        (yyval.ttype) = new nodeBlock(1);
    }
#line 1976 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 407 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeBlock((yyvsp[-1].ttype), 2);
    }
#line 1984 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 410 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeBlock((yyvsp[-1].ttype), 3);
    }
#line 1992 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 413 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeBlock((yyvsp[-2].ttype), (yyvsp[-1].ttype), 4);
    }
#line 2000 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 418 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"subBlock"<<endl;
        (yyval.ttype) = new nodeBlock(1);
    }
#line 2009 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 422 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"subBlock"<<endl;
        (yyval.ttype) = new nodeBlock((yyvsp[-1].ttype), 2);
    }
#line 2018 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 426 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"subBlock"<<endl;
        (yyval.ttype) = new nodeBlock((yyvsp[-1].ttype), 3);
    }
#line 2027 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 430 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"subBlock"<<endl;
        (yyval.ttype) = new nodeBlock((yyvsp[-2].ttype), (yyvsp[-1].ttype), 4);
    }
#line 2036 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 436 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"statement"<<endl;
        (yyval.ttype) = new nodeStatements((yyvsp[0].ttype), 1);
    }
#line 2045 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 440 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"statements"<<endl;
        (yyval.ttype) = new nodeStatements((yyvsp[0].ttype), (yyvsp[-1].ttype), 2);
    }
#line 2054 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 446 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeStatement(1);
    }
#line 2062 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 449 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"DING DING DING"<<endl;
        (yyval.ttype) = new nodeStatement((yyvsp[-3].ttype), (yyvsp[-1].ttype), 2);
    }
#line 2071 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 453 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeStatement((yyvsp[-4].ttype), (yyvsp[-2].ttype), 3);
    }
#line 2079 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 456 "program5.ypp" /* yacc.c:1646  */
    {
        //tempBlocks.back()->setLabel("<SYMBOL TABLE>: <block> while");
        //cout<<"while"<<endl;
        (yyval.ttype) = new nodeStatement((yyvsp[-2].ttype), (yyvsp[0].ttype), 6);
    }
#line 2089 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 461 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeStatement((yyvsp[-2].ttype), 4);
    }
#line 2097 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 464 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeStatement((yyvsp[0].ttype), 5);
    }
#line 2105 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 467 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeStatement((yyvsp[-1].ttype), 7);
    }
#line 2113 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 470 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"statement->subBlock"<<endl;
        
        current = new SymbolTable("<SYMBOL TABLE>: <block> sub-block");
        for(auto x : tempBlockVars)
        {
            current->insertVariable(x.first, x.second); //add constructor variables
        }
        tempBlockVars.clear(); //clear out constructor variables
        tempBlocks.push_back(current); //add constructor to temporary vector

        (yyval.ttype) = new nodeStatement((yyvsp[0].ttype), 8);
    }
#line 2131 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 485 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeName(1);
    }
#line 2139 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 488 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeName((yyvsp[0].ttype), 2);
    }
#line 2147 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 491 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeName((yyvsp[-2].ttype), (yyvsp[0].ttype), 3);
    }
#line 2155 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 494 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeName((yyvsp[-3].ttype), (yyvsp[-1].ttype), 4);
    }
#line 2163 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 499 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeArgList();
    }
#line 2171 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 502 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeArgList((yyvsp[0].ttype));
    }
#line 2179 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 505 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeArgList((yyvsp[-2].ttype), (yyvsp[0].ttype));
    }
#line 2187 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 510 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeConState((yyvsp[-2].ttype), (yyvsp[0].ttype), 1);
    }
#line 2195 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 513 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeConState((yyvsp[-4].ttype), (yyvsp[-2].ttype), (yyvsp[0].ttype), 2);
    }
#line 2203 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 518 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeOpExp();
    }
#line 2211 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 521 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeOpExp((yyvsp[0].ttype));
    }
#line 2219 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 565 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression((yyvsp[0].ttype), 1);
    }
#line 2227 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 568 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression((yyvsp[0].ttype), 2);
    }
#line 2235 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 571 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression(3);
    }
#line 2243 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 574 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression((yyvsp[-3].ttype), (yyvsp[-1].ttype), 4);
    }
#line 2251 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 577 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression(5);
    }
#line 2259 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 580 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression(6);
    }
#line 2267 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 583 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression((yyvsp[0].ttype), 7);
    }
#line 2275 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 586 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression((yyvsp[0].ttype), 8);
    }
#line 2283 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 589 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression((yyvsp[0].ttype), 9);
    }
#line 2291 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 592 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression((yyvsp[-2].ttype), (yyvsp[0].ttype), 10);
    }
#line 2299 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 595 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression((yyvsp[-2].ttype), (yyvsp[0].ttype), 11);
    }
#line 2307 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 598 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression((yyvsp[-2].ttype), (yyvsp[0].ttype), 12);
    }
#line 2315 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 601 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression((yyvsp[-2].ttype), (yyvsp[0].ttype), 13);
    }
#line 2323 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 604 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression((yyvsp[-2].ttype), (yyvsp[0].ttype), 14);
    }
#line 2331 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 607 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression((yyvsp[-2].ttype), (yyvsp[0].ttype), 15);
    }
#line 2339 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 610 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression((yyvsp[-2].ttype), (yyvsp[0].ttype), 16);
    }
#line 2347 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 613 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression((yyvsp[-2].ttype), (yyvsp[0].ttype), 17);
    }
#line 2355 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 616 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression((yyvsp[-2].ttype), (yyvsp[0].ttype), 18);
    }
#line 2363 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 619 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression((yyvsp[-2].ttype), (yyvsp[0].ttype), 19);
    }
#line 2371 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 622 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression((yyvsp[-2].ttype), (yyvsp[0].ttype), 20);
    }
#line 2379 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 625 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression((yyvsp[-2].ttype), (yyvsp[0].ttype), 21);
    }
#line 2387 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 628 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression((yyvsp[-1].ttype), 22);
    }
#line 2395 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 631 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeExpression((yyvsp[-2].ttype), (yyvsp[0].ttype), 23);
    }
#line 2403 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 636 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeNewExp((yyvsp[-3].ttype), (yyvsp[-1].ttype), 1);
    }
#line 2411 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 639 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeNewExp((yyvsp[-2].ttype), (yyvsp[-1].ttype), (yyvsp[0].ttype), 2);
    }
#line 2419 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 642 "program5.ypp" /* yacc.c:1646  */
    {
        (yyval.ttype) = new nodeNewExp((yyvsp[-1].ttype), (yyvsp[0].ttype), 3);
    }
#line 2427 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 647 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"bracks"<<endl;
        (yyval.ttype) = new nodeBrackExpressions((yyvsp[-1].ttype));
    }
#line 2436 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 651 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"bracks"<<endl;
        (yyval.ttype) = new nodeBrackExpressions((yyvsp[-3].ttype), (yyvsp[-1].ttype));
    }
#line 2445 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 657 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"bracks"<<endl;
        (yyval.ttype) = new nodeBracks();
    }
#line 2454 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 661 "program5.ypp" /* yacc.c:1646  */
    {
        //cout<<"bracks"<<endl;
        (yyval.ttype) = new nodeBracks((yyvsp[-2].ttype));
    }
#line 2463 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 725 "program5.ypp" /* yacc.c:1646  */
    { 
        (yyval.ttype)=new nodeID(scanner.YYText());
    }
#line 2471 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 730 "program5.ypp" /* yacc.c:1646  */
    { 
        (yyval.ttype)=new nodeNum(atoi(scanner.YYText()));
    }
#line 2479 "program5.tab.cpp" /* yacc.c:1646  */
    break;


#line 2483 "program5.tab.cpp" /* yacc.c:1646  */
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
      yyerror (YY_("syntax error"));
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
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
#line 735 "program5.ypp" /* yacc.c:1906  */

