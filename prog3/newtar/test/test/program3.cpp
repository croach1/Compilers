// program1.cpp
// Colton Roach
// COSC 4785 Fall 2022
// Program 3
// September 25, 2022

#include<FlexLexer.h>
#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include"nodes.hpp"
#include"program3.tab.hpp"
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
    cout << endl;
    yyparse();
	tree->print(&cout, "");
	cout << endl;
    return 0;
}

void sendOutput(int line, int column, string token, string value)
{
    cout << left << setw(8) << line << setw(8) << column << setw(8) << token << setw(8) << value << endl;
}

