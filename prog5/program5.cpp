// program5.cpp
// Colton Roach
// COSC 4785 Fall 2022
// Program 5
// December 2, 2022

#include<FlexLexer.h>
#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<vector>
#include"nodes.hpp"
#include"symbols.hpp"
#include"program5.tab.hpp"
#include<fstream>
#include<unordered_map>
#include<map>

using namespace std;

int type;
string token;

yyFlexLexer scanner;
Node *tree;
SymbolTable *st;
SymbolTable *current;

vector<SymbolTable *> tempCons;
vector<SymbolTable *> tempMeths;
vector<SymbolTable *> tempBlocks;

unordered_map<string, string> tempBlockVars;

unordered_map<string, string> tempConsVars;
map<string, string> tempConsParams;

unordered_map<string, string> tempMethVars;
map<string, string> tempMethParams;

unordered_map<string, string> tempClassVars;

int main()
{
    tree = 0;
    st = new SymbolTable("<TYPE TABLE>: Types");
    current = new SymbolTable("TEMP");
    
    yyparse();
    
    st->insertNonClassType("int");
    st->insertNonClassType("void");

    if(!tree)
    {
        cerr << "Tree Failed to Build, Exiting..." << endl;
        return 1;
    }

    st->print(&cout, "");

    return 0;
}
