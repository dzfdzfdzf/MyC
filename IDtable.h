/**
 * @file IDtable.h
 * @brief 符号表头文件
 * @date 2023-5-24
 * @author 杜忠璠
*/
#ifndef IDTABLE_H
#define IDTABLE_H
#include<unordered_map>
#include<string> 
#include<iostream>
#include<stdio.h>
/**
 * @brief 符号结构体
*/
typedef struct Symbol{
	std::string name; //变量名
	std::string type;//变量类型
	std::string value;  //变量值
    std::string kind; //变量还是函数
}Symbol; 
/**
 * @brief 符号表类
*/
class IDtable {
public:
    /**
     * @brief 符号表插入函数
     * @param name 符号名称
     * @param type 符号类型
     * @param value 符号值
    */
    void myInsert(std::string name,std::string type,std::string value,std::string kind);
    /**
     * @brief 符号表查找函数
     * @param name 符号名称
     * @return 符号
    */
    Symbol* myLookup(std::string name);
    /**
     * @brief 符号表清空函数
    */
    void myClear();

    /**
     * @brief 符号表打印函数
    */
    void myPrint();

    std::unordered_map<std::string, Symbol> table;//符号表
};
#endif 
