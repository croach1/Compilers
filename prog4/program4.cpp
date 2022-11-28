// program4.cpp
// Colton Roach
// COSC 4785 Fall 2022
// Program 4
// November 3, 2022

#include<FlexLexer.h>
#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include"nodes.hpp"
#include"program4.tab.hpp"
#include<fstream>

using namespace std;

void sendOutput(int, int, string, string);

int type;
string token;

yyFlexLexer scanner;
Node *tree;

int main()
{
    tree = 0;
    yyparse();
    if(tree){
        tree->print(&cout, "");
    }
    else{
        cout << "Tree Failed to Build, Exiting..." << endl;
    }
    return 0;
}
