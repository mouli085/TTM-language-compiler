
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     IDENTIFIER = 259,
     STRING = 260,
     LIBNAME = 261,
     INT = 262,
     BREAK = 263,
     CONTINUE = 264,
     DEFINE = 265,
     DOUBLE = 266,
     FLOAT = 267,
     SHORT = 268,
     AUTO = 269,
     ELSE = 270,
     ELIF = 271,
     IF = 272,
     THEN = 273,
     WHILE = 274,
     GOTO = 275,
     RETURN = 276,
     FOR = 277,
     INCLUDE = 278,
     OR = 279,
     SWITCH = 280,
     CASE = 281,
     PRINT = 282,
     PLUS = 283,
     MINUS = 284,
     MULT = 285,
     MOD = 286,
     EQUAL = 287,
     GREATERTHAN = 288,
     LESSTHAN = 289,
     ASSIGN = 290,
     NOTGREATERTHAN = 291,
     NOTLESSTHAN = 292,
     NOTEQUALEQUAL = 293,
     IN = 294,
     OUT = 295,
     COMMENT = 296,
     GREATERTHANEQUAL = 297,
     LESSTHANEQUAL = 298,
     AND = 299,
     VOID = 300,
     CHAR = 301,
     DIV = 302,
     TOPEN = 303,
     TCLOSE = 304,
     FOPEN = 305,
     FCLOSE = 306,
     SOPEN = 307,
     SCLOSE = 308,
     COMMA = 309,
     COLON = 310,
     SEMI = 311,
     HASH = 312,
     BROPEN = 313,
     BRCLOSE = 314,
     INCR = 315,
     DECR = 316,
     DEFAULT = 317,
     POW = 318,
     FACT = 319,
     SINE = 320,
     COS = 321,
     TAN = 322,
     LN = 323,
     IFX = 324
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 16 "new.y"

  double DOB;  
  char *str;



/* Line 1676 of yacc.c  */
#line 128 "new.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


