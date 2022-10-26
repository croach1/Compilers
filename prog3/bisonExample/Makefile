#
# $Author: kbuckner $
# $ID$
#
# $Log: Makefile,v $
# Revision 1.4  2021-09-27 11:38:16-06  kbuckner
# *** empty log message ***
#
# Revision 1.3  2020-09-28 14:10:51-06  kbuckner
# Removed the std= and added no-sign flags from g++ flags.
#
# Revision 1.2  2019-10-07 14:41:40-06  kbuckner
# Added tarball target
#
# Revision 1.1  2017-10-04 13:20:53-06  kbuckner
# Finally working version
#
#
###############################################################

CXX=g++
CXXFLAGS=-ggdb -Wall -Wno-sign-compare
YACC=bison
YFLAGS=--report=state -W -d
LEX=flex
LEX=flex++
LFLAGS=--warn
SRC=bison_test.cpp simple.tab.cpp simple_lex.cpp nodes.cpp
HDRS=simple.tab.hpp nodes.hpp

.PHONY: clean tarball

bison_test: $(SRC) $(HDRS)
	$(CXX) $(CXXFLAGS) $(SRC) -o bison_test

simple.tab.cpp : simple.ypp nodes.hpp
	$(YACC) $(YFLAGS) simple.ypp

simple_lex.cpp: simple.lpp nodes.hpp
	$(LEX) $(LFLAGS) simple.lpp

tidy:
	/bin/rm -f a.out core.* simple.tab.* simple.output \
	  simple_lex.cpp

# the tidy rule cleans up but leaves the executable. The clean, uses tidy
# then it removes the executable. 
clean: tidy
	/bin/rm -f bison_test 

tarball:
	tar cf basic_bison.tar Makefile nodes.hpp nodes.cpp simple.lpp simple.ypp\
	  bison_test.cpp input

