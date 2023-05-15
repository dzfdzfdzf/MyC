
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
#include "IDtable.h"
extern int line;
int yylex();
int yyerror(char *s);
extern FILE *yyin;
extern FILE *yyout;
extern IDtable idt;
FILE *fi;  //指向输出文件的指针
FILE *fi2;

/* Line 189 of yacc.c  */
#line 87 "y.tab.c"

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
     IF = 269,
     ELSE = 270,
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
#define IF 269
#define ELSE 270
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
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 207 "y.tab.c"

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
#define YYLAST   190

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNRULES -- Number of states.  */
#define YYNSTATES  126

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
      34,    40,    44,    48,    50,    54,    57,    59,    62,    66,
      68,    71,    73,    75,    79,    83,    85,    87,    89,    91,
      93,    96,   102,   110,   116,   124,   126,   128,   130,   134,
     138,   144,   146,   150,   152,   155,   158,   162,   167,   169,
     173,   175,   178,   181,   183,   185,   189,   193,   195,   197,
     199,   201,   203,   205,   207,   209,   211,   213,   215,   217,
     219,   221,   223,   225
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      41,     0,    -1,    42,    -1,    43,    -1,    42,    43,    -1,
      44,    -1,    45,    -1,    68,     3,    18,    46,    19,    49,
      -1,    68,     3,    18,    19,    49,    -1,    68,     3,    18,
      46,    19,    23,    -1,    68,     3,    18,    19,    23,    -1,
      68,    48,    23,    -1,    68,    57,    23,    -1,    47,    -1,
      46,    25,    47,    -1,    68,    48,    -1,     3,    -1,    20,
      21,    -1,    20,    50,    21,    -1,    51,    -1,    50,    51,
      -1,    45,    -1,    52,    -1,    11,    58,    23,    -1,    11,
      62,    23,    -1,    49,    -1,    53,    -1,    54,    -1,    55,
      -1,    23,    -1,    56,    23,    -1,    14,    18,    56,    19,
      52,    -1,    14,    18,    56,    19,    52,    15,    52,    -1,
      13,    18,    56,    19,    52,    -1,    12,    18,    45,    53,
      56,    19,    52,    -1,    62,    -1,    57,    -1,    58,    -1,
      48,    67,    56,    -1,    58,    64,    59,    -1,    58,    64,
      18,    58,    19,    -1,    59,    -1,    18,    58,    19,    -1,
      61,    -1,    37,     3,    -1,    36,     3,    -1,     3,    18,
      19,    -1,     3,    18,    60,    19,    -1,    61,    -1,    61,
      25,    61,    -1,    26,    -1,    37,    26,    -1,    36,    26,
      -1,    48,    -1,    63,    -1,    63,    65,    63,    -1,    59,
      66,    59,    -1,    37,    -1,    36,    -1,    39,    -1,    38,
      -1,    29,    -1,    28,    -1,    30,    -1,    34,    -1,    35,
      -1,    31,    -1,    32,    -1,    33,    -1,    27,    -1,    10,
      -1,     4,    -1,     9,    -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    34,    34,    36,    40,    50,    53,    59,    62,    65,
      68,    74,    77,    83,    86,    92,    98,   104,   107,   113,
     116,   124,   127,   130,   133,   139,   142,   145,   148,   154,
     157,   166,   169,   176,   179,   188,   191,   194,   200,   209,
     212,   215,   218,   223,   226,   229,   236,   239,   245,   248,
     256,   259,   262,   265,   274,   277,   282,   288,   291,   294,
     297,   303,   306,   313,   316,   319,   322,   325,   328,   334,
     340,   343,   346,   349
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INT", "BREAK", "CASE", "DOUBLE",
  "CONST", "FLOAT", "VOID", "RETURN", "FOR", "WHILE", "IF", "ELSE",
  "SWITCH", "DEFAULT", "LB", "RB", "LBB", "RBB", "DOT", "SEMI", "COLON",
  "COMMA", "CONSTANTNUM", "ASSIGN", "DOR", "DAND", "EQUAL", "NOTEQUAL",
  "LESSEQUAL", "GREATEREQUAL", "LESS", "GREATER", "MINUS", "ADD", "DIVIDE",
  "TIMES", "$accept", "START", "Cprogram", "code", "function", "decl",
  "plist", "pdecl", "declarator", "body", "codelist", "codeitem", "stat",
  "expstat", "selstat", "iterstat", "exp", "assexp", "ariexplist",
  "ariexp", "vlist", "value", "conexplist", "conexp", "ariop", "logop",
  "relop", "assop", "type", 0
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
      44,    45,    45,    46,    46,    47,    48,    49,    49,    50,
      50,    51,    51,    51,    51,    52,    52,    52,    52,    53,
      53,    54,    54,    55,    55,    56,    56,    56,    57,    58,
      58,    58,    58,    59,    59,    59,    59,    59,    60,    60,
      61,    61,    61,    61,    62,    62,    63,    64,    64,    64,
      64,    65,    65,    66,    66,    66,    66,    66,    66,    67,
      68,    68,    68,    68
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     6,     5,     6,
       5,     3,     3,     1,     3,     2,     1,     2,     3,     1,
       2,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       2,     5,     7,     5,     7,     1,     1,     1,     3,     3,
       5,     1,     3,     1,     2,     2,     3,     4,     1,     3,
       1,     2,     2,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    71,    73,    72,    70,     0,     2,     3,     5,     6,
       0,     1,     4,    16,     0,     0,     0,    11,    69,     0,
      12,     0,     0,    13,     0,    16,     0,    50,     0,     0,
      53,    38,    36,    37,    41,    43,    35,    54,     0,    10,
       8,     0,     0,    16,    15,     0,    53,     0,    41,    45,
      52,    44,    51,    58,    57,    60,    59,     0,    63,    66,
      67,    68,    64,    65,     0,    62,    61,     0,     0,     0,
       0,     0,    17,    29,    21,    25,     0,    19,    22,    26,
      27,    28,     0,     0,     9,     7,    14,    46,     0,     0,
       0,    48,    42,     0,    39,    56,     0,    55,     0,     0,
       0,     0,     0,    18,    20,    30,    47,     0,     0,    23,
      24,     0,     0,     0,    49,    40,     0,     0,     0,     0,
      33,    31,     0,     0,    34,    32
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    22,    23,    30,    75,
      76,    77,    78,    79,    80,    81,    82,    32,    33,    34,
      90,    35,    36,    37,    57,    67,    64,    19,    83
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -40
static const yytype_int16 yypact[] =
{
     130,   -40,   -40,   -40,   -40,    11,   130,   -40,   -40,   -40,
      16,   -40,   -40,     2,    38,    36,    17,   -40,   -40,   126,
     -40,    73,    -7,   -40,    27,    46,   126,   -40,    12,    22,
      39,   -40,   -40,   151,   150,   -40,   -40,   -19,    91,   -40,
     -40,    87,   130,   -40,   -40,    50,   -40,    41,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   140,   -40,   -40,
     -40,   -40,   -40,   -40,    14,   -40,   -40,    14,   126,    57,
      63,    64,   -40,   -40,   -40,   -40,   112,   -40,   -40,   -40,
     -40,   -40,    65,    27,   -40,   -40,   -40,   -40,    80,    82,
      94,    93,   -40,   126,   -40,   -40,   150,   -40,   132,    97,
     130,   126,   126,   -40,   -40,   -40,   -40,    26,    53,   -40,
     -40,   128,   117,   122,   -40,   -40,   126,    19,    19,   123,
     -40,   135,    19,    19,   -40,   -40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -40,   -40,   -40,   139,   -40,   -33,   -40,   105,   -10,   -13,
     -40,    77,    56,    45,   -40,   -40,   -17,    -9,   -22,   -23,
     -40,   -39,    89,    92,   -40,   -40,   -40,   -40,     7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      14,    15,    31,    48,    47,    74,    91,    10,    40,    65,
      66,    11,    41,    10,    44,    49,    46,    25,    42,    13,
      16,     1,    25,    24,     2,    51,     3,     4,    85,    43,
      43,    69,    70,    71,    94,    46,    21,    26,    50,    38,
      27,    95,    73,    74,    96,    27,    98,    46,    52,    24,
      28,    29,    27,    43,    46,    28,    29,    46,    46,    20,
      92,    17,    88,    89,    45,    18,    18,   111,   114,    87,
      48,   108,   115,    14,    15,   100,    27,    53,    54,    55,
      56,   101,   102,    46,   112,   113,    88,    89,   105,    53,
      54,    55,    56,    38,    25,     1,    39,    46,     2,   119,
       3,     4,    68,    69,    70,    71,    50,    38,    52,    26,
      84,    38,    72,   106,    73,    25,     1,    27,   107,     2,
     110,     3,     4,    68,    69,    70,    71,    28,    29,    25,
      26,    25,    38,   103,     1,    73,   117,     2,    27,     3,
       4,   118,   122,    25,    26,    12,    26,    86,    28,    29,
     123,    73,    27,   104,    27,   109,   116,    99,    93,    97,
       0,     0,    28,    29,    28,    29,    27,     0,    53,    54,
      55,    56,     0,   120,   121,     0,    28,    29,   124,   125,
      58,    59,    60,    61,    62,    63,     0,    53,    54,    55,
      56
};

static const yytype_int8 yycheck[] =
{
      10,    10,    19,    26,    26,    38,    45,     0,    21,    28,
      29,     0,    19,     6,    24,     3,    26,     3,    25,     3,
      18,     4,     3,    16,     7,     3,     9,    10,    41,     3,
       3,    12,    13,    14,    57,    45,    19,    18,    26,    20,
      26,    64,    23,    76,    67,    26,    68,    57,    26,    42,
      36,    37,    26,     3,    64,    36,    37,    67,    68,    23,
      19,    23,    36,    37,    18,    27,    27,   100,   107,    19,
      93,    93,    19,    83,    83,    18,    26,    36,    37,    38,
      39,    18,    18,    93,   101,   102,    36,    37,    23,    36,
      37,    38,    39,    20,     3,     4,    23,   107,     7,   116,
       9,    10,    11,    12,    13,    14,    26,    20,    26,    18,
      23,    20,    21,    19,    23,     3,     4,    26,    25,     7,
      23,     9,    10,    11,    12,    13,    14,    36,    37,     3,
      18,     3,    20,    21,     4,    23,    19,     7,    26,     9,
      10,    19,    19,     3,    18,     6,    18,    42,    36,    37,
      15,    23,    26,    76,    26,    23,   111,    68,    18,    67,
      -1,    -1,    36,    37,    36,    37,    26,    -1,    36,    37,
      38,    39,    -1,   117,   118,    -1,    36,    37,   122,   123,
      30,    31,    32,    33,    34,    35,    -1,    36,    37,    38,
      39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     7,     9,    10,    41,    42,    43,    44,    45,
      68,     0,    43,     3,    48,    57,    18,    23,    27,    67,
      23,    19,    46,    47,    68,     3,    18,    26,    36,    37,
      48,    56,    57,    58,    59,    61,    62,    63,    20,    23,
      49,    19,    25,     3,    48,    18,    48,    58,    59,     3,
      26,     3,    26,    36,    37,    38,    39,    64,    30,    31,
      32,    33,    34,    35,    66,    28,    29,    65,    11,    12,
      13,    14,    21,    23,    45,    49,    50,    51,    52,    53,
      54,    55,    56,    68,    23,    49,    47,    19,    36,    37,
      60,    61,    19,    18,    59,    59,    59,    63,    58,    62,
      18,    18,    18,    21,    51,    23,    19,    25,    58,    23,
      23,    45,    56,    56,    61,    19,    53,    19,    19,    56,
      52,    52,    19,    15,    52,    52
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
#line 36 "MyC2.y"
    {
        fprintf(fi, "Cprogram -> code\n");
        fprintf(fi2,"Success!\n");
    }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 40 "MyC2.y"
    {
        fprintf(fi,"Cprogram -> Cprogram code\n");
        fprintf(fi2,"Success!\n");
    }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 50 "MyC2.y"
    {
        fprintf(fi, "code -> function\n");
    }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 53 "MyC2.y"
    {
        fprintf(fi, "code -> decl\n");
    }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 59 "MyC2.y"
    {
         fprintf(fi, "function -> type ID LB plist RB body\n");
    }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 62 "MyC2.y"
    {
        fprintf(fi, "function -> type ID LB RB body\n");
    }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 65 "MyC2.y"
    {
         fprintf(fi, "function -> type ID LB plist RB SEMI\n");
    }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 68 "MyC2.y"
    {
         fprintf(fi, "function -> type ID LB RB SEMI\n");
    }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 74 "MyC2.y"
    {
        fprintf(fi,"decl -> type declarator SEMI\n");
    }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 77 "MyC2.y"
    {
        fprintf(fi,"decl -> type assexp SEMI\n");
    }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 83 "MyC2.y"
    {
        fprintf(fi,"plist -> pdecl\n");
    }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 86 "MyC2.y"
    {
        fprintf(fi,"plist -> plist COMMA pdecl\n");
    }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 92 "MyC2.y"
    {
        fprintf(fi,"pdecl -> type declarator\n");
    }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 98 "MyC2.y"
    {
        fprintf(fi,"declarator -> ID\n");
    }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 104 "MyC2.y"
    {
        fprintf(fi,"body -> LBB RBB\n");
    }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 107 "MyC2.y"
    {
        fprintf(fi,"body -> LBB codelist RBB\n");
    }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 113 "MyC2.y"
    {
        fprintf(fi,"codelist -> codeitem\n");
    }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 116 "MyC2.y"
    {
         fprintf(fi,"codelist -> codelist codeitem\n");
    }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 124 "MyC2.y"
    {
        fprintf(fi,"codeitem -> decl\n");
    }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 127 "MyC2.y"
    {
        fprintf(fi,"codeitem -> stat\n");
    }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 130 "MyC2.y"
    {
        fprintf(fi,"codeitem -> RETURN ariexplist SEMI\n");
    }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 133 "MyC2.y"
    {
        fprintf(fi,"codeitem -> RETURN conexplist SEMI\n");
    }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 139 "MyC2.y"
    {
        fprintf(fi,"stat -> body\n");
    }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 142 "MyC2.y"
    {
        fprintf(fi,"stat -> expstat\n");
    }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 145 "MyC2.y"
    {
        fprintf(fi,"stat -> selstat\n");
    }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 148 "MyC2.y"
    {
        fprintf(fi,"stat -> iterstat\n");
    }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 154 "MyC2.y"
    {
        fprintf(fi,"expstat -> SEMI\n");
    }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 157 "MyC2.y"
    {
        fprintf(fi,"expstat -> exp SEMI\n");
    }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 166 "MyC2.y"
    {
        fprintf(fi,"selstat -> IF LB exp RB stat \n");
    }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 169 "MyC2.y"
    {
        fprintf(fi,"selstat -> IF LB exp RB stat ELSE stat\n");
    }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 176 "MyC2.y"
    {
        fprintf(fi,"iterstat -> WHILE LB exp RB stat\n");
    }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 179 "MyC2.y"
    {
        fprintf(fi,"iterstat -> FOR LB decl expstat exp RB stat\n");
    }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 188 "MyC2.y"
    {
        fprintf(fi,"exp -> conexplist\n");
    }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 191 "MyC2.y"
    {
        fprintf(fi,"exp -> assexp\n");
    }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 194 "MyC2.y"
    {
        fprintf(fi,"exp -> ariexplist\n");
    }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 200 "MyC2.y"
    {
        fprintf(fi,"assexp -> declarator assop exp\n");
    }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 209 "MyC2.y"
    {
        fprintf(fi,"ariexplist -> ariexplist ariop ariexp\n");
    }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 212 "MyC2.y"
    {
        fprintf(fi,"ariexplist -> ariexplist ariop LB ariexplist RB\n");
    }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 215 "MyC2.y"
    {
        fprintf(fi,"ariexplist -> ariexp\n");
    }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 218 "MyC2.y"
    {
        fprintf(fi,"ariexplist -> LB ariexplist RB\n");
    }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 223 "MyC2.y"
    {
        fprintf(fi,"ariexp -> value\n");
    }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 226 "MyC2.y"
    {
        fprintf(fi,"ariexp -> ADD ID\n");
    }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 229 "MyC2.y"
    {
        fprintf(fi,"ariexp -> MINUS ID\n");
    }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 236 "MyC2.y"
    {
        fprintf(fi,"ariexp -> ID LB RB\n");
    }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 239 "MyC2.y"
    {
        fprintf(fi,"ariexp -> ID LB vlist RB\n");
    }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 245 "MyC2.y"
    {
        fprintf(fi,"vlist -> value\n");
    }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 248 "MyC2.y"
    {
        fprintf(fi,"vlist -> value COMMA value\n");
    }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 256 "MyC2.y"
    {
        fprintf(fi,"value -> CONSTANTNUM\n");
    }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 259 "MyC2.y"
    {
        fprintf(fi,"value -> ADD CONSTANTNUM\n");
    }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 262 "MyC2.y"
    {
        fprintf(fi,"value -> MINUS CONSTANTNUM\n");
    }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 265 "MyC2.y"
    {
        fprintf(fi,"value -> declarator\n");
    }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 274 "MyC2.y"
    {
        fprintf(fi,"conexplist -> conexp\n");
    }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 277 "MyC2.y"
    {
        fprintf(fi,"conexplist -> conexp logop conexp\n");
    }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 282 "MyC2.y"
    {
        fprintf(fi,"conexp ->  ariexp relop ariexp\n");
    }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 288 "MyC2.y"
    {
        fprintf(fi,"ariop -> ADD\n");
    }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 291 "MyC2.y"
    {
        fprintf(fi,"ariop -> MINUS\n");
    }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 294 "MyC2.y"
    {
        fprintf(fi,"ariop -> TIMES\n");
    }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 297 "MyC2.y"
    {
        fprintf(fi,"ariop -> DIVIDE\n");
    }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 303 "MyC2.y"
    {
        fprintf(fi,"logop -> DAND\n");
    }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 306 "MyC2.y"
    {
        fprintf(fi,"logop -> DOR\n");
    }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 313 "MyC2.y"
    {
        fprintf(fi,"relop -> EQUAL\n");
    }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 316 "MyC2.y"
    {
        fprintf(fi,"relop -> LESS\n");
    }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 319 "MyC2.y"
    {
        fprintf(fi,"relop -> GREATER\n");
    }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 322 "MyC2.y"
    {
        fprintf(fi,"relop -> NOTEQUAL\n");
    }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 325 "MyC2.y"
    {
        fprintf(fi,"relop -> LESSEQUAL\n");
    }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 328 "MyC2.y"
    {
        fprintf(fi,"relop -> GREATEREQUAL\n");
    }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 334 "MyC2.y"
    {
        fprintf(fi,"assop -> ASSIGN\n");
    }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 340 "MyC2.y"
    {
        fprintf(fi,"type -> VOID\n");
    }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 343 "MyC2.y"
    {
        fprintf(fi,"type -> INT\n");
    }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 346 "MyC2.y"
    {
        fprintf(fi,"type -> FLOAT\n");
    }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 349 "MyC2.y"
    {
        fprintf(fi,"type -> DOUBLE\n");
    }
    break;



/* Line 1455 of yacc.c  */
#line 2168 "y.tab.c"
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
#line 353 "MyC2.y"

void submain(const char* filename){
//    const char* filename="data.txt";
    FILE *file = fopen(filename, "r");
    const char *filename2="res.txt";
    FILE *file2=fopen(filename2,"w");
    yyin=file;
    yyout=file2;
    fi = fopen("Output.txt", "w");
    fi2 =fopen("result.txt","w");
    line=1;
    yyparse();
    idt.myPrint();
    fclose(fi);
   fclose(fi2);
    fclose(file);
    fclose(file2);
}
int yyerror(char *s)
{
    fprintf(fi2,"line: %d  error: %s \n",line,s);
    return 1;
}

