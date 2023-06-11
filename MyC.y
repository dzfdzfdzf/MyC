
%{
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

%}
%union 
{
    struct{char name[15];char type[15];char value[150];char kind[15];} IDAttr;
    int nexlist;//N
    char num[150];//常数值
    char op[15];//各种运算符
    struct { int tlist,flist;} con;//truelist，falselist，条件语句
    int quad; //M
    char IDType[15];
    struct{char IDName[15];char IDValue[150];}ASS;//赋值语句
    struct{char IDName[15];char IDValue[150];int isID;int tlist;int flist;}EXP;//EXP
    char name[150];
}
%token ID INT BREAK CASE DOUBLE
%token CONST FLOAT VOID RETURN 
%token FOR WHILE ELSE IF 
%token SWITCH DEFAULT LB RB LBB RBB
%token DOT SEMI COLON COMMA CONSTANTNUM

%left ASSIGN  

%left DOR
%left DAND
%left NOTEQUAL EQUAL
%left GREATER LESS GREATEREQUAL LESSEQUAL
%left ADD MINUS
%left TIMES DIVIDE

%type <IDAttr> ID;
%type <IDAttr> useID;
%type <name>  NM;
%type <IDType> type;
%type <num>CONSTANTNUM;
%type <EXP> exp;
%type <EXP> ariexplist;
%type <EXP> ariexp;
%type <ASS>assexp;
%type <num>value;
%type <op>ariop;
%type <op>relop;
%type <op>logop;
%type <con>conexp;
%type <con>conexplist;
%type <quad>M;
%type <nexlist>N;
%type <nexlist>iterstat;
%type <nexlist>stat;
%type <nexlist>codelist;
%type <nexlist>codeitem;
%type <nexlist>selstat;
%start START
%%

/*
* 程序开始
*/
START:
    Cprogram {
        fprintf(fi, " START -> Cprogram\n");
        if(!isError)fprintf(fi2,"Success!\n");
        else fprintf(fi2,"Fail!\n");
   } 
   ;
Cprogram: 
    code {
        fprintf(fi, "Cprogram -> code\n");
      
    }
    | Cprogram code{
        fprintf(fi,"Cprogram -> Cprogram code\n");
    }
    ;
/* 
 * 代码，分为函数和声明
 */
code
    : function{
        fprintf(fi, "code -> function\n");
    }
    | decl{
        fprintf(fi, "code -> decl\n");
    }
    ;
/*
* 函数 int a(int b){...}
*      int a(){...}
*      int a(int b);
*      int a();       
*/
function
    : type ID LB plist RB body{
         fprintf(fi, "function -> type ID LB plist RB body\n");
    }
    | type ID LB RB body{
        fprintf(fi, "function -> type ID LB RB body\n");
    }
    | type ID LB plist RB SEMI{
         fprintf(fi, "function -> type ID LB plist RB SEMI\n");
    }
    | type ID LB RB SEMI{
         fprintf(fi, "function -> type ID LB RB SEMI\n");
    }
    ;
/*
* 声明
* 声明同时赋值
*/
decl
    : type ID SEMI{
        fprintf(fi,"decl -> type ID SEMI\n");
        strcpy($2.kind,"var");
        strcpy($2.name,curID.c_str());
        strcpy($2.type,$1);
        //$2.kind="var".c_str();
        //$2.name=curID.c_str();
        //$2.type=$1;
        Symbol * symbol=idt.myLookup(curID);
        if (symbol) {fprintf(fi2,"line:%d ERROR: repeat definition\n",line);isError=1;} //重复定义
        // 插入符号表
        else {
            idt.myInsert(curID,"","",""); 
            idt.table[curID].type=std::string($1);
            idt.table[curID].kind="var";
            cnt++;
        }
    }
    | type assexp SEMI{
        fprintf(fi,"decl -> type assexp SEMI\n");
        Symbol * symbol=idt.myLookup(std::string($2.IDName));
        if (symbol) {fprintf(fi2,"line:%d ERROR: repeat definition\n",line);isError=1;}
       else {
            idt.myInsert(std::string($2.IDName),"","",""); 
            idt.table[std::string($2.IDName)].type=std::string($1);
            idt.table[std::string($2.IDName)].kind="var";
            idt.table[std::string($2.IDName)].value=std::string($2.IDValue);
            cnt++;
        }
    }
    ;
/*
 * 参数列表
 * 分为一个参数和多个参数
 */
plist
    : pdecl{
        fprintf(fi,"plist -> pdecl\n");
    }
    | plist COMMA pdecl{
        fprintf(fi,"plist -> plist COMMA pdecl\n");
    }
    ;
/*
*  声明参数
*/
pdecl
    : type ID{
        fprintf(fi,"pdecl -> type ID\n");

    }
    ;

/*
 * 函数 {}
 *      {语句块}
 */
body
    : LBB RBB{
        fprintf(fi,"body -> LBB RBB\n");
    }
    | LBB codelist RBB{
        fprintf(fi,"body -> LBB codelist RBB\n");
    }
    ;
/*
* 语句块 
*/
codelist
    : codeitem{
        fprintf(fi,"codelist -> codeitem\n");
        $$=$1;
    }
    | codelist M codeitem{
         fprintf(fi,"codelist -> codelist codeitem\n");
         BackPatch($1,$2);
         $$=$3;
    }
    ;
/*
 * 语句 声明语句
 *      其他语句(while,if)等语法成分
 *      return语句
 */
codeitem
    : decl{
        fprintf(fi,"codeitem -> decl\n");
    }
    | stat{
        fprintf(fi,"codeitem -> stat\n");
        $$=$1;
    }
    | RETURN ariexplist SEMI{
        fprintf(fi,"codeitem -> RETURN ariexplist SEMI\n");
    }
    | RETURN conexplist SEMI{
        fprintf(fi,"codeitem -> RETURN conexplist SEMI\n");
    }
    ;
/*
* 其他语句 body嵌套
*          表达式语句(条件、赋值、算术)
*          选择语句
*          循环语句
*/
stat
    : body{
        fprintf(fi,"stat -> body\n");
    }
    | expstat{
        fprintf(fi,"stat -> expstat\n");
    }
    | selstat{
        fprintf(fi,"stat -> selstat\n");
    }
    | iterstat{
        fprintf(fi,"stat -> iterstat\n");
        $$=$1;
    }
    ;
/*
* 多条表达式语句
*/
expstat
    : SEMI{
        fprintf(fi,"expstat -> SEMI\n");
    }
    | exp SEMI{
        fprintf(fi,"expstat -> exp SEMI\n");
    }
    ;
/*
 *选择语句
 *if
 *if else
 */
selstat
    :   IF LB exp RB M stat  ELSE N M stat{
        fprintf(fi,"selstat -> IF LB exp RB stat ELSE stat\n");
        BackPatch($3.tlist,$5);
        BackPatch($3.flist,$9);
        int temp=Merge($6,$8);
        $$=Merge(temp,$10);
    }
    |  IF LB exp RB M stat {
        fprintf(fi,"selstat -> IF LB exp RB stat \n");
        BackPatch($3.tlist,$5);
        $$=Merge($3.flist,$6);
    }
    ;
/*
 *循环语句
 *while
 *for
 */
iterstat
    : WHILE LB M exp RB M stat{
        fprintf(fi,"iterstat -> WHILE LB M exp RB M stat\n");
        BackPatch($7,$3);
        BackPatch($4.tlist,$6);
        $$=$4.flist;
        GEN("j","_","_","("+std::to_string($3+1)+")");
    } 
    | FOR LB decl expstat exp RB stat{
        fprintf(fi,"iterstat -> FOR LB decl expstat exp RB stat\n");
    }
    ;
/*
 *表达式语句 条件表达式
 *          赋值表达式
 *          算数表达式
 */
exp
    : conexplist{
        fprintf(fi,"exp -> conexplist\n");
        $$.tlist=$1.tlist;
        $$.flist=$1.flist;
    }
    | assexp{
        fprintf(fi,"exp -> assexp\n");
    }
    |   ariexplist{
        fprintf(fi,"exp -> ariexplist\n");
        strcpy($$.IDValue,$1.IDValue);
        strcpy($$.IDName,$1.IDName);
        $$.isID=$1.isID;

    }
    ;
/*
 *赋值表达式 NM记录ID的名称
 */
assexp
    :   ID NM assop exp{
        fprintf(fi,"assexp -> ID assop exp\n");
        strcpy($1.name,$2);
        strcpy($$.IDName,$1.name);
        strcpy($$.IDValue,$4.IDValue);
        strcpy($1.value,$4.IDValue);
        strcpy($1.kind,"var");
        if($4.isID==1)GEN("=",std::string($4.IDName),"_",std::string($1.name));
        else GEN("=",std::string($4.IDValue),"_",std::string($1.name));
    }
    ;
NM
    :
    {
        fprintf(fi,"NM -> empty\n");
        strcpy($$,curID.c_str());

    }  
    ;
/*
 *算数表达式
 */
ariexplist
    :   ariexplist ariop ariexp{
        fprintf(fi,"ariexplist -> ariexplist ariop ariexp\n");
        $$.isID=1;
        std::string t=NewTemp();
        
        if(!strcmp($2,"ADD")){
            double temp=strtod($1.IDValue,NULL);
            double temp2=strtod($3.IDValue,NULL);
            double temp3=temp+temp2;
            sprintf($$.IDValue,"%lf",temp3);
            std::string s1;
            std::string s2;
            if($1.isID)s1=std::string($1.IDName);
            else s1=std::string($1.IDValue);
            if($3.isID)s2=std::string($3.IDName);
            else s2=std::string($3.IDValue);
            GEN("+",s1,s2,t);
            strcpy($$.IDName,t.c_str());
        }
        if(!strcmp($2,"MINUS")){
            double temp=strtod($1.IDValue,NULL);
            double temp2=strtod($3.IDValue,NULL);
            double temp3=temp-temp2;
            sprintf($$.IDValue,"%lf",temp3);
             std::string s1;
            std::string s2;
            if($1.isID)s1=std::string($1.IDName);
            else s1=std::string($1.IDValue);
            if($3.isID)s2=std::string($3.IDName);
            else s2=std::string($3.IDValue);
            GEN("-",s1,s2,t);
            strcpy($$.IDName,t.c_str());
        }
        if(!strcmp($2,"TIMES")){
            double temp=strtod($1.IDValue,NULL);
            double temp2=strtod($3.IDValue,NULL);
            double temp3=temp*temp2;
            sprintf($$.IDValue,"%lf",temp3);
             std::string s1;
            std::string s2;
            if($1.isID)s1=std::string($1.IDName);
            else s1=std::string($1.IDValue);
            if($3.isID)s2=std::string($3.IDName);
            else s2=std::string($3.IDValue);
            GEN("*",s1,s2,t);
            strcpy($$.IDName,t.c_str());
        }
        if(!strcmp($2,"DIVIDE")){
            double temp=strtod($1.IDValue,NULL);
            double temp2=strtod($3.IDValue,NULL);
            double temp3=temp/temp2;
            sprintf($$.IDValue,"%lf",temp3);
             std::string s1;
            std::string s2;
            if($1.isID)s1=std::string($1.IDName);
            else s1=std::string($1.IDValue);
            if($3.isID)s2=std::string($3.IDName);
            else s2=std::string($3.IDValue);
            GEN("/",s1,s2,t);
           strcpy($$.IDName,t.c_str());
        }

    }
    |   ariexplist ariop LB ariexplist RB{
        fprintf(fi,"ariexplist -> ariexplist ariop LB ariexplist RB\n");
    } 
    |   ariexp{
        fprintf(fi,"ariexplist -> ariexp\n");
        strcpy($$.IDValue,$1.IDValue);
        strcmp($$.IDName,$1.IDName);
        $$.isID=$1.isID;
    }
    |   LB ariexplist RB{
        fprintf(fi,"ariexplist -> LB ariexplist RB\n");
    }
    ;
/*
 *  单条算术表达式 值
 *              (+/-)标识符
 *               函数调用
 */
ariexp
    : value{
        fprintf(fi,"ariexp -> value\n");
        strcpy($$.IDValue,$1);
        $$.isID=0;
        
    }
    |   ADD useID{
        fprintf(fi,"ariexp -> ADD useID\n");
        strcpy($$.IDValue,$2.value);
        strcpy($$.IDName,$2.name);
        $$.isID=1;
    }
    |   MINUS useID{
        fprintf(fi,"ariexp -> MINUS useID\n");
        std::string temp=std::string($2.value).insert(0,"-");
        strcpy($$.IDValue,temp.c_str());
        std::string t=NewTemp();
        GEN("@",std::string($2.name),"_",t);
        strcpy($$.IDName,t.c_str());
        $$.isID=1;

    }
     | useID{
        fprintf(fi,"ariexp -> useID\n");
        strcpy($$.IDValue,$1.value);
        strcpy($$.IDName,$1.name);
        $$.isID=1;
    }
    

    |   ID LB RB {
        fprintf(fi,"ariexp -> ID LB RB\n");
    }
    |   ID LB vlist RB{
        fprintf(fi,"ariexp -> ID LB vlist RB\n");
    }
    ;
/*
* 函数参数列表
*/
vlist
    :   value{
        fprintf(fi,"vlist -> value\n");
    }
    | value COMMA value{
        fprintf(fi,"vlist -> value COMMA value\n");
    }
    ;
/*
 *值
 */
value   
    :   CONSTANTNUM{
        fprintf(fi,"value -> CONSTANTNUM\n");
        strcpy($1,curValue.c_str());
        strcpy($$,curValue.c_str());
    }
    |  ADD CONSTANTNUM{
        fprintf(fi,"value -> ADD CONSTANTNUM\n");
        strcpy($2,curValue.c_str());
        strcpy($$,curValue.c_str());
    }
    |   MINUS CONSTANTNUM{
        fprintf(fi,"value -> MINUS CONSTANTNUM\n");
        strcpy($2,curValue.c_str());

        std::string temp=curValue.insert(0,"-");
        strcpy($$,temp.c_str());

    }
   
    ;
/*
*为了方便语义分析，先将ID规约为useID
*/
useID
    :  ID{
        fprintf(fi,"useID -> ID\n");
        strcpy($1.name,curID.c_str());
        strcpy($$.name,curID.c_str());
        Symbol *symbol=idt.myLookup(curID);
        if(symbol){
            strcpy($1.type,idt.table[curID].type.c_str());
            strcpy($1.kind,idt.table[curID].kind.c_str());
            strcpy($1.value,idt.table[curID].value.c_str());
            strcpy($$.type,curID.c_str());
            strcpy($$.kind,$1.kind);
            strcpy($$.value,$1.value);
        }
        else{
            fprintf(fi2,"line:%d ERROR: undefined identifier\n",line);isError=1;
        }
    }
    ;
/*
 *条件表达式
 */
conexplist
    :   conexp{
        fprintf(fi,"conexplist -> conexp\n");
        $$.tlist=$1.tlist;
        $$.flist=$1.flist;
    }
    |   conexp logop M conexp{
        fprintf(fi,"conexplist -> conexp logop M conexp\n");
        if(!strcmp($2,"&&")){
            BackPatch($1.tlist,$3);
            $$.tlist=$4.tlist;
            $$.flist=Merge($1.flist,$4.flist);
        }
        else if(!strcmp($2,"||")){
            BackPatch($1.flist,$3);
            $$.tlist=Merge($1.tlist,$4.tlist);
            $$.flist=$4.flist;
        }

    }
    ;
conexp
    :   ariexp relop ariexp{
        fprintf(fi,"conexp ->  ariexp relop ariexp\n");
        $$.tlist=nexq;
        $$.flist=nexq+1;
        std::string s1;
        std::string s2;
        if($1.isID)s1=std::string($1.IDName);
        else s1=std::string($1.IDValue);
        if($3.isID)s2=std::string($3.IDName);
        else s2=std::string($3.IDValue);
        GEN("J"+std::string($2),s1,s2,"(0)");
        GEN("J","_","_","(0)");

    } 
    ;


    M
    :{fprintf(fi,"empty -> M\n");
      $$=nexq;
    }
    ;
    N
    :{
        fprintf(fi,"empty -> n\n");
        $$=nexq;
        GEN("J","_","_","(0)");
    }
    ;
ariop
    :   ADD {
        fprintf(fi,"ariop -> ADD\n");
        strcpy($$,"ADD");
    }
    |   MINUS{
        fprintf(fi,"ariop -> MINUS\n");
        strcpy($$,"MINUS");
    }
    |   TIMES{
        fprintf(fi,"ariop -> TIMES\n");
        strcpy($$,"TIMES");
    }
    |   DIVIDE{
        fprintf(fi,"ariop -> DIVIDE\n");
        strcpy($$,"DIVIDE");
    }
    ;

logop
    :   DAND{
        fprintf(fi,"logop -> DAND\n");
        strcpy($$,"&&");
    }
    |   DOR{
        fprintf(fi,"logop -> DOR\n");
        strcpy($$,"||");
    }
    ; 


relop
    :   EQUAL{
        fprintf(fi,"relop -> EQUAL\n");
        strcpy($$,"==");

    }
    |   LESS{
        fprintf(fi,"relop -> LESS\n");
        strcpy($$,"<");
    }
    |   GREATER{
        fprintf(fi,"relop -> GREATER\n");
        strcpy($$,">");
    }
    |   NOTEQUAL{
        fprintf(fi,"relop -> NOTEQUAL\n");
        strcpy($$,"!=");
    }
    |   LESSEQUAL{
        fprintf(fi,"relop -> LESSEQUAL\n");
        strcpy($$,"<=");
    }
    |   GREATEREQUAL{
        fprintf(fi,"relop -> GREATEREQUAL\n");
        strcpy($$,">=");
    }
    ;
  
assop
    : ASSIGN{
        fprintf(fi,"assop -> ASSIGN\n");
    }
    ;

type
    : VOID{
        fprintf(fi,"type -> VOID\n");
        strcpy($$,"void");
        //$$="void".c_str();
    }
    | INT{
        fprintf(fi,"type -> INT\n");
        strcpy($$,"INT");
        //$$="INT".c_str();
    }
    | FLOAT{
        fprintf(fi,"type -> FLOAT\n");
        strcpy($$,"FLOAT");
        //$$="FLOAT".c_str();
    }
    | DOUBLE{
        fprintf(fi,"type -> DOUBLE\n");
        strcpy($$,"DOUBLE");
        //$$="DOUBLE".c_str();
    }
    ;
%%
/*
 *   这些注释写在y.tab.cpp中
 */
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
        if(temp2.size()>=2){
            temp2=temp2.erase(0,1);
            temp2=temp2.erase(temp2.size()-1,1);
        }
        temp=std::stoi(temp2);
    }
}
int Merge(int l1,int l2){
    if(l1>=nexq&&l2>=nexq)return 0;
    if(l1>=nexq)return l2;
    if(l2>=nexq)return l1;
     if(l2==0)return l1;
    if(l1==0)return l2;
    int temp=l2;
    std::string temp2=qualist[temp].res;
     if(temp2.size()>=2){
            temp2=temp2.erase(0,1);
            temp2=temp2.erase(temp2.size()-1,1);
        }
    while(std::stoi(temp2)){

      temp=std::stoi(temp2);
      temp2=qualist[temp].res;
       if(temp2.size()>=2){
            temp2=temp2.erase(0,1);
            temp2=temp2.erase(temp2.size()-1,1);
        }
    }
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
