%option noyywrap
%{
	#include<stdio.h>
	#include "IDtable.h"
	#include "y.tab.h"
	extern IDtable idt;
	FILE * yyout2;	
	extern FILE *yyin;
	extern FILE *yyout;
	extern int line;
	extern int cnt;
	extern int isError;
	//int line=1;
	extern std::string curID;
	int cnt=0; //id个数
%}
INT int
CONST const
DOUBLE double
FLOAT float
VOID void
RETURN return
BREAK break
FOR for
WHILE while
IF if
ELSE else
SWITCH switch
DEFAULT default
CASE case
LETTER [a-zA-Z]
ZERO 0
INTNUM [1-9][0-9]*|{ZERO}
FLOATNUM ({ZERO}|{INTNUM})\.([0-9]+)


ASSIGN \=
SEMI \;
COLON \:
COMMA \,
LB \(
RB \)
LBB \{
RBB \}
DOT \.
ADD \+
MINUS \-
TIMES \*
DIVIDE \/
DAND \&\&
DOR \|\|
GREATER \>
LESS \<
GREATEREQUAL \>\=
LESSEQUAL \<\=
EQUAL \=\=
NOTEQUAL \!\=
COMMENT (\/\/.*)|(\/\*(.|\n)*\*\/)
SPACE (\ )
TAB \t
CONSTANTNUM {INTNUM}|{FLOATNUM}
ID  (\_|{LETTER})(\_|{LETTER}|[0-9])*
ERROR  .
%%
\n {++line;}
{INT} {fprintf(yyout,"line%d,%s: (INT, _)\n",line,yytext);return INT;}
{CONST} {fprintf(yyout,"line%d,%s: (CONST, _)\n",line,yytext);return CONST;}
{DOUBLE} {fprintf(yyout,"line%d,%s: (DOUBLE, _)\n",line,yytext);return DOUBLE;}
{FLOAT} {fprintf(yyout,"line%d,%s: (FLOAT, _)\n",line,yytext);return FLOAT;}
{VOID} {fprintf(yyout,"line%d,%s: (VOID, _)\n",line,yytext);return VOID;}
{RETURN} {fprintf(yyout,"line%d,%s: (RETURN, _)\n",line,yytext);return RETURN;}
{BREAK} {fprintf(yyout,"line%d,%s: (BREAK, _)\n",line,yytext);return BREAK;}
{FOR} {fprintf(yyout,"line%d,%s: (FOR, _)\n",line,yytext);return FOR;}
{WHILE} {fprintf(yyout,"line%d,%s: (WHILE, _)\n",line,yytext);return WHILE;}
{IF} {fprintf(yyout,"line%d,%s: (IF, _)\n",line,yytext);return IF;}
{ELSE} {fprintf(yyout,"line%d,%s: (ELSE, _)\n",line,yytext);return ELSE;}
{SWITCH} {fprintf(yyout,"line%d,%s: (SWITCH, _)\n",line,yytext);return SWITCH;}
{DEFAULT} {fprintf(yyout,"line%d,%s: (DEFAULT, _)\n",line,yytext);return DEFAULT;}
{CASE} {fprintf(yyout,"line%d,%s: (CASE, _)\n",line,yytext);return CASE;}
{ASSIGN} {fprintf(yyout,"line%d,%s: (ASSIGN, _)\n",line,yytext);return ASSIGN;}
{SEMI} {fprintf(yyout,"line%d,%s: (SEMI, _)\n",line,yytext);return SEMI;}
{COLON} {fprintf(yyout,"line%d,%s: (COLON, _)\n",line,yytext);return COLON;}
{COMMA} {fprintf(yyout,"line%d,%s: (COMMA, _)\n",line,yytext);return COMMA;}
{LB} {fprintf(yyout,"line%d,%s: (LB, _)\n",line,yytext);return LB;}
{RB} {fprintf(yyout,"line%d,%s: (RB, _)\n",line,yytext);return RB;}
{LBB} {fprintf(yyout,"line%d,%s: (LBB, _)\n",line,yytext);return LBB;}
{RBB} {fprintf(yyout,"line%d,%s: (RBB, _)\n",line,yytext);return RBB;}
{DOT} {fprintf(yyout,"line%d,%s: (DOT, _)\n",line,yytext);return DOT;}
{ADD} {fprintf(yyout,"line%d,%s: (ADD, _)\n",line,yytext);return ADD;}
{MINUS} {fprintf(yyout,"line%d,%s: (MINUS, _)\n",line,yytext);return MINUS;}
{TIMES} {fprintf(yyout,"line%d,%s: (TIMES, _)\n",line,yytext);return TIMES;}
{DIVIDE} {fprintf(yyout,"line%d,%s: (DIVIDE, _)\n",line,yytext);return DIVIDE;}
{DAND} {fprintf(yyout,"line%d,%s: (DAND, _)\n",line,yytext);return DAND;}
{DOR} {fprintf(yyout,"line%d,%s: (DOR, _)\n",line,yytext);return DOR;}
{GREATER} {fprintf(yyout,"line%d,%s: (GREATER, _)\n",line,yytext);return GREATER;}
{LESS} {fprintf(yyout,"line%d,%s: (LESS, _)\n",line,yytext);return LESS;}
{GREATEREQUAL} {fprintf(yyout,"line%d,%s: (GREATEREQUAL, _)\n",line,yytext);return GREATEREQUAL;}
{LESSEQUAL} {fprintf(yyout,"line%d,%s: (LESSEQUAL, _)\n",line,yytext);return LESSEQUAL;}
{EQUAL} {fprintf(yyout,"line%d,%s: (EQUAL, _)\n",line,yytext);return EQUAL;}
{NOTEQUAL} {fprintf(yyout,"line%d,%s: (NOTEQUAL, _)\n",line,yytext);return NOTEQUAL;}
{COMMENT} {fprintf(yyout,"line%d,%s: This is comment!\n",line,yytext);}
{CONSTANTNUM} {fprintf(yyout,"line%d,%s: (CONSTANTNUM, %s)\n",line,yytext,yytext);return CONSTANTNUM;}

{ID} {fprintf(yyout,"line%d,%s: (ID, %s)\n",line,yytext,yytext);std::string name=yytext; curID=name;return ID;}

{SPACE} {}
{TAB} {}
{ERROR} {fprintf(yyout,"On line %d,Wrong character:  %s\n",line,yytext);isError=1;}



%%
//int main(){
	//yyin=fopen("data.txt","r");
//	yyout=fopen("res.txt","w");
	
	//yylex();
	//idt.myPrint();
	//return 0;
//}
//int yywrap(){
	//return 1;
//}

