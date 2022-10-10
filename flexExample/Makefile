# Makefile
# COSC 4785/5785
# $Author: kbuckner $
# $Date: 2020-08-25 13:07:58-06 $
# $Id: Makefile,v 1.1 2020-08-25 13:07:58-06 kbuckner Exp kbuckner $
#
# $Log: Makefile,v $
# Revision 1.1  2020-08-25 13:07:58-06  kbuckner
# Initial revision
#
#
# Might need the c++11 standard with older compilers but not in our department.
# The -Wno-sign-compare stops a warning that is in the generated functions and
# you cannot change. Also it will NOT cause a problem. This is not uncommon in
# inherited code.  But you really HAVE to investigate before suppressing it. 
# Must use "flex++" instead of "flex" in order to create the C++ version of the
# scanner. 
#

CXX=g++ 
CXXFLAGS=-ggdb -Wall -Wno-sign-compare

LEX=flex++
LEXFLAGS=--warn


sample: sample.cpp sample_lex.cpp
	$(CXX) $(CXXFLAGS) sample.cpp sample_lex.cpp -o sample

sample_lex.cpp: sample.lpp
	$(LEX) $(LEXFLAGS) sample.lpp

# 
# Probably do not need the core.* for students.
# This removes all the 'generated' files. You can always generate them again.
# Do need the -f for the remove command so that all files get deleted even if 
# some are missing.
#
clean: 
	/bin/rm -f sample sample_lex.cpp core.* 
