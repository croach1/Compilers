// program1.cpp
// Colton Roach
// COSC 4785 Fall 2022
// Program 2
// September 25, 2022

#include<FlexLexer.h>
#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>

using namespace std;

int type;
string token;

int main()
{
    yyFlexLexer myScanner;
    int rtn;

    // Init Code here
    cout << left << setw(8) << "Line" << setw(8) << "Column" << setw(8) 
         << "Token" << setw(8) << "Value" << endl;
    
    string value;
    int errorCount = 0;
    int column = 1;

    bool error=false;
    string errorString="";
    while((rtn=myScanner.yylex()) != 0) {

        //Error Cases
        if(rtn==-9999)
        {
            if(errorCount == 21)
            {
                cout << left << setw(8) << myScanner.lineno() << setw(8) << column
                     << setw(8) << "ERRORS" << setw(8) <<myScanner.YYText() << endl;
                cerr << "Encountered over 20 errors, exiting." << endl;
                return 0;
            }

            if(!error)
            {
                error = true;
                errorString.append(myScanner.YYText());
                errorCount++;
                continue;
            }
            else
            {
                errorString.append(myScanner.YYText());
                continue;
            }

        }

        if(rtn==1)
        {
            if(error)
            {
                errorString += myScanner.YYText();
                continue;
            }

            cout << left << setw(8) << myScanner.lineno() << setw(8) << column 
                 << setw(8) << token << setw(8) << myScanner.YYText() << endl;
            column += strlen(myScanner.YYText());
        }

        //No "Value" Cases (keywords, operators, etc)
        else if(rtn==2)
        {
            if(error)
            {
                if(errorString.length() > 1)
                {
                    cout << left << setw(8) << myScanner.lineno() << setw(8) << column
                         << setw(8) << "ER_WD" << setw(8) << errorString << endl;
                }
                else
                { 
                    cout << left << setw(8) << myScanner.lineno() << setw(8) << column
                         << setw(8) << "ER_CH" << setw(8) << errorString << endl;
                }
                error = false;
                column+=errorString.length();
                errorString = "";
            }
            cout << left <<setw(8) << myScanner.lineno() << setw(8) << column
                 << setw(8) << token << endl;
            column += strlen(myScanner.YYText());
        }

        //encounter space
        else if(rtn == 3)
        {
            if(error)
            {
                if(errorString.length() > 1)
                {
                    cout << left << setw(8) << myScanner.lineno() << setw(8) << column
                         << setw(8) << "ER_WD" << setw(8) << errorString << endl;
                }
                else
                { 
                    cout << left << setw(8) << myScanner.lineno() << setw(8) << column
                         << setw(8) << "ER_CH" << setw(8) << errorString << endl;
                }
                error = false;
                column+=errorString.length();
                errorString = "";
            }
            column +=1;
        }

        //encounter tab
        else if(rtn == 4)
        {
            if(error)
            {
                if(errorString.length() > 1)
                {
                    cout << left << setw(8) << myScanner.lineno() << setw(8) << column
                         << setw(8) << "ER_WD" << setw(8) << errorString << endl;
                }
                else
                { 
                    cout << left << setw(8) << myScanner.lineno() << setw(8) << column
                         << setw(8) << "ER_CH" << setw(8) << errorString << endl;
                }
                error = false;
                column+=errorString.length();
                errorString = "";
            }
            //get position of last character
            column += strlen(myScanner.YYText()) - 1;
            //go to next 8+1 spot (9, 17, 25 etc)
            column = column + 8 - (column % 8) + 1;
        }

        //encounter newline
        else if(rtn == 5)
        {         
            
            if(error)
            {
                if(errorString.length() > 1)
                {
                    cout << left << setw(8) << myScanner.lineno() << setw(8) << column
                         << setw(8) << "ER_WD" << setw(8) << errorString << endl;
                }
                else
                { 
                    cout << left << setw(8) << myScanner.lineno() << setw(8) << column
                         << setw(8) << "ER_CH" << setw(8) << errorString << endl;
                }
                error = false;
                column+=errorString.length();
                errorString = "";
            }
            column = 1;
        }

        //encounter line comment
        else if(rtn == 6)
        {
            if(error)
            {
                if(errorString.length() > 1)
                {
                    cout << left << setw(8) << myScanner.lineno() << setw(8) << column
                         << setw(8) << "ER_WD" << setw(8) << errorString << endl;
                }
                else
                { 
                    cout << left << setw(8) << myScanner.lineno() << setw(8) << column
                         << setw(8) << "ER_CH" << setw(8) << errorString << endl;
                }
                error = false;
                column+=errorString.length();
                errorString = "";
            }

            column = 1;
        }

        //encounter block comment
        else if (rtn == 7)
        {
            if(error)
            {
                if(errorString.length() > 1)
                {
                    cout << left << setw(8) << myScanner.lineno() << setw(8) << column
                         << setw(8) << "ER_WD" << setw(8) << errorString << endl;
                }
                else
                { 
                    cout << left << setw(8) << myScanner.lineno() << setw(8) << column
                         << setw(8) << "ER_CH" << setw(8) << errorString << endl;
                }
                error = false;
                column+=errorString.length();
                errorString = "";
            }

            string temp = myScanner.YYText();
            int count = 1;
            for(int i = strlen(myScanner.YYText()) - 1; i>=0; i--)
            {
                if(temp.at(i) != '\n')
                {
                    count++;
                }
                else
                {
                    column = count;
                    break;
                }
            }
            column+=strlen(myScanner.YYText());
        }
    } 
    return 0;
}

