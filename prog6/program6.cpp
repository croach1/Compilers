// program6.cpp
// Colton Roach
// COSC 4785 Fall 2022
// Program 6
// December 12, 2022

#include<FlexLexer.h>
#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<vector>
#include"nodes.hpp"
#include"symbols.hpp"
#include"program6.tab.hpp"
#include<fstream>
#include<unordered_map>
#include<map>

using namespace std;

string lookup(string id, unordered_map<string, string> tempClassVars, 
              unordered_map<string, string> tempConsVars,
              unordered_map<string, string> tempMethVars,
              unordered_map<string, string> tempBlockVars,
              map<string, string> tempMethParams,
              map<string, string> tempConsParams);

int type;
string token;

yyFlexLexer scanner;
Node *tree;
SymbolTable *st;
SymbolTable *current;

bool returned=false;

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
    
    cout << endl;
    
    st->insertNonClassType("int");
    st->insertNonClassType("void");

    if(!tree)
    {
        cerr << "Tree Failed to Build, Exiting..." << endl;
        return 1;
    }

    st->print(&cout, "");
    cout << endl; 
    
    string validateMain = st->validateMain();
    if(validateMain.length() > 0)
    {
        cout << validateMain << endl;
        return 1;
    }

    cout << "\nSuccess!" << endl;
    return 0;
}


string lookup(string id, unordered_map<string, string> tempClassVars, 
              unordered_map<string, string> tempConsVars,
              unordered_map<string, string> tempMethVars,
              unordered_map<string, string> tempBlockVars,
              map<string, string> tempMethParams,
              map<string, string> tempConsParams)
{
    for(auto x : tempMethVars)
    {
        if(x.first == id)
        {
            return x.second;
        }
    }
    for(auto x : tempMethParams)
    {
        if(x.first == id)
        {
            return x.second;
        }
    }
    for(auto x : tempConsVars)
    {
        if(x.first == id)
        {
            return x.second;
        }
    }
    for(auto x : tempConsParams)
    {
        if(x.first == id)
        {
            return x.second;
        }
    }
    for(auto x : tempBlockVars)
    {
        if(x.first == id)
        {
            return x.second;
        }
    }
    //This comes last
    for(auto x : tempClassVars)
    {
        if(x.first == id)
        {
            return x.second;
        }
    }
    return "";
}
