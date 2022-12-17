# Makefile
# Colton Roach
# COSC 4785
# December 12, 2022
# Program 6
CXX=g++
CXXFLAGS=-ggdb -Wall -Wno-sign-compare
YACC=bison
YFLAGS=--report=state -W -d
LEX=flex
LEX=flex++
LFLAGS=--warn
SRC=program6.cpp program6.tab.cpp program6_lex.cpp nodes.cpp symbols.cpp
HDRS=program6.tab.hpp nodes.hpp symbols.hpp
 
.PHONY: clean tarball

program6: $(SRC) $(HDRS)
	$(CXX) $(CXXFLAGS) $(SRC) -o program6

program6.tab.cpp: program6.ypp nodes.hpp symbols.hpp
	$(YACC) $(YFLAGS) program6.ypp

program6_lex.cpp: program6.lpp nodes.hpp symbols.hpp
	$(LEX) $(LFLAGS) program6.lpp

tidy: 
	/bin/rm -f a.out core.* program6.tab.* program6.output \
	  program6_lex.cpp

clean: tidy
	/bin/rm -f program6
