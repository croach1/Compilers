/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PROGRAM5_TAB_HPP_INCLUDED
# define YY_YY_PROGRAM5_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    ID = 259,
    NUMBER = 260,
    READ = 261,
    LPAREN = 262,
    RPAREN = 263,
    ASSIGN = 264,
    NEW = 265,
    THIS = 266,
    NULLT = 267,
    SEMI = 268,
    LBRACE = 269,
    RBRACE = 270,
    DOT = 271,
    COMMA = 272,
    IF = 273,
    WHILE = 274,
    VOID = 275,
    CLASS = 276,
    PRINT = 277,
    RETURN = 278,
    THEN = 279,
    ELSE = 280,
    LBRACK = 281,
    RBRACK = 282,
    EQ = 283,
    NE = 284,
    GE = 285,
    LE = 286,
    GT = 287,
    LT = 288,
    TIMES = 289,
    DIV = 290,
    MOD = 291,
    AND = 292,
    OR = 293,
    PLUS = 294,
    MINUS = 295,
    NOT = 296
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 45 "program5.ypp" /* yacc.c:1909  */

    Node *ttype;

#line 100 "program5.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROGRAM5_TAB_HPP_INCLUDED  */
