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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
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
    INT = 258,                     /* INT  */
    NAME = 259,                    /* NAME  */
    LNAME = 260,                   /* LNAME  */
    PLUSEQ = 261,                  /* PLUSEQ  */
    MINUSEQ = 262,                 /* MINUSEQ  */
    MULTEQ = 263,                  /* MULTEQ  */
    DIVEQ = 264,                   /* DIVEQ  */
    LSHIFTEQ = 265,                /* LSHIFTEQ  */
    RSHIFTEQ = 266,                /* RSHIFTEQ  */
    ANDEQ = 267,                   /* ANDEQ  */
    OREQ = 268,                    /* OREQ  */
    OROR = 269,                    /* OROR  */
    ANDAND = 270,                  /* ANDAND  */
    EQ = 271,                      /* EQ  */
    NE = 272,                      /* NE  */
    LE = 273,                      /* LE  */
    GE = 274,                      /* GE  */
    LSHIFT = 275,                  /* LSHIFT  */
    RSHIFT = 276,                  /* RSHIFT  */
    UNARY = 277,                   /* UNARY  */
    END = 278,                     /* END  */
    ALIGN_K = 279,                 /* ALIGN_K  */
    BLOCK = 280,                   /* BLOCK  */
    BIND = 281,                    /* BIND  */
    QUAD = 282,                    /* QUAD  */
    SQUAD = 283,                   /* SQUAD  */
    LONG = 284,                    /* LONG  */
    SHORT = 285,                   /* SHORT  */
    BYTE = 286,                    /* BYTE  */
    SECTIONS = 287,                /* SECTIONS  */
    PHDRS = 288,                   /* PHDRS  */
    SORT = 289,                    /* SORT  */
    SIZEOF_HEADERS = 290,          /* SIZEOF_HEADERS  */
    OUTPUT_FORMAT = 291,           /* OUTPUT_FORMAT  */
    FORCE_COMMON_ALLOCATION = 292, /* FORCE_COMMON_ALLOCATION  */
    OUTPUT_ARCH = 293,             /* OUTPUT_ARCH  */
    INCLUDE = 294,                 /* INCLUDE  */
    MEMORY = 295,                  /* MEMORY  */
    DEFSYMEND = 296,               /* DEFSYMEND  */
    NOLOAD = 297,                  /* NOLOAD  */
    DSECT = 298,                   /* DSECT  */
    COPY = 299,                    /* COPY  */
    INFO = 300,                    /* INFO  */
    OVERLAY = 301,                 /* OVERLAY  */
    DEFINED = 302,                 /* DEFINED  */
    TARGET_K = 303,                /* TARGET_K  */
    SEARCH_DIR = 304,              /* SEARCH_DIR  */
    MAP = 305,                     /* MAP  */
    ENTRY = 306,                   /* ENTRY  */
    NEXT = 307,                    /* NEXT  */
    SIZEOF = 308,                  /* SIZEOF  */
    ADDR = 309,                    /* ADDR  */
    LOADADDR = 310,                /* LOADADDR  */
    MAX_K = 311,                   /* MAX_K  */
    MIN_K = 312,                   /* MIN_K  */
    STARTUP = 313,                 /* STARTUP  */
    HLL = 314,                     /* HLL  */
    SYSLIB = 315,                  /* SYSLIB  */
    FLOAT = 316,                   /* FLOAT  */
    NOFLOAT = 317,                 /* NOFLOAT  */
    NOCROSSREFS = 318,             /* NOCROSSREFS  */
    ORIGIN = 319,                  /* ORIGIN  */
    FILL = 320,                    /* FILL  */
    LENGTH = 321,                  /* LENGTH  */
    CREATE_OBJECT_SYMBOLS = 322,   /* CREATE_OBJECT_SYMBOLS  */
    INPUT = 323,                   /* INPUT  */
    GROUP = 324,                   /* GROUP  */
    OUTPUT = 325,                  /* OUTPUT  */
    CONSTRUCTORS = 326,            /* CONSTRUCTORS  */
    ALIGNMOD = 327,                /* ALIGNMOD  */
    AT = 328,                      /* AT  */
    PROVIDE = 329,                 /* PROVIDE  */
    CHIP = 330,                    /* CHIP  */
    LIST = 331,                    /* LIST  */
    SECT = 332,                    /* SECT  */
    ABSOLUTE = 333,                /* ABSOLUTE  */
    LOAD = 334,                    /* LOAD  */
    NEWLINE = 335,                 /* NEWLINE  */
    ENDWORD = 336,                 /* ENDWORD  */
    ORDER = 337,                   /* ORDER  */
    NAMEWORD = 338,                /* NAMEWORD  */
    ASSERT_K = 339,                /* ASSERT_K  */
    FORMAT = 340,                  /* FORMAT  */
    PUBLIC = 341,                  /* PUBLIC  */
    BASE = 342,                    /* BASE  */
    ALIAS = 343,                   /* ALIAS  */
    TRUNCATE = 344,                /* TRUNCATE  */
    REL = 345,                     /* REL  */
    INPUT_SCRIPT = 346,            /* INPUT_SCRIPT  */
    INPUT_MRI_SCRIPT = 347,        /* INPUT_MRI_SCRIPT  */
    INPUT_DEFSYM = 348,            /* INPUT_DEFSYM  */
    CASE = 349,                    /* CASE  */
    EXTERN = 350,                  /* EXTERN  */
    START = 351,                   /* START  */
    VERS_TAG = 352,                /* VERS_TAG  */
    VERS_IDENTIFIER = 353,         /* VERS_IDENTIFIER  */
    GLOBAL = 354,                  /* GLOBAL  */
    LOCAL = 355,                   /* LOCAL  */
    VERSIONK = 356,                /* VERSIONK  */
    INPUT_VERSION_SCRIPT = 357,    /* INPUT_VERSION_SCRIPT  */
    KEEP = 358,                    /* KEEP  */
    EXCLUDE_FILE = 359             /* EXCLUDE_FILE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT 258
#define NAME 259
#define LNAME 260
#define PLUSEQ 261
#define MINUSEQ 262
#define MULTEQ 263
#define DIVEQ 264
#define LSHIFTEQ 265
#define RSHIFTEQ 266
#define ANDEQ 267
#define OREQ 268
#define OROR 269
#define ANDAND 270
#define EQ 271
#define NE 272
#define LE 273
#define GE 274
#define LSHIFT 275
#define RSHIFT 276
#define UNARY 277
#define END 278
#define ALIGN_K 279
#define BLOCK 280
#define BIND 281
#define QUAD 282
#define SQUAD 283
#define LONG 284
#define SHORT 285
#define BYTE 286
#define SECTIONS 287
#define PHDRS 288
#define SORT 289
#define SIZEOF_HEADERS 290
#define OUTPUT_FORMAT 291
#define FORCE_COMMON_ALLOCATION 292
#define OUTPUT_ARCH 293
#define INCLUDE 294
#define MEMORY 295
#define DEFSYMEND 296
#define NOLOAD 297
#define DSECT 298
#define COPY 299
#define INFO 300
#define OVERLAY 301
#define DEFINED 302
#define TARGET_K 303
#define SEARCH_DIR 304
#define MAP 305
#define ENTRY 306
#define NEXT 307
#define SIZEOF 308
#define ADDR 309
#define LOADADDR 310
#define MAX_K 311
#define MIN_K 312
#define STARTUP 313
#define HLL 314
#define SYSLIB 315
#define FLOAT 316
#define NOFLOAT 317
#define NOCROSSREFS 318
#define ORIGIN 319
#define FILL 320
#define LENGTH 321
#define CREATE_OBJECT_SYMBOLS 322
#define INPUT 323
#define GROUP 324
#define OUTPUT 325
#define CONSTRUCTORS 326
#define ALIGNMOD 327
#define AT 328
#define PROVIDE 329
#define CHIP 330
#define LIST 331
#define SECT 332
#define ABSOLUTE 333
#define LOAD 334
#define NEWLINE 335
#define ENDWORD 336
#define ORDER 337
#define NAMEWORD 338
#define ASSERT_K 339
#define FORMAT 340
#define PUBLIC 341
#define BASE 342
#define ALIAS 343
#define TRUNCATE 344
#define REL 345
#define INPUT_SCRIPT 346
#define INPUT_MRI_SCRIPT 347
#define INPUT_DEFSYM 348
#define CASE 349
#define EXTERN 350
#define START 351
#define VERS_TAG 352
#define VERS_IDENTIFIER 353
#define GLOBAL 354
#define LOCAL 355
#define VERSIONK 356
#define INPUT_VERSION_SCRIPT 357
#define KEEP 358
#define EXCLUDE_FILE 359

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 68 "ldgram.y"

  bfd_vma integer;
  char *name;
  const char *cname;
  struct wildcard_spec wildcard;
  int token;
  union etree_union *etree;
  struct phdr_info
    {
      boolean filehdr;
      boolean phdrs;
      union etree_union *at;
      union etree_union *flags;
    } phdr;
  struct lang_nocrossref *nocrossref;
  struct lang_output_section_phdr_list *section_phdr;
  struct bfd_elf_version_deps *deflist;
  struct bfd_elf_version_expr *versyms;
  struct bfd_elf_version_tree *versnode;

#line 296 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
