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

#ifndef YY_JSONRIDEFILE_JSONRIDEFILE_TAB_H_INCLUDED
# define YY_JSONRIDEFILE_JSONRIDEFILE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int JsonRideFiledebug;
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
    JS_STRING = 258,               /* JS_STRING  */
    JS_INTEGER = 259,              /* JS_INTEGER  */
    JS_FLOAT = 260,                /* JS_FLOAT  */
    RIDE = 261,                    /* RIDE  */
    STARTTIME = 262,               /* STARTTIME  */
    RECINTSECS = 263,              /* RECINTSECS  */
    DEVICETYPE = 264,              /* DEVICETYPE  */
    IDENTIFIER = 265,              /* IDENTIFIER  */
    OVERRIDES = 266,               /* OVERRIDES  */
    TAGS = 267,                    /* TAGS  */
    INTERVALS = 268,               /* INTERVALS  */
    NAME = 269,                    /* NAME  */
    START = 270,                   /* START  */
    STOP = 271,                    /* STOP  */
    COLOR = 272,                   /* COLOR  */
    TEST = 273,                    /* TEST  */
    CALIBRATIONS = 274,            /* CALIBRATIONS  */
    VALUE = 275,                   /* VALUE  */
    VALUES = 276,                  /* VALUES  */
    UNIT = 277,                    /* UNIT  */
    UNITS = 278,                   /* UNITS  */
    REFERENCES = 279,              /* REFERENCES  */
    XDATA = 280,                   /* XDATA  */
    SAMPLES = 281,                 /* SAMPLES  */
    SECS = 282,                    /* SECS  */
    KM = 283,                      /* KM  */
    WATTS = 284,                   /* WATTS  */
    NM = 285,                      /* NM  */
    CAD = 286,                     /* CAD  */
    KPH = 287,                     /* KPH  */
    HR = 288,                      /* HR  */
    ALTITUDE = 289,                /* ALTITUDE  */
    LAT = 290,                     /* LAT  */
    LON = 291,                     /* LON  */
    HEADWIND = 292,                /* HEADWIND  */
    SLOPE = 293,                   /* SLOPE  */
    TEMP = 294,                    /* TEMP  */
    LRBALANCE = 295,               /* LRBALANCE  */
    LTE = 296,                     /* LTE  */
    RTE = 297,                     /* RTE  */
    LPS = 298,                     /* LPS  */
    RPS = 299,                     /* RPS  */
    THB = 300,                     /* THB  */
    SMO2 = 301,                    /* SMO2  */
    RVERT = 302,                   /* RVERT  */
    RCAD = 303,                    /* RCAD  */
    RCON = 304,                    /* RCON  */
    LPCO = 305,                    /* LPCO  */
    RPCO = 306,                    /* RPCO  */
    LPPB = 307,                    /* LPPB  */
    RPPB = 308,                    /* RPPB  */
    LPPE = 309,                    /* LPPE  */
    RPPE = 310,                    /* RPPE  */
    LPPPB = 311,                   /* LPPPB  */
    RPPPB = 312,                   /* RPPPB  */
    LPPPE = 313,                   /* LPPPE  */
    RPPPE = 314                    /* RPPPE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define JS_STRING 258
#define JS_INTEGER 259
#define JS_FLOAT 260
#define RIDE 261
#define STARTTIME 262
#define RECINTSECS 263
#define DEVICETYPE 264
#define IDENTIFIER 265
#define OVERRIDES 266
#define TAGS 267
#define INTERVALS 268
#define NAME 269
#define START 270
#define STOP 271
#define COLOR 272
#define TEST 273
#define CALIBRATIONS 274
#define VALUE 275
#define VALUES 276
#define UNIT 277
#define UNITS 278
#define REFERENCES 279
#define XDATA 280
#define SAMPLES 281
#define SECS 282
#define KM 283
#define WATTS 284
#define NM 285
#define CAD 286
#define KPH 287
#define HR 288
#define ALTITUDE 289
#define LAT 290
#define LON 291
#define HEADWIND 292
#define SLOPE 293
#define TEMP 294
#define LRBALANCE 295
#define LTE 296
#define RTE 297
#define LPS 298
#define RPS 299
#define THB 300
#define SMO2 301
#define RVERT 302
#define RCAD 303
#define RCON 304
#define LPCO 305
#define RPCO 306
#define LPPB 307
#define RPPB 308
#define LPPE 309
#define RPPE 310
#define LPPPB 311
#define RPPPB 312
#define LPPPE 313
#define RPPPE 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int JsonRideFileparse (struct JsonContext *jc);


#endif /* !YY_JSONRIDEFILE_JSONRIDEFILE_TAB_H_INCLUDED  */
