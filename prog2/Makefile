# Makefile
# Colton Roach
# COSC 4785
# September 25, 2022
#
CXX=g++
CXXFLAGS=-ggdb -Wall -Wno-sign-compare

LEX=flex++
LEXFLAGS=--warn


program2: program2.cpp program2_lex.cpp
	$(CXX) $(CXXfLAGS) program2.cpp program2_lex.cpp -o program2

program2_lex.cpp: program2.lpp
	$(LEX) $(LEXFLAGS) program2.lpp

clean:
	/bin/rm -f program2 program2_lex.cpp
