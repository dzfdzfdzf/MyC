
%{
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
%}

%token ID INT BREAK CASE DOUBLE
%token CONST FLOAT VOID RETURN
%token FOR WHILE IF ELSE 
%token SWITCH DEFAULT LB RB LBB RBB
%token DOT SEMI COLON COMMA CONSTANTNUM

%left ASSIGN  

%left DOR
%left DAND
%left NOTEQUAL EQUAL
%left GREATER LESS GREATEREQUAL LESSEQUAL
%left ADD MINUS
%left TIMES DIVIDE

%start START
%%
/*C代码入口*/
START:
    Cprogram
Cprogram: 
    external_declaration {
        fprintf(fi, "Cprogram -> external_declaration\n");
        fprintf(fi,"Success!\n");
    }
    | Cprogram external_declaration{
        fprintf(fi,"Cprogram -> Cprogram external_declaration\n");
        fprintf(fi,"Success!\n");
    }
    ;
/* 
 *代码块
 *分为函数块、变量块
 */
external_declaration
    : function_definition{
        fprintf(fi, "external_declaration -> function_definition\n");
    }
    | declaration{
        fprintf(fi, "external_declaration -> declaration\n");
    }
    ;
/*
 *函数块
 *分为4种情况：
 * 1. int print(int a, int b){int a = 0;}
 * 2. int print();
 * 3. int print(){int a = 0;}
 * 4. int print(int a, int b);
 */
function_definition
    : type_specifier ID LB parameter_list RB compound_statement{
         fprintf(fi, "function_definition -> type_specifier ID LB parameter_list RB compound_statement\n");
    }
    | type_specifier ID LB RB compound_statement{
        fprintf(fi, "function_definition -> type_specifier ID LB RB compound_statement\n");
    }
    | type_specifier ID LB parameter_list RB SEMI{
         fprintf(fi, "function_definition -> type_specifier ID LB parameter_list RB SEMI\n");
    }
    | type_specifier ID LB RB SEMI{
         fprintf(fi, "function_definition -> type_specifier ID LB RB SEMI\n");
    }
    ;
/*变量块*/
declaration
    : type_specifier declarator SEMI{
        fprintf(fi,"declaration -> type_specifier declarator SEMI\n");
    }
    | type_specifier assignmenexpression SEMI{
        fprintf(fi,"declaration -> type_specifier assignmenexpression SEMI\n");
    }
    ;
/*参数列表*/
parameter_list
    : parameter_declaration{
        fprintf(fi,"parameter_list -> parameter_declaration\n");
    }
    | parameter_list COMMA parameter_declaration{
        fprintf(fi,"parameter_list -> parameter_list COMMA parameter_declaration\n");
    }
    ;
/*参数声明*/
parameter_declaration
    : type_specifier declarator{
        fprintf(fi,"parameter_declaration -> type_specifier declarator\n");
    }
    ;
/*变量*/
declarator
    : ID{
        fprintf(fi,"declarator -> ID\n");
    }
    ;
/*函数实现块*/
compound_statement
    : LBB RBB{
        fprintf(fi,"compound_statement -> LBB RBB\n");
    }
    | LBB block_item_list RBB{
        fprintf(fi,"compound_statement -> LBB block_item_list RBB\n");
    }
    ;
/*C语句块列表*/
block_item_list
    : block_item{
        fprintf(fi,"block_item_list -> block_item\n");
    }
    | block_item_list block_item{
         fprintf(fi,"block_item_list -> block_item_list block_item\n");
    }
    ;
/*C语句块
 *分为声明语句和操作语句
 */
block_item
    : declaration{
        fprintf(fi,"block_item -> declaration\n");
    }
    | statement{
        fprintf(fi,"block_item -> statement\n");
    }
    | RETURN arithmetic_expression_list SEMI{
        fprintf(fi,"block_item -> RETURN arithmetic_expression_list SEMI\n");
    }
    | RETURN conditional_expression_list SEMI{
        fprintf(fi,"block_item -> RETURN conditional_expression_list SEMI\n");
    }
    ;
/*操作语句*/
statement
    : compound_statement{
        fprintf(fi,"statement -> compound_statement\n");
    }
    | expression_statement{
        fprintf(fi,"statement -> expression_statement\n");
    }
    | selection_statement{
        fprintf(fi,"statement -> selection_statement\n");
    }
    | iteration_statement{
        fprintf(fi,"statement -> iteration_statement\n");
    }
    ;
/*操作语句：多条语句*/
expression_statement
    : SEMI{
        fprintf(fi,"expression_statement -> SEMI\n");
    }
    | expression SEMI{
        fprintf(fi,"expression_statement -> expression SEMI\n");
    }
    ;
/*
 *操作语句：选择
 *分成两个，以消除偏移/规约冲突
 */
selection_statement
    : IF LB expression RB statement statement{
        fprintf(fi,"selection_statement -> IF LB expression RB statement statement\n");
    }
    |   IF LB expression RB statement ELSE statement{
        fprintf(fi,"selection_statement -> IF LB expression RB statement ELSE statement\n");
    }

    ;
/*操作语句：迭代循环*/
iteration_statement
    : WHILE LB expression RB statement{
        fprintf(fi,"iteration_statement -> WHILE LB expression RB statement\n");
    } 
    | FOR LB declaration expression_statement expression RB statement{
        fprintf(fi,"iteration_statement -> FOR LB declaration expression_statement expression RB statement\n");
    }
    ;
/*
 *表达式
 *分为条件表达式、赋值表达式、算数表达式
 */
expression
    : conditional_expression_list{
        fprintf(fi,"expression -> conditional_expression_list\n");
    }
    | assignmenexpression{
        fprintf(fi,"expression -> assignmenexpression\n");
    }
    |   arithmetic_expression_list{
        fprintf(fi,"expression -> arithmetic_expression_list\n");
    }
    ;
/*赋值表达式*/
assignmenexpression
    :   declarator assignmenoperator expression{
        fprintf(fi,"assignmenexpression -> declarator assignmenoperator expression\n");
    }
    ;
/*
 *算数表达式
 *  拆分成两个，以消除偏移/规约冲突
 */
arithmetic_expression_list
    :   arithmetic_expression_list arithmetic_operator arithmetic_expression{
        fprintf(fi,"arithmetic_expression_list -> arithmetic_expression_list arithmetic_operator arithmetic_expression\n");
    }
    |   arithmetic_expression_list arithmetic_operator LB arithmetic_expression_list RB{
        fprintf(fi,"arithmetic_expression_list -> arithmetic_expression_list arithmetic_operator LB arithmetic_expression_list RB\n");
    } 
    |   arithmetic_expression{
        fprintf(fi,"arithmetic_expression_list -> arithmetic_expression\n");
    }
    |   LB arithmetic_expression_list RB{
        fprintf(fi,"arithmetic_expression_list -> LB arithmetic_expression_list RB\n");
    }
    ;
arithmetic_expression
    : value{
        fprintf(fi,"arithmetic_expression -> value\n");
    }
    |   ADD ID{
        fprintf(fi,"arithmetic_expression -> ADD ID\n");
    }
    |   MINUS ID{
        fprintf(fi,"arithmetic_expression -> MINUS ID\n");
    }
 /*
  *函数调用
  *特性与算数表达式比较类似
  */
    |   ID LB RB {
        fprintf(fi,"arithmetic_expression -> ID LB RB\n");
    }
    |   ID LB value_list RB{
        fprintf(fi,"arithmetic_expression -> ID LB value_list RB\n");
    }
    ;
/*传参*/
value_list
    :   value{
        fprintf(fi,"value_list -> value\n");
    }
    | value COMMA value{
        fprintf(fi,"value_list -> value COMMA value\n");
    }
/*
 *值
 *分为标识符和数字(这里变量只实现数字)
 */
value   
    :   CONSTANTNUM{
        fprintf(fi,"value -> CONSTANTNUM\n");
    }
    |  ADD CONSTANTNUM{
        fprintf(fi,"value -> ADD CONSTANTNUM\n");
    }
    |   MINUS CONSTANTNUM{
        fprintf(fi,"value -> MINUS CONSTANTNUM\n");
    }
    | declarator{
        fprintf(fi,"value -> declarator\n");
    }
    ;
/*
 *条件表达式
 *拆分成两个，以消除偏移/规约冲突
 */
conditional_expression_list
    :   conditional_expression{
        fprintf(fi,"conditional_expression_list -> conditional_expression\n");
    }
    |   conditional_expression logical_operator conditional_expression{
        fprintf(fi,"conditional_expression_list -> conditional_expression logical_operator conditional_expression\n");
    }
    ;
conditional_expression
    :   arithmetic_expression relational_operator arithmetic_expression{
        fprintf(fi,"conditional_expression ->  arithmetic_expression relational_operator arithmetic_expression\n");
    } 
    ;
/*算数/位运算符*/
arithmetic_operator
    :   ADD {
        fprintf(fi,"arithmetic_operator -> ADD\n");
    }
    |   MINUS{
        fprintf(fi,"arithmetic_operator -> MINUS\n");
    }
    |   TIMES{
        fprintf(fi,"arithmetic_operator -> TIMES\n");
    }
    |   DIVIDE{
        fprintf(fi,"arithmetic_operator -> DIVIDE\n");
    }
    ;
/*逻辑运算符*/
logical_operator
    :   DAND{
        fprintf(fi,"logical_operator -> DAND\n");
    }
    |   DOR{
        fprintf(fi,"logical_operator -> DOR\n");
    }
    ; 

/*关系运算符*/
relational_operator
    :   EQUAL{
        fprintf(fi,"relational_operator -> EQUAL\n");
    }
    |   LESS{
        fprintf(fi,"relational_operator -> LESS\n");
    }
    |   GREATER{
        fprintf(fi,"relational_operator -> GREATER\n");
    }
    |   NOTEQUAL{
        fprintf(fi,"relational_operator -> NOTEQUAL\n");
    }
    |   LESSEQUAL{
        fprintf(fi,"relational_operator -> LESSEQUAL\n");
    }
    |   GREATEREQUAL{
        fprintf(fi,"relational_operator -> GREATEREQUAL\n");
    }
    ;
/*赋值符号*/    
assignmenoperator
    : ASSIGN{
        fprintf(fi,"assignmenoperator -> ASSIGN\n");
    }
    ;
/*类型*/
type_specifier
    : VOID{
        fprintf(fi,"type_specifier -> VOID\n");
    }
    | INT{
        fprintf(fi,"type_specifier -> INT\n");
    }
    | FLOAT{
        fprintf(fi,"type_specifier -> FLOAT\n");
    }
    | DOUBLE{
        fprintf(fi,"type_specifier -> DOUBLE\n");
    }
    ;
%%
int main(int argc,char **argv){
    const char* filename="data.txt";
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
    fprintf(fi,"line: %d  error: %s \n",line,s);
    return 1;
}
