
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 2 "MyC2.y"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "IDtable.h"
extern int line;
int yylex();
int yyerror(char *s);
void pquad();//打印四元式
int Merge(int l1,int l2);
void BackPatch(int l,int t);
void GEN(std::string op,std::string arg1,std::string arg2,std::string res);
std::string NewTemp();
extern FILE *yyin;
extern FILE *yyout;
extern IDtable idt;
IDtable tempidt;
extern std::string curID;
extern std::string curValue;
extern int cnt;
extern int isError;
FILE *fi;  //指向输出文件的指针
FILE *fi2;
FILE *fi3;
struct quaternion{
    std::string op;
    std::string arg1;
    std::string arg2;
    std::string res;
}qualist[505];
int nexq=0;



/* Line 189 of yacc.c  */
#line 108 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     INT = 259,
     BREAK = 260,
     CASE = 261,
     DOUBLE = 262,
     CONST = 263,
     FLOAT = 264,
     VOID = 265,
     RETURN = 266,
     FOR = 267,
     WHILE = 268,
     ELSE = 269,
     IF = 270,
     SWITCH = 271,
     DEFAULT = 272,
     LB = 273,
     RB = 274,
     LBB = 275,
     RBB = 276,
     DOT = 277,
     SEMI = 278,
     COLON = 279,
     COMMA = 280,
     CONSTANTNUM = 281,
     ASSIGN = 282,
     DOR = 283,
     DAND = 284,
     EQUAL = 285,
     NOTEQUAL = 286,
     LESSEQUAL = 287,
     GREATEREQUAL = 288,
     LESS = 289,
     GREATER = 290,
     MINUS = 291,
     ADD = 292,
     DIVIDE = 293,
     TIMES = 294
   };
#endif
/* Tokens.  */
#define ID 258
#define INT 259
#define BREAK 260
#define CASE 261
#define DOUBLE 262
#define CONST 263
#define FLOAT 264
#define VOID 265
#define RETURN 266
#define FOR 267
#define WHILE 268
#define ELSE 269
#define IF 270
#define SWITCH 271
#define DEFAULT 272
#define LB 273
#define RB 274
#define LBB 275
#define RBB 276
#define DOT 277
#define SEMI 278
#define COLON 279
#define COMMA 280
#define CONSTANTNUM 281
#define ASSIGN 282
#define DOR 283
#define DAND 284
#define EQUAL 285
#define NOTEQUAL 286
#define LESSEQUAL 287
#define GREATEREQUAL 288
#define LESS 289
#define GREATER 290
#define MINUS 291
#define ADD 292
#define DIVIDE 293
#define TIMES 294




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 36 "MyC2.y"

    struct{char name[15];char type[15];char value[150];char kind[15];} IDAttr;
    int nexlist;//N
    char num[150];//常数值
    char op[15];//各种运算符
    struct { int tlist,flist;} con;//truelist，falselist
    int quad; //M
    char IDType[15];
    struct{char IDName[15];char IDValue[150];}ASS;//赋值语句
    struct{char IDName[15];char IDValue[150];int isID;int tlist;int flist;}EXP;//EXP
    char name[150];



/* Line 214 of yacc.c  */
#line 237 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 249 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   185

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNRULES -- Number of states.  */
#define YYNSTATES  132

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    21,    27,
      34,    40,    44,    48,    50,    54,    57,    60,    64,    66,
      70,    72,    74,    78,    82,    84,    86,    88,    90,    92,
      95,   104,   110,   118,   126,   128,   130,   132,   137,   138,
     142,   148,   150,   154,   156,   159,   162,   166,   171,   173,
     177,   179,   182,   185,   187,   189,   191,   196,   200,   201,
     202,   204,   206,   208,   210,   212,   214,   216,   218,   220,
     222,   224,   226,   228,   230,   232,   234
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      41,     0,    -1,    42,    -1,    43,    -1,    42,    43,    -1,
      44,    -1,    45,    -1,    71,     3,    18,    46,    19,    48,
      -1,    71,     3,    18,    19,    48,    -1,    71,     3,    18,
      46,    19,    23,    -1,    71,     3,    18,    19,    23,    -1,
      71,     3,    23,    -1,    71,    56,    23,    -1,    47,    -1,
      46,    25,    47,    -1,    71,     3,    -1,    20,    21,    -1,
      20,    49,    21,    -1,    50,    -1,    49,    65,    50,    -1,
      45,    -1,    51,    -1,    11,    58,    23,    -1,    11,    63,
      23,    -1,    48,    -1,    52,    -1,    53,    -1,    54,    -1,
      23,    -1,    55,    23,    -1,    15,    18,    55,    19,    51,
      66,    14,    51,    -1,    15,    18,    55,    19,    51,    -1,
      13,    18,    65,    55,    19,    65,    51,    -1,    12,    18,
      45,    52,    55,    19,    51,    -1,    63,    -1,    56,    -1,
      58,    -1,     3,    57,    70,    55,    -1,    -1,    58,    67,
      59,    -1,    58,    67,    18,    58,    19,    -1,    59,    -1,
      18,    58,    19,    -1,    61,    -1,    37,    62,    -1,    36,
      62,    -1,     3,    18,    19,    -1,     3,    18,    60,    19,
      -1,    61,    -1,    61,    25,    61,    -1,    26,    -1,    37,
      26,    -1,    36,    26,    -1,     3,    -1,     3,    -1,    64,
      -1,    64,    68,    65,    64,    -1,    59,    69,    59,    -1,
      -1,    -1,    37,    -1,    36,    -1,    39,    -1,    38,    -1,
      29,    -1,    28,    -1,    30,    -1,    34,    -1,    35,    -1,
      31,    -1,    32,    -1,    33,    -1,    27,    -1,    10,    -1,
       4,    -1,     9,    -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    88,    88,    90,    95,   106,   109,   115,   118,   121,
     124,   130,   147,   162,   165,   171,   180,   183,   189,   193,
     203,   206,   210,   213,   219,   222,   225,   228,   235,   238,
     247,   250,   256,   263,   272,   277,   280,   290,   303,   314,
     377,   380,   386,   391,   397,   403,   418,   421,   427,   430,
     438,   443,   448,   456,   462,   485,   490,   506,   524,   529,
     535,   539,   543,   547,   554,   558,   566,   571,   575,   579,
     583,   587,   594,   600,   605,   610,   615
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INT", "BREAK", "CASE", "DOUBLE",
  "CONST", "FLOAT", "VOID", "RETURN", "FOR", "WHILE", "ELSE", "IF",
  "SWITCH", "DEFAULT", "LB", "RB", "LBB", "RBB", "DOT", "SEMI", "COLON",
  "COMMA", "CONSTANTNUM", "ASSIGN", "DOR", "DAND", "EQUAL", "NOTEQUAL",
  "LESSEQUAL", "GREATEREQUAL", "LESS", "GREATER", "MINUS", "ADD", "DIVIDE",
  "TIMES", "$accept", "START", "Cprogram", "code", "function", "decl",
  "plist", "pdecl", "body", "codelist", "codeitem", "stat", "expstat",
  "selstat", "iterstat", "exp", "assexp", "NM", "ariexplist", "ariexp",
  "vlist", "value", "useID", "conexplist", "conexp", "M", "N", "ariop",
  "logop", "relop", "assop", "type", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    44,    44,    44,
      44,    45,    45,    46,    46,    47,    48,    48,    49,    49,
      50,    50,    50,    50,    51,    51,    51,    51,    52,    52,
      53,    53,    54,    54,    55,    55,    55,    56,    57,    58,
      58,    58,    58,    59,    59,    59,    59,    59,    60,    60,
      61,    61,    61,    61,    62,    63,    63,    64,    65,    66,
      67,    67,    67,    67,    68,    68,    69,    69,    69,    69,
      69,    69,    70,    71,    71,    71,    71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     6,     5,     6,
       5,     3,     3,     1,     3,     2,     2,     3,     1,     3,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     2,
       8,     5,     7,     7,     1,     1,     1,     4,     0,     3,
       5,     1,     3,     1,     2,     2,     3,     4,     1,     3,
       1,     2,     2,     1,     1,     1,     4,     3,     0,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    74,    76,    75,    73,     0,     2,     3,     5,     6,
       0,     1,     4,    38,     0,     0,    11,     0,    12,     0,
       0,    13,     0,    72,     0,     0,    10,     8,     0,     0,
      15,    53,     0,    50,     0,     0,    37,    35,    36,    41,
      43,    34,    55,     0,     0,     0,     0,    16,    28,    20,
      24,    58,    18,    21,    25,    26,    27,     0,     0,     9,
       7,    14,     0,    53,     0,    41,    54,    52,    45,    51,
      44,    61,    60,    63,    62,     0,    66,    69,    70,    71,
      67,    68,     0,    65,    64,    58,     0,     0,     0,    58,
       0,    17,     0,    29,    38,    53,    46,     0,     0,     0,
      48,    42,     0,    39,    57,     0,    22,    23,     0,     0,
       0,    19,    47,     0,     0,     0,    56,     0,     0,     0,
      49,    40,     0,    58,    31,     0,     0,     0,    33,    32,
       0,    30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    20,    21,    50,    51,
      52,    53,    54,    55,    56,    57,    37,    17,    38,    39,
      99,    40,    68,    41,    42,    92,   127,    75,    85,    82,
      24,    58
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -81
static const yytype_int16 yypact[] =
{
     169,   -81,   -81,   -81,   -81,     7,   169,   -81,   -81,   -81,
      43,   -81,   -81,    15,    33,   153,   -81,    35,   -81,   -12,
      30,   -81,    76,   -81,    39,    11,   -81,   -81,    47,   169,
     -81,     1,    65,   -81,     9,    14,   -81,   -81,   129,   150,
     -81,   -81,    49,    65,    64,    78,    80,   -81,   -81,   -81,
     -81,    83,   -81,   -81,   -81,   -81,   -81,    82,    96,   -81,
     -81,   -81,    91,    89,    22,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   106,   -81,   -81,   -81,   -81,
     -81,   -81,   108,   -81,   -81,   -81,    99,    85,   169,   -81,
      39,   -81,    77,   -81,    97,   -81,   -81,    86,    93,   111,
     116,   -81,    65,   -81,   -81,   108,   -81,   -81,    27,    39,
     112,   -81,   -81,   122,   114,   150,   -81,    39,   127,   103,
     -81,   -81,   128,   -81,   -81,   103,   103,   135,   -81,   -81,
     103,   -81
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -81,   -81,   -81,   148,   -81,   -19,   -81,   126,     8,   -81,
      69,    45,    48,   -81,   -81,   -24,    -6,   -81,   -30,   -31,
     -81,   -59,   134,   131,    72,   -80,   -81,   -81,   -81,   -81,
     -81,    10
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -39
static const yytype_int16 yytable[] =
{
      36,    65,    64,   100,    14,   105,    49,    11,    25,   109,
      10,    26,    66,    86,    31,     1,    10,    66,     2,    62,
       3,     4,    43,    44,    45,    22,    46,    27,   -38,    32,
      31,    25,    47,    15,    48,    67,    60,    33,    16,    22,
      69,   101,    31,   126,   103,    32,    13,    34,    35,    28,
      48,   104,    14,    33,   120,    29,    18,    32,    71,    72,
      73,    74,    23,    34,    35,    33,   110,    25,    63,   108,
      59,    65,   114,    49,   115,    34,    35,    83,    84,    30,
      31,     1,    88,    32,     2,   118,     3,     4,    43,    44,
      45,    33,    46,   122,    95,    32,    89,    25,    90,    94,
      48,    34,    35,    33,    91,    93,    31,    62,   107,    63,
      96,    63,    67,    34,    35,    44,    45,    33,    46,    69,
      16,    32,   106,    25,   102,    95,    48,    97,    98,    33,
     112,   119,    33,   121,    33,    71,    72,    73,    74,    34,
      35,   113,    34,    35,    34,    35,   123,   125,    33,   130,
      71,    72,    73,    74,    12,    61,   117,     1,    97,    98,
       2,   111,     3,     4,   124,    71,    72,    73,    74,    70,
     128,   129,    19,     1,    87,   131,     2,   116,     3,     4,
      76,    77,    78,    79,    80,    81
};

static const yytype_uint8 yycheck[] =
{
      24,    32,    32,    62,    10,    85,    25,     0,    20,    89,
       0,    23,     3,    43,     3,     4,     6,     3,     7,    18,
       9,    10,    11,    12,    13,    15,    15,    19,    27,    18,
       3,    20,    21,    18,    23,    26,    28,    26,    23,    29,
      26,    19,     3,   123,    75,    18,     3,    36,    37,    19,
      23,    82,    58,    26,   113,    25,    23,    18,    36,    37,
      38,    39,    27,    36,    37,    26,    90,    20,     3,    88,
      23,   102,   102,    92,   105,    36,    37,    28,    29,     3,
       3,     4,    18,    18,     7,   109,     9,    10,    11,    12,
      13,    26,    15,   117,     3,    18,    18,    20,    18,     3,
      23,    36,    37,    26,    21,    23,     3,    18,    23,     3,
      19,     3,    26,    36,    37,    12,    13,    26,    15,    26,
      23,    18,    23,    20,    18,     3,    23,    36,    37,    26,
      19,    19,    26,    19,    26,    36,    37,    38,    39,    36,
      37,    25,    36,    37,    36,    37,    19,    19,    26,    14,
      36,    37,    38,    39,     6,    29,   108,     4,    36,    37,
       7,    92,     9,    10,   119,    36,    37,    38,    39,    35,
     125,   126,    19,     4,    43,   130,     7,   105,     9,    10,
      30,    31,    32,    33,    34,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     7,     9,    10,    41,    42,    43,    44,    45,
      71,     0,    43,     3,    56,    18,    23,    57,    23,    19,
      46,    47,    71,    27,    70,    20,    23,    48,    19,    25,
       3,     3,    18,    26,    36,    37,    55,    56,    58,    59,
      61,    63,    64,    11,    12,    13,    15,    21,    23,    45,
      48,    49,    50,    51,    52,    53,    54,    55,    71,    23,
      48,    47,    18,     3,    58,    59,     3,    26,    62,    26,
      62,    36,    37,    38,    39,    67,    30,    31,    32,    33,
      34,    35,    69,    28,    29,    68,    58,    63,    18,    18,
      18,    21,    65,    23,     3,     3,    19,    36,    37,    60,
      61,    19,    18,    59,    59,    65,    23,    23,    45,    65,
      55,    50,    19,    25,    58,    59,    64,    52,    55,    19,
      61,    19,    55,    19,    51,    19,    65,    66,    51,    51,
      14,    51
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1455 of yacc.c  */
#line 90 "MyC2.y"
    {
        fprintf(fi, "Cprogram -> code\n");
        if(!isError)fprintf(fi2,"Success!\n");
        else fprintf(fi2,"Fail!\n");
    }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 95 "MyC2.y"
    {
        fprintf(fi,"Cprogram -> Cprogram code\n");
        if(!isError)fprintf(fi2,"Success!\n");
        else fprintf(fi2,"Fail!\n");
    }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 106 "MyC2.y"
    {
        fprintf(fi, "code -> function\n");
    }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 109 "MyC2.y"
    {
        fprintf(fi, "code -> decl\n");
    }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 115 "MyC2.y"
    {
         fprintf(fi, "function -> type ID LB plist RB body\n");
    }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 118 "MyC2.y"
    {
        fprintf(fi, "function -> type ID LB RB body\n");
    }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 121 "MyC2.y"
    {
         fprintf(fi, "function -> type ID LB plist RB SEMI\n");
    }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 124 "MyC2.y"
    {
         fprintf(fi, "function -> type ID LB RB SEMI\n");
    }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 130 "MyC2.y"
    {
        fprintf(fi,"decl -> type ID SEMI\n");
        strcpy((yyvsp[(2) - (3)].IDAttr).kind,"var");
        strcpy((yyvsp[(2) - (3)].IDAttr).name,curID.c_str());
        strcpy((yyvsp[(2) - (3)].IDAttr).type,(yyvsp[(1) - (3)].IDType));
        //$2.kind="var".c_str();
        //$2.name=curID.c_str();
        //$2.type=$1;
        Symbol * symbol=idt.myLookup(curID);
        if (symbol) {fprintf(fi2,"line:%d ERROR: repeat definition\n",line);isError=1;}
        else {
            idt.myInsert(curID,"","",""); 
            idt.table[curID].type=std::string((yyvsp[(1) - (3)].IDType));
            idt.table[curID].kind="var";
            cnt++;
        }
    }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 147 "MyC2.y"
    {
        fprintf(fi,"decl -> type assexp SEMI\n");
        Symbol * symbol=idt.myLookup(std::string((yyvsp[(2) - (3)].ASS).IDName));
        if (symbol) {fprintf(fi2,"line:%d ERROR: repeat definition\n",line);isError=1;}
       else {
            idt.myInsert(std::string((yyvsp[(2) - (3)].ASS).IDName),"","",""); 
            idt.table[std::string((yyvsp[(2) - (3)].ASS).IDName)].type=std::string((yyvsp[(1) - (3)].IDType));
            idt.table[std::string((yyvsp[(2) - (3)].ASS).IDName)].kind="var";
            idt.table[std::string((yyvsp[(2) - (3)].ASS).IDName)].value=std::string((yyvsp[(2) - (3)].ASS).IDValue);
            cnt++;
        }
    }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 162 "MyC2.y"
    {
        fprintf(fi,"plist -> pdecl\n");
    }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 165 "MyC2.y"
    {
        fprintf(fi,"plist -> plist COMMA pdecl\n");
    }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 171 "MyC2.y"
    {
        fprintf(fi,"pdecl -> type ID\n");

    }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 180 "MyC2.y"
    {
        fprintf(fi,"body -> LBB RBB\n");
    }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 183 "MyC2.y"
    {
        fprintf(fi,"body -> LBB codelist RBB\n");
    }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 189 "MyC2.y"
    {
        fprintf(fi,"codelist -> codeitem\n");
        (yyval.nexlist)=(yyvsp[(1) - (1)].nexlist);
    }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 193 "MyC2.y"
    {
         fprintf(fi,"codelist -> codelist codeitem\n");
         BackPatch((yyvsp[(1) - (3)].nexlist),(yyvsp[(2) - (3)].quad));
         std::cout<<(yyvsp[(1) - (3)].nexlist)<<" "<<(yyvsp[(2) - (3)].quad)<<" ";
         (yyval.nexlist)=(yyvsp[(3) - (3)].nexlist);
    }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 203 "MyC2.y"
    {
        fprintf(fi,"codeitem -> decl\n");
    }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 206 "MyC2.y"
    {
        fprintf(fi,"codeitem -> stat\n");
        (yyval.nexlist)=(yyvsp[(1) - (1)].nexlist);
    }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 210 "MyC2.y"
    {
        fprintf(fi,"codeitem -> RETURN ariexplist SEMI\n");
    }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 213 "MyC2.y"
    {
        fprintf(fi,"codeitem -> RETURN conexplist SEMI\n");
    }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 219 "MyC2.y"
    {
        fprintf(fi,"stat -> body\n");
    }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 222 "MyC2.y"
    {
        fprintf(fi,"stat -> expstat\n");
    }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 225 "MyC2.y"
    {
        fprintf(fi,"stat -> selstat\n");
    }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 228 "MyC2.y"
    {
        fprintf(fi,"stat -> iterstat\n");
        (yyval.nexlist)=(yyvsp[(1) - (1)].nexlist);
    }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 235 "MyC2.y"
    {
        fprintf(fi,"expstat -> SEMI\n");
    }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 238 "MyC2.y"
    {
        fprintf(fi,"expstat -> exp SEMI\n");
    }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 247 "MyC2.y"
    {
        fprintf(fi,"selstat -> IF LB exp RB stat ELSE stat\n");
    }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 250 "MyC2.y"
    {
        fprintf(fi,"selstat -> IF LB exp RB stat \n");
    }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 256 "MyC2.y"
    {
        fprintf(fi,"iterstat -> WHILE LB exp RB stat\n");
        BackPatch((yyvsp[(7) - (7)].nexlist),(yyvsp[(3) - (7)].quad));
//        std::cout<<(yyvsp[(7) - (7)].nexlist)<<" "<<yyvsp[(3) - (7)].quad;
        BackPatch((yyvsp[(4) - (7)].EXP).tlist,(yyvsp[(6) - (7)].quad));
//        std::cout<<(yyvsp[(4) - (7)].EXP).tlist<<" "<<(yyvsp[(6) - (7)].quad);
        (yyval.nexlist)=(yyvsp[(4) - (7)].EXP).flist;
        GEN("j","_","_","("+std::to_string((yyvsp[(3) - (7)].quad)+1)+")");
    }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 263 "MyC2.y"
    {
        fprintf(fi,"iterstat -> FOR LB decl expstat exp RB stat\n");
    }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 272 "MyC2.y"
    {
        fprintf(fi,"exp -> conexplist\n");
        (yyval.EXP).tlist=(yyvsp[(1) - (1)].con).tlist;
        (yyval.EXP).flist=(yyvsp[(1) - (1)].con).flist;
    }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 277 "MyC2.y"
    {
        fprintf(fi,"exp -> assexp\n");
    }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 280 "MyC2.y"
    {
        fprintf(fi,"exp -> ariexplist\n");
        strcpy((yyval.EXP).IDValue,(yyvsp[(1) - (1)].EXP).IDValue);
        strcpy((yyval.EXP).IDName,(yyvsp[(1) - (1)].EXP).IDName);
        (yyval.EXP).isID=(yyvsp[(1) - (1)].EXP).isID;

    }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 290 "MyC2.y"
    {
        fprintf(fi,"assexp -> ID assop exp\n");
        strcpy((yyvsp[(1) - (4)].IDAttr).name,(yyvsp[(2) - (4)].name));
        strcpy((yyval.ASS).IDName,(yyvsp[(1) - (4)].IDAttr).name);
        strcpy((yyval.ASS).IDValue,(yyvsp[(4) - (4)].EXP).IDValue);
        strcpy((yyvsp[(1) - (4)].IDAttr).value,(yyvsp[(4) - (4)].EXP).IDValue);
        strcpy((yyvsp[(1) - (4)].IDAttr).kind,"var");
        if((yyvsp[(4) - (4)].EXP).isID==1)GEN("=",std::string((yyvsp[(4) - (4)].EXP).IDName),"_",std::string((yyvsp[(1) - (4)].IDAttr).name));
        else GEN("=",std::string((yyvsp[(4) - (4)].EXP).IDValue),"_",std::string((yyvsp[(1) - (4)].IDAttr).name));
    }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 303 "MyC2.y"
    {
        fprintf(fi,"NM -> empty\n");
        strcpy((yyval.name),curID.c_str());

    }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 314 "MyC2.y"
    {
        fprintf(fi,"ariexplist -> ariexplist ariop ariexp\n");
        (yyval.EXP).isID=1;
        std::string t=NewTemp();
        
        if(!strcmp((yyvsp[(2) - (3)].op),"ADD")){
            double temp=strtod((yyvsp[(1) - (3)].EXP).IDValue,NULL);
            double temp2=strtod((yyvsp[(3) - (3)].EXP).IDValue,NULL);
            double temp3=temp+temp2;
            sprintf((yyval.EXP).IDValue,"%lf",temp3);
            std::string s1;
            std::string s2;
            if((yyvsp[(1) - (3)].EXP).isID)s1=std::string((yyvsp[(1) - (3)].EXP).IDName);
            else s1=std::string((yyvsp[(1) - (3)].EXP).IDValue);
            if((yyvsp[(3) - (3)].EXP).isID)s2=std::string((yyvsp[(3) - (3)].EXP).IDName);
            else s2=std::string((yyvsp[(3) - (3)].EXP).IDValue);
            GEN("+",s1,s2,t);
            strcpy((yyval.EXP).IDName,t.c_str());
        }
        if(!strcmp((yyvsp[(2) - (3)].op),"MINUS")){
            double temp=strtod((yyvsp[(1) - (3)].EXP).IDValue,NULL);
            double temp2=strtod((yyvsp[(3) - (3)].EXP).IDValue,NULL);
            double temp3=temp-temp2;
            sprintf((yyval.EXP).IDValue,"%lf",temp3);
             std::string s1;
            std::string s2;
            if((yyvsp[(1) - (3)].EXP).isID)s1=std::string((yyvsp[(1) - (3)].EXP).IDName);
            else s1=std::string((yyvsp[(1) - (3)].EXP).IDValue);
            if((yyvsp[(3) - (3)].EXP).isID)s2=std::string((yyvsp[(3) - (3)].EXP).IDName);
            else s2=std::string((yyvsp[(3) - (3)].EXP).IDValue);
            GEN("-",s1,s2,t);
            strcpy((yyval.EXP).IDName,t.c_str());
        }
        if(!strcmp((yyvsp[(2) - (3)].op),"TIMES")){
            double temp=strtod((yyvsp[(1) - (3)].EXP).IDValue,NULL);
            double temp2=strtod((yyvsp[(3) - (3)].EXP).IDValue,NULL);
            double temp3=temp*temp2;
            sprintf((yyval.EXP).IDValue,"%lf",temp3);
             std::string s1;
            std::string s2;
            if((yyvsp[(1) - (3)].EXP).isID)s1=std::string((yyvsp[(1) - (3)].EXP).IDName);
            else s1=std::string((yyvsp[(1) - (3)].EXP).IDValue);
            if((yyvsp[(3) - (3)].EXP).isID)s2=std::string((yyvsp[(3) - (3)].EXP).IDName);
            else s2=std::string((yyvsp[(3) - (3)].EXP).IDValue);
            GEN("*",s1,s2,t);
            strcpy((yyval.EXP).IDName,t.c_str());
        }
        if(!strcmp((yyvsp[(2) - (3)].op),"DIVIDE")){
            double temp=strtod((yyvsp[(1) - (3)].EXP).IDValue,NULL);
            double temp2=strtod((yyvsp[(3) - (3)].EXP).IDValue,NULL);
            double temp3=temp/temp2;
            sprintf((yyval.EXP).IDValue,"%lf",temp3);
             std::string s1;
            std::string s2;
            if((yyvsp[(1) - (3)].EXP).isID)s1=std::string((yyvsp[(1) - (3)].EXP).IDName);
            else s1=std::string((yyvsp[(1) - (3)].EXP).IDValue);
            if((yyvsp[(3) - (3)].EXP).isID)s2=std::string((yyvsp[(3) - (3)].EXP).IDName);
            else s2=std::string((yyvsp[(3) - (3)].EXP).IDValue);
            GEN("/",s1,s2,t);
           strcpy((yyval.EXP).IDName,t.c_str());
        }

    }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 377 "MyC2.y"
    {
        fprintf(fi,"ariexplist -> ariexplist ariop LB ariexplist RB\n");
    }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 380 "MyC2.y"
    {
        fprintf(fi,"ariexplist -> ariexp\n");
        strcpy((yyval.EXP).IDValue,(yyvsp[(1) - (1)].EXP).IDValue);
        strcmp((yyval.EXP).IDName,(yyvsp[(1) - (1)].EXP).IDName);
        (yyval.EXP).isID=(yyvsp[(1) - (1)].EXP).isID;
    }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 386 "MyC2.y"
    {
        fprintf(fi,"ariexplist -> LB ariexplist RB\n");
    }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 391 "MyC2.y"
    {
        fprintf(fi,"ariexp -> value\n");
        strcpy((yyval.EXP).IDValue,(yyvsp[(1) - (1)].num));
        (yyval.EXP).isID=0;
        
    }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 397 "MyC2.y"
    {
        fprintf(fi,"ariexp -> ADD useID\n");
        strcpy((yyval.EXP).IDValue,(yyvsp[(2) - (2)].IDAttr).value);
        strcpy((yyval.EXP).IDName,(yyvsp[(2) - (2)].IDAttr).name);
        (yyval.EXP).isID=1;
    }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 403 "MyC2.y"
    {
        fprintf(fi,"ariexp -> MINUS useID\n");
        std::string temp=std::string((yyvsp[(2) - (2)].IDAttr).value).insert(0,"-");
        strcpy((yyval.EXP).IDValue,temp.c_str());
        std::string t=NewTemp();
        GEN("@",std::string((yyvsp[(2) - (2)].IDAttr).name),"_",t);
        strcpy((yyval.EXP).IDName,t.c_str());
        (yyval.EXP).isID=1;

    }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 418 "MyC2.y"
    {
        fprintf(fi,"ariexp -> ID LB RB\n");
    }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 421 "MyC2.y"
    {
        fprintf(fi,"ariexp -> ID LB vlist RB\n");
    }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 427 "MyC2.y"
    {
        fprintf(fi,"vlist -> value\n");
    }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 430 "MyC2.y"
    {
        fprintf(fi,"vlist -> value COMMA value\n");
    }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 438 "MyC2.y"
    {
        fprintf(fi,"value -> CONSTANTNUM\n");
        strcpy((yyvsp[(1) - (1)].num),curValue.c_str());
        strcpy((yyval.num),curValue.c_str());
    }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 443 "MyC2.y"
    {
        fprintf(fi,"value -> ADD CONSTANTNUM\n");
        strcpy((yyvsp[(2) - (2)].num),curValue.c_str());
        strcpy((yyval.num),curValue.c_str());
    }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 448 "MyC2.y"
    {
        fprintf(fi,"value -> MINUS CONSTANTNUM\n");
        strcpy((yyvsp[(2) - (2)].num),curValue.c_str());

        std::string temp=curValue.insert(0,"-");
        strcpy((yyval.num),temp.c_str());

    }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 456 "MyC2.y"
    {
        fprintf(fi,"value -> ID\n");
        strcpy((yyval.num),(yyvsp[(1) - (1)].IDAttr).value);
    }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 462 "MyC2.y"
    {
        fprintf(fi,"useID -> ID\n");
        strcpy((yyvsp[(1) - (1)].IDAttr).name,curID.c_str());
        strcpy((yyval.IDAttr).name,curID.c_str());
        Symbol *symbol=idt.myLookup(curID);
        if(symbol){
            strcpy((yyvsp[(1) - (1)].IDAttr).type,idt.table[curID].type.c_str());
            strcpy((yyvsp[(1) - (1)].IDAttr).kind,idt.table[curID].kind.c_str());
            strcpy((yyvsp[(1) - (1)].IDAttr).value,idt.table[curID].value.c_str());
            strcpy((yyval.IDAttr).type,curID.c_str());
            strcpy((yyval.IDAttr).kind,(yyvsp[(1) - (1)].IDAttr).kind);
            strcpy((yyval.IDAttr).value,(yyvsp[(1) - (1)].IDAttr).value);
        }
        else{
            fprintf(fi2,"line:%d ERROR: undefined identifier\n",line);isError=1;
        }
    }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 485 "MyC2.y"
    {
        fprintf(fi,"conexplist -> conexp\n");
        (yyval.con).tlist=(yyvsp[(1) - (1)].con).tlist;
        (yyval.con).flist=(yyvsp[(1) - (1)].con).flist;
    }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 490 "MyC2.y"
    {
        fprintf(fi,"conexplist -> conexp logop M conexp\n");
        if(!strcmp((yyvsp[(2) - (4)].op),"&&")){
            BackPatch((yyvsp[(1) - (4)].con).tlist,(yyvsp[(3) - (4)].quad));
            (yyval.con).tlist=(yyvsp[(4) - (4)].con).tlist;
            (yyval.con).flist=Merge((yyvsp[(1) - (4)].con).flist,(yyvsp[(4) - (4)].con).flist);
        }
        else if(!strcmp((yyvsp[(2) - (4)].op),"||")){
            BackPatch((yyvsp[(1) - (4)].con).flist,(yyvsp[(3) - (4)].quad));
            (yyval.con).tlist=Merge((yyvsp[(1) - (4)].con).tlist,(yyvsp[(4) - (4)].con).tlist);
            (yyval.con).flist=(yyvsp[(4) - (4)].con).flist;
        }

    }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 506 "MyC2.y"
    {
        fprintf(fi,"conexp ->  ariexp relop ariexp\n");
        (yyval.con).tlist=nexq;
        (yyval.con).flist=nexq+1;
        std::string s1;
        std::string s2;
        if((yyvsp[(1) - (3)].EXP).isID)s1=std::string((yyvsp[(1) - (3)].EXP).IDName);
        else s1=std::string((yyvsp[(1) - (3)].EXP).IDValue);
        if((yyvsp[(3) - (3)].EXP).isID)s2=std::string((yyvsp[(3) - (3)].EXP).IDName);
        else s2=std::string((yyvsp[(3) - (3)].EXP).IDValue);
        GEN("J"+std::string((yyvsp[(2) - (3)].op)),s1,s2,"(0)");
        GEN("J","_","_","(0)");

    }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 524 "MyC2.y"
    {fprintf(fi,"empty -> M\n");
      (yyval.quad)=nexq;
    }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 529 "MyC2.y"
    {
        fprintf(fi,"empty -> n\n");
        (yyval.nexlist)=nexq;
        GEN("J","_","_","(0)");
    }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 535 "MyC2.y"
    {
        fprintf(fi,"ariop -> ADD\n");
        strcpy((yyval.op),"ADD");
    }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 539 "MyC2.y"
    {
        fprintf(fi,"ariop -> MINUS\n");
        strcpy((yyval.op),"MINUS");
    }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 543 "MyC2.y"
    {
        fprintf(fi,"ariop -> TIMES\n");
        strcpy((yyval.op),"TIMES");
    }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 547 "MyC2.y"
    {
        fprintf(fi,"ariop -> DIVIDE\n");
        strcpy((yyval.op),"DIVIDE");
    }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 554 "MyC2.y"
    {
        fprintf(fi,"logop -> DAND\n");
        strcpy((yyval.op),"&&");
    }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 558 "MyC2.y"
    {
        fprintf(fi,"logop -> DOR\n");
        strcpy((yyval.op),"||");
    }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 566 "MyC2.y"
    {
        fprintf(fi,"relop -> EQUAL\n");
        strcpy((yyval.op),"==");

    }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 571 "MyC2.y"
    {
        fprintf(fi,"relop -> LESS\n");
        strcpy((yyval.op),"<");
    }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 575 "MyC2.y"
    {
        fprintf(fi,"relop -> GREATER\n");
        strcpy((yyval.op),">");
    }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 579 "MyC2.y"
    {
        fprintf(fi,"relop -> NOTEQUAL\n");
        strcpy((yyval.op),"!=");
    }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 583 "MyC2.y"
    {
        fprintf(fi,"relop -> LESSEQUAL\n");
        strcpy((yyval.op),"<=");
    }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 587 "MyC2.y"
    {
        fprintf(fi,"relop -> GREATEREQUAL\n");
        strcpy((yyval.op),">=");
    }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 594 "MyC2.y"
    {
        fprintf(fi,"assop -> ASSIGN\n");
    }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 600 "MyC2.y"
    {
        fprintf(fi,"type -> VOID\n");
        strcpy((yyval.IDType),"void");
        //$$="void".c_str();
    }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 605 "MyC2.y"
    {
        fprintf(fi,"type -> INT\n");
        strcpy((yyval.IDType),"INT");
        //$$="INT".c_str();
    }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 610 "MyC2.y"
    {
        fprintf(fi,"type -> FLOAT\n");
        strcpy((yyval.IDType),"FLOAT");
        //$$="FLOAT".c_str();
    }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 615 "MyC2.y"
    {
        fprintf(fi,"type -> DOUBLE\n");
        strcpy((yyval.IDType),"DOUBLE");
        //$$="DOUBLE".c_str();
    }
    break;



/* Line 1455 of yacc.c  */
#line 2438 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 621 "MyC2.y"

void submain(const char *filename){
    //const char* filename="data.txt";
    FILE *file = fopen(filename, "r");
    const char *filename2="res.txt";
    FILE *file2=fopen(filename2,"w");
    yyin=file;
    yyout=file2;
    fi = fopen("Output.txt", "w");
    fi2 =fopen("result.txt","w");
    fi3=fopen("Quad.txt","w");
    line=1;
    yyparse();
    idt.myPrint();
    pquad();
    fclose(fi);
   fclose(fi2);
   fclose(fi3);
    fclose(file);
    fclose(file2);
}
std::string NewTemp(){
    static  int cnt=0;
    std::string t="T"+std::to_string(cnt++);
    tempidt.table[t].name=t;
    return t;
}
void  BackPatch(int l,int t){
    int temp=l;
    if(l>=nexq)return;
    while(temp){
        std::string temp2=qualist[temp].res;
        qualist[temp].res="("+std::to_string(t+1)+")";
        temp2=temp2.erase(0,1);
        temp2=temp2.erase(temp2.size()-1,1);

//        std::cout<<std::stoi(temp2)<<" ";
//        std::cout<<qualist[std::stoi(temp2)].res;
//        temp=0;
//        temp=12;
        temp=std::stoi(temp2);
    }
}
int Merge(int l1,int l2){
    int temp=l2;
    std::string temp2=qualist[temp].res;
    temp2=temp2.erase(0,1);
    temp2=temp2.erase(temp2.size()-1,1);
    while(std::stoi(temp2))temp=std::stoi(temp2);
    qualist[temp].res="("+std::to_string(l1)+")";
    return l2;


}
void GEN(std::string op,std::string arg1,std::string arg2,std::string res){
    qualist[nexq].op=op;
    qualist[nexq].arg1=arg1;
    qualist[nexq].arg2=arg2;
    qualist[nexq].res=res;
    nexq++;
}
void pquad(){
    for(int i=0;i<nexq;++i){
        fprintf(fi3,"(%d) (%s\t%s\t%s\t%s\t)\n",i+1,qualist[i].op.c_str(),qualist[i].arg1.c_str(),qualist[i].arg2.c_str(),qualist[i].res.c_str());
    }
}
int yyerror(char *s)
{
    fprintf(fi2,"line: %d  error: %s \n",line,s);
    return 1;
}

