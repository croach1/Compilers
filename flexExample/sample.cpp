/*************************************
 * sample.cpp
 * COSC4785/5785
 * $Author: kbuckner $
 * $Date: 2020-08-25 13:03:41-06 $
 *
 * "Driver" program for an example. This does not really do a lot, just
 * formats and outputs the information from flex.
 *
 * $Log: sample.cpp,v $
 * Revision 1.1  2020-08-25 13:03:41-06  kbuckner
 * Initial revision
 *
 *
 * You do NOT have to declare the scanner variable to be a pointer. As you can
 * below, I have included code that declares it statically. And that works fine.
 * It may not always and I have simply gotten in the habit of using the pointer
 * version. 
 * **********************************/

#include<iostream>
#include<iomanip>
#include<string>
#include<FlexLexer.h>


using std::cin;
using std::cout;
using std::string;
using std::endl;

string value; // this is going to be used by the scanner. 

int main()
{

  int rtn;
  FlexLexer *scanner = new yyFlexLexer;
  //yyFlexLexer scanner;
  cout << "Processing the input\n" << endl;
  while((rtn=scanner->yylex()) != 0 )
  {
    cout << scanner->lineno() << "  " << std::setw(3) << value ;
    cout << scanner->YYText() << endl;
  }
  /*
  while((rtn=scanner.yylex()) != 0 )
  {
    cout << scanner.lineno() << "  " << std::setw(3) << value ;
    cout << scanner.YYText() << endl;
  }
  */

  cout << "\nSample program done" << endl;

  return 0;
}
