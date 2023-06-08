/**
 * @file IDtable.cpp
 * @brief 符号表实现，同时包含一些全局变量
 * @date 2023-5-24
 * @author 杜忠璠
*/
#include "IDtable.h"
IDtable idt;//全局符号表
int line;//行号
std::string curID;//当前的关键字名称
std::string curValue;//当前数字的值
int cnt; //关键字的个数
int isError; //是否有错误
/**
 * @brief 符号表插入函数
 * @param name 符号名称
 * @param type 符号类型
 * @param value 符号值
 * @param kind 符号种类 var/fun
*/
void IDtable::myInsert(std::string name,std::string type,std::string value,std::string kind){
	Symbol symbol={name,type,value,kind};
    table[name] = symbol;
}
/**
 * @brief 符号表查找函数
 * @param name 符号名称
 * @return 符号
*/
Symbol* IDtable::myLookup(std::string name) {
    auto it = table.find(name); //查找
    if (it != table.end()) {
        return &(it->second);
    } else {
        return nullptr;
    }
}
/**
 * @brief 符号表清空函数
*/
void IDtable::myClear() {
    table.clear();
}
/**
 * @brief 符号表打印函数
*/
void IDtable::myPrint() {
	FILE * yyout2;
    yyout2=fopen("symtable.txt","w");
 for (auto& entry:table) {
        Symbol symbol = entry.second;
        fprintf(yyout2,"%s\t%s\t%s\t\n",symbol.name.c_str(),symbol.type.c_str(),symbol.kind.c_str());//输出到文件
    } 
 fclose(yyout2);
         
}
