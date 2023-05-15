#include "IDtable.h"
IDtable idt;
int line;
std::string curID;
void IDtable::myInsert(std::string name,std::string type,std::string value,std::string kind){
	Symbol symbol={name,type,value,kind};
    table[name] = symbol;
}

Symbol* IDtable::myLookup(std::string name) {
    auto it = table.find(name);
    if (it != table.end()) {
        return &(it->second);
    } else {
        return nullptr;
    }
}

void IDtable::myClear() {
    table.clear();
}
void IDtable::myPrint() {
	FILE * yyout2;
//	yyout2=fopen("D:/CPLAB/MyC_QT/symtable.txt","w");
    yyout2=fopen("symtable.txt","w");
//	fprintf(yyout2,"Name\tType\tValue\t\n");
 for (auto& entry:table) {
        Symbol symbol = entry.second;
        fprintf(yyout2,"%s\t%s\t%s\t%s\t\n",symbol.name.c_str(),symbol.type.c_str(),symbol.value.c_str(),symbol.kind.c_str());
    } 
 fclose(yyout2);
         //    for (auto& entry : table) {
//        Symbol symbol = entry.second;
//        std::cout << "Name: " << symbol.name << ", Type: " << symbol.type << ", Value: " << symbol.value << std::endl;
//    }
}
