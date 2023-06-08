/**
 * @file y.tab.h
 * @brief 语法分析器的头文件
 * @date 2023-6-1
 * @author 杜忠璠
*/
void submain(const char *filename);
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 36 "MyC2.y"

    struct{char name[15];char type[15];char value[150];char kind[15];} IDAttr;
    int nexlist;//N
    char num[150];//常数值
    char op[15];//各种运算符
    struct { int tlist,flist;} con;//truelist，falselist，条件表达式
    int quad; //M
    char IDType[15];
    struct{char IDName[15];char IDValue[150];}ASS;//赋值语句
    struct{char IDName[15];char IDValue[150];int isID;int tlist;int flist;}EXP;//EXP
    char name[150];



/* Line 1676 of yacc.c  */
#line 145 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


