# Makefile
# Colton Roach
# COSC 4785
# December 2, 2022
# Program 5
CXX=g++
CXXFLAGS=-ggdb -Wall -Wno-sign-compare
YACC=bison
YFLAGS=--report=state -W -d -v
LEX=flex
LEX=flex++
LFLAGS=--warn
SRC=program5.cpp program5.tab.cpp program5_lex.cpp nodes.cpp symbols.cpp
HDRS=program5.tab.hpp nodes.hpp symbols.hpp
 
.PHONY: clean tarball

program5: $(SRC) $(HDRS)
	$(CXX) $(CXXFLAGS) $(SRC) -o program5

program5.tab.cpp: program5.ypp nodes.hpp symbols.hpp
	$(YACC) $(YFLAGS) program5.ypp

program5_lex.cpp: program5.lpp nodes.hpp symbols.hpp
	$(LEX) $(LFLAGS) program5.lpp

tidy: 
	/bin/rm -f a.out core.* program5.tab.* program5.output \
	  program5_lex.cpp

clean: tidy
	/bin/rm -f program5
