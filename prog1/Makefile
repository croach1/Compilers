# Makefile
# Colton Roach
# COSC 4785
# September 5, 2022
#
CXX=g++
CXXFLAGS=-ggdb -Wall -Wno-sign-compare

LEX=flex++
LEXFLAGS=--warn


program1: program1.cpp program1_lex.cpp
	$(CXX) $(CXXfLAGS) program1.cpp program1_lex.cpp -o program1

program1_lex.cpp: program1.lpp
	$(LEX) $(LEXFLAGS) program1.lpp

clean:
	/bin/rm -f program1 program1_lex.cpp
