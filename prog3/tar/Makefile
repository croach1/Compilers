# Makefile
# Colton Roach
# COSC 4785
# October 19, 2022
#
CXX=g++
CXXFLAGS=-ggdb -Wall -Wno-sign-compare
YACC=bison
YFLAGS=--report=state -W -d
LEX=flex
LEX=flex++
LFLAGS=--warn
SRC=program3.cpp program3.tab.cpp program3_lex.cpp nodes.cpp
HDRS=program3.tab.hpp nodes.hpp
 
.PHONY: clean tarball

program3: $(SRC) $(HDRS)
	$(CXX) $(CXXFLAGS) $(SRC) -o program3

program3.tab.cpp: program3.ypp nodes.hpp
	$(YACC) $(YFLAGS) program3.ypp

program3_lex.cpp: program3.lpp nodes.hpp
	$(LEX) $(LFLAGS) program3.lpp

tidy: 
	/bin/rm -f a.out core.* program3.tab.* program3.output \
	  program3_lex.cpp

clean: tidy
	/bin/rm -f program3
