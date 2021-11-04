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
     LP = 265,
     RP = 266,
     LC = 267,
     RC = 268,
     SEMI = 269,
     COMMA = 270,
     PLUS = 271,
     MINUS = 272,
     STAR = 273,
     DIV = 274,
     ASSIGNOP = 275,
     AND = 276,
     OR = 277,
     NOT = 278,
     IF = 279,
     ELSE = 280,
     WHILE = 281,
     RETURN = 282,
     FOR = 283,
     BREAK = 284,
     CONTINUE = 285,
     SWITCH = 286,
     CASE = 287,
     COLON = 288,
     DEFAULT = 289,
     EXT_DEF_LIST = 290,
     EXT_VAR_DEF = 291,
     FUNC_DEF = 292,
     FUNC_DEC = 293,
     EXT_DEC_LIST = 294,
     PARAM_LIST = 295,
     PARAM_DEC = 296,
     VAR_DEF = 297,
     DEC_LIST = 298,
     DEF_LIST = 299,
     COMP_STM = 300,
     STM_LIST = 301,
     EXP_STMT = 302,
     IF_THEN = 303,
     IF_THEN_ELSE = 304,
     FUNC_CALL = 305,
     ARGS = 306,
     FUNCTION = 307,
     PARAM = 308,
     ARG = 309,
     CALL = 310,
     LABEL = 311,
     GOTO = 312,
     JLT = 313,
     JLE = 314,
     JGT = 315,
     JGE = 316,
     EQ = 317,
     NEQ = 318,
     UMINUS = 319,
     LOWER_THEN_ELSE = 320
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
#define LP 265
#define RP 266
#define LC 267
#define RC 268
#define SEMI 269
#define COMMA 270
#define PLUS 271
#define MINUS 272
#define STAR 273
#define DIV 274
#define ASSIGNOP 275
#define AND 276
#define OR 277
#define NOT 278
#define IF 279
#define ELSE 280
#define WHILE 281
#define RETURN 282
#define FOR 283
#define BREAK 284
#define CONTINUE 285
#define SWITCH 286
#define CASE 287
#define COLON 288
#define DEFAULT 289
#define EXT_DEF_LIST 290
#define EXT_VAR_DEF 291
#define FUNC_DEF 292
#define FUNC_DEC 293
#define EXT_DEC_LIST 294
#define PARAM_LIST 295
#define PARAM_DEC 296
#define VAR_DEF 297
#define DEC_LIST 298
#define DEF_LIST 299
#define COMP_STM 300
#define STM_LIST 301
#define EXP_STMT 302
#define IF_THEN 303
#define IF_THEN_ELSE 304
#define FUNC_CALL 305
#define ARGS 306
#define FUNCTION 307
#define PARAM 308
#define ARG 309
#define CALL 310
#define LABEL 311
#define GOTO 312
#define JLT 313
#define JLE 314
#define JGT 315
#define JGE 316
#define EQ 317
#define NEQ 318
#define UMINUS 319
#define LOWER_THEN_ELSE 320




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
#line 187 "parser.tab.h"
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
