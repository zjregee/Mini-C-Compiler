/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
     INT = 258,
     ID = 259,
     RELOP = 260,
     TYPE = 261,
     FLOAT = 262,
     CHAR = 263,
     DPLUS = 264,
     DMINUS = 265,
     LP = 266,
     RP = 267,
     LC = 268,
     RC = 269,
     LB = 270,
     RB = 271,
     SEMI = 272,
     COMMA = 273,
     PLUS = 274,
     MINUS = 275,
     STAR = 276,
     DIV = 277,
     ASSIGNOP = 278,
     AND = 279,
     OR = 280,
     NOT = 281,
     IF = 282,
     ELSE = 283,
     WHILE = 284,
     RETURN = 285,
     FOR = 286,
     BREAK = 287,
     CONTINUE = 288,
     SWITCH = 289,
     CASE = 290,
     COLON = 291,
     DEFAULT = 292,
     EXT_DEF_LIST = 293,
     EXT_VAR_DEF = 294,
     FUNC_DEF = 295,
     FUNC_DEC = 296,
     EXT_DEC_LIST = 297,
     PARAM_LIST = 298,
     PARAM_DEC = 299,
     VAR_DEF = 300,
     DEC_LIST = 301,
     DEF_LIST = 302,
     COMP_STM = 303,
     STM_LIST = 304,
     EXP_STMT = 305,
     IF_THEN = 306,
     IF_THEN_ELSE = 307,
     DPLUS_BEFORE = 308,
     DPLUS_AFTER = 309,
     DMINUS_BEFORE = 310,
     DMINUS_AFTER = 311,
     DIMENSION = 312,
     DIMENSION_LIST = 313,
     ARRAY = 314,
     ARRAY_LIST = 315,
     FUNC_CALL = 316,
     ARGS = 317,
     FUNCTION = 318,
     PARAM = 319,
     ARG = 320,
     CALL = 321,
     LABEL = 322,
     GOTO = 323,
     JLT = 324,
     JLE = 325,
     JGT = 326,
     JGE = 327,
     EQ = 328,
     NEQ = 329,
     RM = 330,
     LM = 331,
     UMINUS = 332,
     LOWER_THEN_ELSE = 333
   };
#endif
/* Tokens.  */
#define INT 258
#define ID 259
#define RELOP 260
#define TYPE 261
#define FLOAT 262
#define CHAR 263
#define DPLUS 264
#define DMINUS 265
#define LP 266
#define RP 267
#define LC 268
#define RC 269
#define LB 270
#define RB 271
#define SEMI 272
#define COMMA 273
#define PLUS 274
#define MINUS 275
#define STAR 276
#define DIV 277
#define ASSIGNOP 278
#define AND 279
#define OR 280
#define NOT 281
#define IF 282
#define ELSE 283
#define WHILE 284
#define RETURN 285
#define FOR 286
#define BREAK 287
#define CONTINUE 288
#define SWITCH 289
#define CASE 290
#define COLON 291
#define DEFAULT 292
#define EXT_DEF_LIST 293
#define EXT_VAR_DEF 294
#define FUNC_DEF 295
#define FUNC_DEC 296
#define EXT_DEC_LIST 297
#define PARAM_LIST 298
#define PARAM_DEC 299
#define VAR_DEF 300
#define DEC_LIST 301
#define DEF_LIST 302
#define COMP_STM 303
#define STM_LIST 304
#define EXP_STMT 305
#define IF_THEN 306
#define IF_THEN_ELSE 307
#define DPLUS_BEFORE 308
#define DPLUS_AFTER 309
#define DMINUS_BEFORE 310
#define DMINUS_AFTER 311
#define DIMENSION 312
#define DIMENSION_LIST 313
#define ARRAY 314
#define ARRAY_LIST 315
#define FUNC_CALL 316
#define ARGS 317
#define FUNCTION 318
#define PARAM 319
#define ARG 320
#define CALL 321
#define LABEL 322
#define GOTO 323
#define JLT 324
#define JLE 325
#define JGT 326
#define JGE 327
#define EQ 328
#define NEQ 329
#define RM 330
#define LM 331
#define UMINUS 332
#define LOWER_THEN_ELSE 333




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "parser.y"
{
	int    type_int;
	float  type_float;
        char   type_char;
	char   type_id[32];
	struct ASTNode *ptr;
}
/* Line 1529 of yacc.c.  */
#line 213 "parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYLTYPE yylloc;
