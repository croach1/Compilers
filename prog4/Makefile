# Makefile
# Colton Roach
# COSC 4785
# November 3, 2022
# Program 4
CXX=g++
CXXFLAGS=-ggdb -Wall -Wno-sign-compare
YACC=bison
YFLAGS=--report=state -W -d
LEX=flex
LEX=flex++
LFLAGS=--warn
SRC=program4.cpp program4.tab.cpp program4_lex.cpp nodes.cpp
HDRS=program4.tab.hpp nodes.hpp
 
.PHONY: clean tarball

program4: $(SRC) $(HDRS)
	$(CXX) $(CXXFLAGS) $(SRC) -o program4

program4.tab.cpp: program4.ypp nodes.hpp
	$(YACC) $(YFLAGS) program4.ypp

program4_lex.cpp: program4.lpp nodes.hpp
	$(LEX) $(LFLAGS) program4.lpp

tidy: 
	/bin/rm -f a.out core.* program4.tab.* program4.output \
	  program4_lex.cpp

clean: tidy
	/bin/rm -f program4
