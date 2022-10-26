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

    yyparse();

/*
    yyFlexLexer myScanner;
    int rtn;

    // Init Code here
    cout << left << setw(8) << "Line" << setw(8) << "Column" << setw(8) 
         << "Token" << setw(8) << "Value" << endl;
    
    int errorCount = 0;
    int column = 1;
    string blockComment = "";

    while((rtn=myScanner.yylex()) != 0) {
        if(errorCount > 20)
        {
            sendOutput(myScanner.lineno(), column, "ERRORS" , "");
            return 0;
        }

        switch(rtn) {
            case 1:
                sendOutput(myScanner.lineno(), column, "ASSIGN", "");
                column += strlen(myScanner.YYText());
                break;
            case 2:
                sendOutput(myScanner.lineno(), column, "EQ", "");
                column += strlen(myScanner.YYText());
                break;
            case 3:
                sendOutput(myScanner.lineno(), column, "GT", "");
                column += strlen(myScanner.YYText());
                break;
            case 4:
                sendOutput(myScanner.lineno(), column, "LT", "");
                column += strlen(myScanner.YYText());
                break;
            case 5:
                sendOutput(myScanner.lineno(), column, "GEQ", "");
                column += strlen(myScanner.YYText());
                break;
            case 6:
                sendOutput(myScanner.lineno(), column, "LEQ", "");
                column += strlen(myScanner.YYText());
                break;
            case 7:
                sendOutput(myScanner.lineno(), column, "NEQ", "");
                column += strlen(myScanner.YYText());
                break;
            case 8:
                sendOutput(myScanner.lineno(), column, "PLUS", "");
                column += strlen(myScanner.YYText());
                break;
            case 9:
                sendOutput(myScanner.lineno(), column, "MINUS", "");
                column += strlen(myScanner.YYText());
                break;
            case 10:
                sendOutput(myScanner.lineno(), column, "TIMES", "");
                column += strlen(myScanner.YYText());
                break;
            case 11:
                sendOutput(myScanner.lineno(), column, "DIV", "");
                column += strlen(myScanner.YYText());
                break;
            case 12:
                sendOutput(myScanner.lineno(), column, "OR", "");
                column += strlen(myScanner.YYText());
                break;
            case 13:
                sendOutput(myScanner.lineno(), column, "AND", "");
                column += strlen(myScanner.YYText());
                break;
            case 14:
                sendOutput(myScanner.lineno(), column, "LBRACE", "");
                column += strlen(myScanner.YYText());
                break;
            case 15:
                sendOutput(myScanner.lineno(), column, "RBRACE", "");
                column += strlen(myScanner.YYText());
                break;
            case 16:
                sendOutput(myScanner.lineno(), column, "LBRACK", "");
                column += strlen(myScanner.YYText());
                break;
            case 17:
                sendOutput(myScanner.lineno(), column, "RBRACK", "");
                column += strlen(myScanner.YYText());
                break;
            case 18:
                sendOutput(myScanner.lineno(), column, "LPAREN", "");
                column += strlen(myScanner.YYText());
                break;
            case 19:
                sendOutput(myScanner.lineno(), column, "RPAREN", "");
                column += strlen(myScanner.YYText());
                break;
            case 20:
                sendOutput(myScanner.lineno(), column, "DOT", "");
                column += strlen(myScanner.YYText());
                break;
            case 21:
                sendOutput(myScanner.lineno(), column, "COMMA", "");
                column += strlen(myScanner.YYText());
                break;
            case 22:
                sendOutput(myScanner.lineno(), column, "SEMI", "");
                column += strlen(myScanner.YYText());
                break;
            case 23:
                sendOutput(myScanner.lineno(), column, "NOT", "");
                column += strlen(myScanner.YYText());
                break;
            case 24:
                sendOutput(myScanner.lineno(), column, "MOD", "");
                column += strlen(myScanner.YYText());
                break;
            case 25:
                //LINE COMMENT
                column = 1;
                break;
            case 50:
                //BEGIN BLOCK COMMENT
                blockComment += myScanner.YYText();
                break;
            case 51:
                //NEWLINE IN BLOCK COMMENT
                blockComment = "";
                break;
            case 52:
                //BLOCK COMMENT CONTENTS
                blockComment += myScanner.YYText();
                break;
            case 53:
                //LAST "/*" OF BLOCK COMMENT
                blockComment += myScanner.YYText();
                column = blockComment.length() + 1;
                break;
            case 27:
                sendOutput(myScanner.lineno(), column, "THIS", "");
                column += strlen(myScanner.YYText());
                break;
            case 28:
                sendOutput(myScanner.lineno(), column, "IF", "");
                column += strlen(myScanner.YYText());
                break;
            case 29:
                sendOutput(myScanner.lineno(), column, "ELSE", "");
                column += strlen(myScanner.YYText());
                break;
            case 30:
                sendOutput(myScanner.lineno(), column, "WHILE", "");
                column += strlen(myScanner.YYText());
                break;
            case 31:
                sendOutput(myScanner.lineno(), column, "INT", "");
                column += strlen(myScanner.YYText());
                break;
            case 32:
                sendOutput(myScanner.lineno(), column, "VOID", "");
                column += strlen(myScanner.YYText());
                break;
            case 33:
                sendOutput(myScanner.lineno(), column, "CLASS", "");
                column += strlen(myScanner.YYText());
                break;
            case 34:
                sendOutput(myScanner.lineno(), column, "NEW", "");
                column += strlen(myScanner.YYText());
                break;
            case 35:
                sendOutput(myScanner.lineno(), column, "PRINT", "");
                column += strlen(myScanner.YYText());
                break;
            case 36:
                sendOutput(myScanner.lineno(), column, "READ", "");
                column += strlen(myScanner.YYText());
                break;
            case 37:
                sendOutput(myScanner.lineno(), column, "RETURN", "");
                column += strlen(myScanner.YYText());
                break;
            case 38:
                sendOutput(myScanner.lineno(), column, "NULLT", "");
                column += strlen(myScanner.YYText());
                break;
            case 39:
                sendOutput(myScanner.lineno(), column, "IDENT", string(myScanner.YYText()));
                column += strlen(myScanner.YYText());
                break;
            case 40:
                sendOutput(myScanner.lineno(), column, "NUMBER", string(myScanner.YYText()));
                column += strlen(myScanner.YYText());
                break;
            case 41:
                //NEWLINE
                column = 1;
                break;
            case 42:
                //TAB
                column += column += strlen(myScanner.YYText()) - 1;
                column = column + 8 - (column % 8) + 1;
                break;
            case 43:
                //SPACE
                column += strlen(myScanner.YYText());
                break;
            case 44:
                sendOutput(myScanner.lineno(), column, "ER_WD", string(myScanner.YYText()));
                column += strlen(myScanner.YYText());
                errorCount += 1;
                break;
            case 45:
                sendOutput(myScanner.lineno(), column, "ER_CH", string(myScanner.YYText()));
                column += strlen(myScanner.YYText());
                errorCount += 1;
                break;
        } 
    }
 */
    return 0;
}

void sendOutput(int line, int column, string token, string value)
{
    cout << left << setw(8) << line << setw(8) << column << setw(8) << token << setw(8) << value << endl;
}

