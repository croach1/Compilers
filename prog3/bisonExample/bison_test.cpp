/*
 * $Author: kbuckner $
 * $Date: 2021-09-27 11:38:16-06 $
 * $Id: bison_test.cpp,v 1.1 2021-09-27 11:38:16-06 kbuckner Exp kbuckner $
 *
 * A simple expression evaluator based on the examples from the 
 * bison documentation. This works with the C++ flex scanner but
 * NOT the C++ parser. However, the parser code is all C++. Concerned
 * about the union that bison uses but so far it seems to work fine. 
 *
 * $Log: bison_test.cpp,v $
 * Revision 1.1  2021-09-27 11:38:16-06  kbuckner
 * *** empty log message ***
 *
 *
 *
 */
#include<iostream>
#include<fstream>
#include<string>
#include"nodes.hpp"
#include"simple.tab.hpp"
#include<FlexLexer.h>

using std::ifstream;
using std::ofstream;
using std::string;
using std::cout;
using std::cerr;
using std::endl;


/*
 * These will be made available to the parser via externs
 * Need the scanner here in main so that I can change the input
 * file stream if needed.
 *
 * I am NOT going to require you to use files for input/ouput so
 * am commenting all that out. Leaving it here for reference. 
 *
 * The "tree" so that I can print it.
 */

yyFlexLexer scanner;
Node *tree;

int main(int argc, char **argv)
{

  tree=0;

  yyparse();
  // HEY! DO NOT PRINT THIS NEXT LINE IN YOUR PROGRAM 3/4/5/6
  cout << "PRINTING TREE\n" << endl;
  tree->print(&cout);
  cout << endl;

  return 0;
}
