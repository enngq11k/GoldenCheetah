/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_DATAFILTER_DATAFILTER_TAB_H_INCLUDED
# define YY_DATAFILTER_DATAFILTER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int DataFilterdebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    SYMBOL = 258,                  /* SYMBOL  */
    PYTHON = 259,                  /* PYTHON  */
    DF_STRING = 260,               /* DF_STRING  */
    DF_INTEGER = 261,              /* DF_INTEGER  */
    DF_FLOAT = 262,                /* DF_FLOAT  */
    BEST = 263,                    /* BEST  */
    TIZ = 264,                     /* TIZ  */
    CONFIG = 265,                  /* CONFIG  */
    CONST_ = 266,                  /* CONST_  */
    IF_ = 267,                     /* IF_  */
    ELSE_ = 268,                   /* ELSE_  */
    WHILE = 269,                   /* WHILE  */
    EQ = 270,                      /* EQ  */
    NEQ = 271,                     /* NEQ  */
    LT = 272,                      /* LT  */
    LTE = 273,                     /* LTE  */
    GT = 274,                      /* GT  */
    GTE = 275,                     /* GTE  */
    ELVIS = 276,                   /* ELVIS  */
    ASSIGN = 277,                  /* ASSIGN  */
    ADD = 278,                     /* ADD  */
    SUBTRACT = 279,                /* SUBTRACT  */
    DIVIDE = 280,                  /* DIVIDE  */
    MULTIPLY = 281,                /* MULTIPLY  */
    POW = 282,                     /* POW  */
    MATCHES = 283,                 /* MATCHES  */
    ENDSWITH = 284,                /* ENDSWITH  */
    BEGINSWITH = 285,              /* BEGINSWITH  */
    CONTAINS = 286,                /* CONTAINS  */
    AND = 287,                     /* AND  */
    OR = 288                       /* OR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define SYMBOL 258
#define PYTHON 259
#define DF_STRING 260
#define DF_INTEGER 261
#define DF_FLOAT 262
#define BEST 263
#define TIZ 264
#define CONFIG 265
#define CONST_ 266
#define IF_ 267
#define ELSE_ 268
#define WHILE 269
#define EQ 270
#define NEQ 271
#define LT 272
#define LTE 273
#define GT 274
#define GTE 275
#define ELVIS 276
#define ASSIGN 277
#define ADD 278
#define SUBTRACT 279
#define DIVIDE 280
#define MULTIPLY 281
#define POW 282
#define MATCHES 283
#define ENDSWITH 284
#define BEGINSWITH 285
#define CONTAINS 286
#define AND 287
#define OR 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 66 "Core/DataFilter.y"

   Leaf *leaf;
   QList<Leaf*> *comp;
   int op;
   char function[32];
   char* string;

#line 141 "DataFilter.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE DataFilterlval;
extern YYLTYPE DataFilterlloc;

int DataFilterparse (void);


#endif /* !YY_DATAFILTER_DATAFILTER_TAB_H_INCLUDED  */
