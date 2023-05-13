#ifndef IDTABLE_H
#define IDTABLE_H
#include<unordered_map>
#include<string> 
#include<iostream>
#include<stdio.h>
typedef struct Symbol{
	std::string name;
	std::string type;
	std::string value;  
}Symbol; 
class IDtable {
public:
    void myInsert(std::string name,std::string type,std::string value);
    Symbol* myLookup(std::string name);
    void myClear();
    void myPrint();

    std::unordered_map<std::string, Symbol> table;
};
#endif 
