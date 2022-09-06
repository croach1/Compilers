// program1.cpp
// Colton Roach
// COSC 4785 Fall 2022
// Program 1
// September 5, 2022

#include<FlexLexer.h>
#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>

using namespace std;

int type;

int main()
{
    yyFlexLexer myScanner;
    int rtn;

    // Init Code here
    cout << left << setw(8) << "Line" << setw(8) << "Column" << setw(8) 
         << "Type" << setw(8) << "Length" << setw(8) << "Value" << endl;
    
    string value;

    int column = 1;
    while((rtn=myScanner.yylex()) != 0) {
        // Loop code here

    //normal case
    if(rtn==1)
    {
        cout << left << setw(8) << myScanner.lineno() << setw(8) << column 
             << setw(8) << type << setw(8) << strlen(myScanner.YYText()) 
             << setw(8) << myScanner.YYText() << endl;
        column += strlen(myScanner.YYText());
    }
    //encounter space
        else if(rtn == 2)
    {
        column +=1;
    }
    //encounter tab
    else if(rtn == 3)
    {
        //get position of last character
        column += strlen(myScanner.YYText()) - 1;
        //go to next 8+1 spot (9, 17, 25 etc)
        column = column + 8 - (column % 8) + 1;
    }
    //encounter newline
    else if(rtn == 4)
    {   
        cout << left << setw(8) << myScanner.lineno()-1 << setw(8) << column 
             << setw(8) << type << setw(8) << strlen(myScanner.YYText())
             << endl;
        column = 1;
    }
    }
    
    // More Code
    
    return 0;
}

