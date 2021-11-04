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
     SEMI = 270,
     COMMA = 271,
     PLUS = 272,
     MINUS = 273,
     STAR = 274,
     DIV = 275,
     ASSIGNOP = 276,
     AND = 277,
     OR = 278,
     NOT = 279,
     IF = 280,
     ELSE = 281,
     WHILE = 282,
     RETURN = 283,
     FOR = 284,
     BREAK = 285,
     CONTINUE = 286,
     SWITCH = 287,
     CASE = 288,
     COLON = 289,
     DEFAULT = 290,
     EXT_DEF_LIST = 291,
     EXT_VAR_DEF = 292,
     FUNC_DEF = 293,
     FUNC_DEC = 294,
     EXT_DEC_LIST = 295,
     PARAM_LIST = 296,
     PARAM_DEC = 297,
     VAR_DEF = 298,
     DEC_LIST = 299,
     DEF_LIST = 300,
     COMP_STM = 301,
     STM_LIST = 302,
     EXP_STMT = 303,
     IF_THEN = 304,
     IF_THEN_ELSE = 305,
     DPLUS_BEFORE = 306,
     DPLUS_AFTER = 307,
     DMINUS_BEFORE = 308,
     DMINUS_AFTER = 309,
     FUNC_CALL = 310,
     ARGS = 311,
     FUNCTION = 312,
     PARAM = 313,
     ARG = 314,
     CALL = 315,
     LABEL = 316,
     GOTO = 317,
     JLT = 318,
     JLE = 319,
     JGT = 320,
     JGE = 321,
     EQ = 322,
     NEQ = 323,
     UMINUS = 324,
     LOWER_THEN_ELSE = 325
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
#define SEMI 270
#define COMMA 271
#define PLUS 272
#define MINUS 273
#define STAR 274
#define DIV 275
#define ASSIGNOP 276
#define AND 277
#define OR 278
#define NOT 279
#define IF 280
#define ELSE 281
#define WHILE 282
#define RETURN 283
#define FOR 284
#define BREAK 285
#define CONTINUE 286
#define SWITCH 287
#define CASE 288
#define COLON 289
#define DEFAULT 290
#define EXT_DEF_LIST 291
#define EXT_VAR_DEF 292
#define FUNC_DEF 293
#define FUNC_DEC 294
#define EXT_DEC_LIST 295
#define PARAM_LIST 296
#define PARAM_DEC 297
#define VAR_DEF 298
#define DEC_LIST 299
#define DEF_LIST 300
#define COMP_STM 301
#define STM_LIST 302
#define EXP_STMT 303
#define IF_THEN 304
#define IF_THEN_ELSE 305
#define DPLUS_BEFORE 306
#define DPLUS_AFTER 307
#define DMINUS_BEFORE 308
#define DMINUS_AFTER 309
#define FUNC_CALL 310
#define ARGS 311
#define FUNCTION 312
#define PARAM 313
#define ARG 314
#define CALL 315
#define LABEL 316
#define GOTO 317
#define JLT 318
#define JLE 319
#define JGT 320
#define JGE 321
#define EQ 322
#define NEQ 323
#define UMINUS 324
#define LOWER_THEN_ELSE 325




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
#line 197 "parser.tab.h"
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
