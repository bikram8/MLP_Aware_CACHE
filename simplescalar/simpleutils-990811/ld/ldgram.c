/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 22 "ldgram.y"

/*

 */

#define DONTDECLARE_MALLOC

#include "bfd.h"
#include "sysdep.h"
#include "bfdlink.h"
#include "ld.h"    
#include "ldexp.h"
#include "ldver.h"
#include "ldlang.h"
#include "ldemul.h"
#include "ldfile.h"
#include "ldmisc.h"
#include "ldmain.h"
#include "mri.h"
#include "ldctor.h"
#include "ldlex.h"

#ifndef YYDEBUG
#define YYDEBUG 1
#endif

static enum section_type sectype;

lang_memory_region_type *region;

struct wildcard_spec current_file;
boolean ldgram_want_filename = true;
boolean had_script = false;
boolean force_make_executable = false;

boolean ldgram_in_script = false;
boolean ldgram_had_equals = false;
boolean ldgram_had_keep = false;
char *ldgram_vers_current_lang = NULL;

#define ERROR_NAME_MAX 20
static char *error_names[ERROR_NAME_MAX];
static int error_index;
#define PUSH_ERROR(x) if (error_index < ERROR_NAME_MAX) error_names[error_index] = x; error_index++;
#define POP_ERROR()   error_index--;

#line 118 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 400 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_NAME = 4,                       /* NAME  */
  YYSYMBOL_LNAME = 5,                      /* LNAME  */
  YYSYMBOL_PLUSEQ = 6,                     /* PLUSEQ  */
  YYSYMBOL_MINUSEQ = 7,                    /* MINUSEQ  */
  YYSYMBOL_MULTEQ = 8,                     /* MULTEQ  */
  YYSYMBOL_DIVEQ = 9,                      /* DIVEQ  */
  YYSYMBOL_10_ = 10,                       /* '='  */
  YYSYMBOL_LSHIFTEQ = 11,                  /* LSHIFTEQ  */
  YYSYMBOL_RSHIFTEQ = 12,                  /* RSHIFTEQ  */
  YYSYMBOL_ANDEQ = 13,                     /* ANDEQ  */
  YYSYMBOL_OREQ = 14,                      /* OREQ  */
  YYSYMBOL_15_ = 15,                       /* '?'  */
  YYSYMBOL_16_ = 16,                       /* ':'  */
  YYSYMBOL_OROR = 17,                      /* OROR  */
  YYSYMBOL_ANDAND = 18,                    /* ANDAND  */
  YYSYMBOL_19_ = 19,                       /* '|'  */
  YYSYMBOL_20_ = 20,                       /* '^'  */
  YYSYMBOL_21_ = 21,                       /* '&'  */
  YYSYMBOL_EQ = 22,                        /* EQ  */
  YYSYMBOL_NE = 23,                        /* NE  */
  YYSYMBOL_24_ = 24,                       /* '<'  */
  YYSYMBOL_25_ = 25,                       /* '>'  */
  YYSYMBOL_LE = 26,                        /* LE  */
  YYSYMBOL_GE = 27,                        /* GE  */
  YYSYMBOL_LSHIFT = 28,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 29,                    /* RSHIFT  */
  YYSYMBOL_30_ = 30,                       /* '+'  */
  YYSYMBOL_31_ = 31,                       /* '-'  */
  YYSYMBOL_32_ = 32,                       /* '*'  */
  YYSYMBOL_33_ = 33,                       /* '/'  */
  YYSYMBOL_34_ = 34,                       /* '%'  */
  YYSYMBOL_UNARY = 35,                     /* UNARY  */
  YYSYMBOL_END = 36,                       /* END  */
  YYSYMBOL_37_ = 37,                       /* '('  */
  YYSYMBOL_ALIGN_K = 38,                   /* ALIGN_K  */
  YYSYMBOL_BLOCK = 39,                     /* BLOCK  */
  YYSYMBOL_BIND = 40,                      /* BIND  */
  YYSYMBOL_QUAD = 41,                      /* QUAD  */
  YYSYMBOL_SQUAD = 42,                     /* SQUAD  */
  YYSYMBOL_LONG = 43,                      /* LONG  */
  YYSYMBOL_SHORT = 44,                     /* SHORT  */
  YYSYMBOL_BYTE = 45,                      /* BYTE  */
  YYSYMBOL_SECTIONS = 46,                  /* SECTIONS  */
  YYSYMBOL_PHDRS = 47,                     /* PHDRS  */
  YYSYMBOL_SORT = 48,                      /* SORT  */
  YYSYMBOL_49_ = 49,                       /* '{'  */
  YYSYMBOL_50_ = 50,                       /* '}'  */
  YYSYMBOL_SIZEOF_HEADERS = 51,            /* SIZEOF_HEADERS  */
  YYSYMBOL_OUTPUT_FORMAT = 52,             /* OUTPUT_FORMAT  */
  YYSYMBOL_FORCE_COMMON_ALLOCATION = 53,   /* FORCE_COMMON_ALLOCATION  */
  YYSYMBOL_OUTPUT_ARCH = 54,               /* OUTPUT_ARCH  */
  YYSYMBOL_INCLUDE = 55,                   /* INCLUDE  */
  YYSYMBOL_MEMORY = 56,                    /* MEMORY  */
  YYSYMBOL_DEFSYMEND = 57,                 /* DEFSYMEND  */
  YYSYMBOL_NOLOAD = 58,                    /* NOLOAD  */
  YYSYMBOL_DSECT = 59,                     /* DSECT  */
  YYSYMBOL_COPY = 60,                      /* COPY  */
  YYSYMBOL_INFO = 61,                      /* INFO  */
  YYSYMBOL_OVERLAY = 62,                   /* OVERLAY  */
  YYSYMBOL_DEFINED = 63,                   /* DEFINED  */
  YYSYMBOL_TARGET_K = 64,                  /* TARGET_K  */
  YYSYMBOL_SEARCH_DIR = 65,                /* SEARCH_DIR  */
  YYSYMBOL_MAP = 66,                       /* MAP  */
  YYSYMBOL_ENTRY = 67,                     /* ENTRY  */
  YYSYMBOL_NEXT = 68,                      /* NEXT  */
  YYSYMBOL_SIZEOF = 69,                    /* SIZEOF  */
  YYSYMBOL_ADDR = 70,                      /* ADDR  */
  YYSYMBOL_LOADADDR = 71,                  /* LOADADDR  */
  YYSYMBOL_MAX_K = 72,                     /* MAX_K  */
  YYSYMBOL_MIN_K = 73,                     /* MIN_K  */
  YYSYMBOL_STARTUP = 74,                   /* STARTUP  */
  YYSYMBOL_HLL = 75,                       /* HLL  */
  YYSYMBOL_SYSLIB = 76,                    /* SYSLIB  */
  YYSYMBOL_FLOAT = 77,                     /* FLOAT  */
  YYSYMBOL_NOFLOAT = 78,                   /* NOFLOAT  */
  YYSYMBOL_NOCROSSREFS = 79,               /* NOCROSSREFS  */
  YYSYMBOL_ORIGIN = 80,                    /* ORIGIN  */
  YYSYMBOL_FILL = 81,                      /* FILL  */
  YYSYMBOL_LENGTH = 82,                    /* LENGTH  */
  YYSYMBOL_CREATE_OBJECT_SYMBOLS = 83,     /* CREATE_OBJECT_SYMBOLS  */
  YYSYMBOL_INPUT = 84,                     /* INPUT  */
  YYSYMBOL_GROUP = 85,                     /* GROUP  */
  YYSYMBOL_OUTPUT = 86,                    /* OUTPUT  */
  YYSYMBOL_CONSTRUCTORS = 87,              /* CONSTRUCTORS  */
  YYSYMBOL_ALIGNMOD = 88,                  /* ALIGNMOD  */
  YYSYMBOL_AT = 89,                        /* AT  */
  YYSYMBOL_PROVIDE = 90,                   /* PROVIDE  */
  YYSYMBOL_CHIP = 91,                      /* CHIP  */
  YYSYMBOL_LIST = 92,                      /* LIST  */
  YYSYMBOL_SECT = 93,                      /* SECT  */
  YYSYMBOL_ABSOLUTE = 94,                  /* ABSOLUTE  */
  YYSYMBOL_LOAD = 95,                      /* LOAD  */
  YYSYMBOL_NEWLINE = 96,                   /* NEWLINE  */
  YYSYMBOL_ENDWORD = 97,                   /* ENDWORD  */
  YYSYMBOL_ORDER = 98,                     /* ORDER  */
  YYSYMBOL_NAMEWORD = 99,                  /* NAMEWORD  */
  YYSYMBOL_ASSERT_K = 100,                 /* ASSERT_K  */
  YYSYMBOL_FORMAT = 101,                   /* FORMAT  */
  YYSYMBOL_PUBLIC = 102,                   /* PUBLIC  */
  YYSYMBOL_BASE = 103,                     /* BASE  */
  YYSYMBOL_ALIAS = 104,                    /* ALIAS  */
  YYSYMBOL_TRUNCATE = 105,                 /* TRUNCATE  */
  YYSYMBOL_REL = 106,                      /* REL  */
  YYSYMBOL_INPUT_SCRIPT = 107,             /* INPUT_SCRIPT  */
  YYSYMBOL_INPUT_MRI_SCRIPT = 108,         /* INPUT_MRI_SCRIPT  */
  YYSYMBOL_INPUT_DEFSYM = 109,             /* INPUT_DEFSYM  */
  YYSYMBOL_CASE = 110,                     /* CASE  */
  YYSYMBOL_EXTERN = 111,                   /* EXTERN  */
  YYSYMBOL_START = 112,                    /* START  */
  YYSYMBOL_VERS_TAG = 113,                 /* VERS_TAG  */
  YYSYMBOL_VERS_IDENTIFIER = 114,          /* VERS_IDENTIFIER  */
  YYSYMBOL_GLOBAL = 115,                   /* GLOBAL  */
  YYSYMBOL_LOCAL = 116,                    /* LOCAL  */
  YYSYMBOL_VERSIONK = 117,                 /* VERSIONK  */
  YYSYMBOL_INPUT_VERSION_SCRIPT = 118,     /* INPUT_VERSION_SCRIPT  */
  YYSYMBOL_KEEP = 119,                     /* KEEP  */
  YYSYMBOL_EXCLUDE_FILE = 120,             /* EXCLUDE_FILE  */
  YYSYMBOL_121_ = 121,                     /* ','  */
  YYSYMBOL_122_ = 122,                     /* ';'  */
  YYSYMBOL_123_ = 123,                     /* ')'  */
  YYSYMBOL_124_ = 124,                     /* '['  */
  YYSYMBOL_125_ = 125,                     /* ']'  */
  YYSYMBOL_126_ = 126,                     /* '!'  */
  YYSYMBOL_127_ = 127,                     /* '~'  */
  YYSYMBOL_YYACCEPT = 128,                 /* $accept  */
  YYSYMBOL_file = 129,                     /* file  */
  YYSYMBOL_filename = 130,                 /* filename  */
  YYSYMBOL_defsym_expr = 131,              /* defsym_expr  */
  YYSYMBOL_132_1 = 132,                    /* $@1  */
  YYSYMBOL_mri_script_file = 133,          /* mri_script_file  */
  YYSYMBOL_134_2 = 134,                    /* $@2  */
  YYSYMBOL_mri_script_lines = 135,         /* mri_script_lines  */
  YYSYMBOL_mri_script_command = 136,       /* mri_script_command  */
  YYSYMBOL_137_3 = 137,                    /* $@3  */
  YYSYMBOL_ordernamelist = 138,            /* ordernamelist  */
  YYSYMBOL_mri_load_name_list = 139,       /* mri_load_name_list  */
  YYSYMBOL_mri_abs_name_list = 140,        /* mri_abs_name_list  */
  YYSYMBOL_casesymlist = 141,              /* casesymlist  */
  YYSYMBOL_extern_name_list = 142,         /* extern_name_list  */
  YYSYMBOL_script_file = 143,              /* script_file  */
  YYSYMBOL_144_4 = 144,                    /* $@4  */
  YYSYMBOL_ifile_list = 145,               /* ifile_list  */
  YYSYMBOL_ifile_p1 = 146,                 /* ifile_p1  */
  YYSYMBOL_147_5 = 147,                    /* $@5  */
  YYSYMBOL_148_6 = 148,                    /* $@6  */
  YYSYMBOL_input_list = 149,               /* input_list  */
  YYSYMBOL_sections = 150,                 /* sections  */
  YYSYMBOL_sec_or_group_p1 = 151,          /* sec_or_group_p1  */
  YYSYMBOL_statement_anywhere = 152,       /* statement_anywhere  */
  YYSYMBOL_wildcard_name = 153,            /* wildcard_name  */
  YYSYMBOL_wildcard_spec = 154,            /* wildcard_spec  */
  YYSYMBOL_file_NAME_list = 155,           /* file_NAME_list  */
  YYSYMBOL_input_section_spec_no_keep = 156, /* input_section_spec_no_keep  */
  YYSYMBOL_157_7 = 157,                    /* $@7  */
  YYSYMBOL_158_8 = 158,                    /* $@8  */
  YYSYMBOL_input_section_spec = 159,       /* input_section_spec  */
  YYSYMBOL_160_9 = 160,                    /* $@9  */
  YYSYMBOL_statement = 161,                /* statement  */
  YYSYMBOL_statement_list = 162,           /* statement_list  */
  YYSYMBOL_statement_list_opt = 163,       /* statement_list_opt  */
  YYSYMBOL_length = 164,                   /* length  */
  YYSYMBOL_fill_opt = 165,                 /* fill_opt  */
  YYSYMBOL_assign_op = 166,                /* assign_op  */
  YYSYMBOL_end = 167,                      /* end  */
  YYSYMBOL_assignment = 168,               /* assignment  */
  YYSYMBOL_opt_comma = 169,                /* opt_comma  */
  YYSYMBOL_memory = 170,                   /* memory  */
  YYSYMBOL_memory_spec_list = 171,         /* memory_spec_list  */
  YYSYMBOL_memory_spec = 172,              /* memory_spec  */
  YYSYMBOL_173_10 = 173,                   /* $@10  */
  YYSYMBOL_origin_spec = 174,              /* origin_spec  */
  YYSYMBOL_length_spec = 175,              /* length_spec  */
  YYSYMBOL_attributes_opt = 176,           /* attributes_opt  */
  YYSYMBOL_attributes_list = 177,          /* attributes_list  */
  YYSYMBOL_attributes_string = 178,        /* attributes_string  */
  YYSYMBOL_startup = 179,                  /* startup  */
  YYSYMBOL_high_level_library = 180,       /* high_level_library  */
  YYSYMBOL_high_level_library_NAME_list = 181, /* high_level_library_NAME_list  */
  YYSYMBOL_low_level_library = 182,        /* low_level_library  */
  YYSYMBOL_low_level_library_NAME_list = 183, /* low_level_library_NAME_list  */
  YYSYMBOL_floating_point_support = 184,   /* floating_point_support  */
  YYSYMBOL_nocrossref_list = 185,          /* nocrossref_list  */
  YYSYMBOL_mustbe_exp = 186,               /* mustbe_exp  */
  YYSYMBOL_187_11 = 187,                   /* $@11  */
  YYSYMBOL_exp = 188,                      /* exp  */
  YYSYMBOL_opt_at = 189,                   /* opt_at  */
  YYSYMBOL_section = 190,                  /* section  */
  YYSYMBOL_191_12 = 191,                   /* $@12  */
  YYSYMBOL_192_13 = 192,                   /* $@13  */
  YYSYMBOL_193_14 = 193,                   /* $@14  */
  YYSYMBOL_194_15 = 194,                   /* $@15  */
  YYSYMBOL_195_16 = 195,                   /* $@16  */
  YYSYMBOL_196_17 = 196,                   /* $@17  */
  YYSYMBOL_197_18 = 197,                   /* $@18  */
  YYSYMBOL_198_19 = 198,                   /* $@19  */
  YYSYMBOL_199_20 = 199,                   /* $@20  */
  YYSYMBOL_200_21 = 200,                   /* $@21  */
  YYSYMBOL_201_22 = 201,                   /* $@22  */
  YYSYMBOL_202_23 = 202,                   /* $@23  */
  YYSYMBOL_type = 203,                     /* type  */
  YYSYMBOL_atype = 204,                    /* atype  */
  YYSYMBOL_opt_exp_with_type = 205,        /* opt_exp_with_type  */
  YYSYMBOL_opt_exp_without_type = 206,     /* opt_exp_without_type  */
  YYSYMBOL_opt_nocrossrefs = 207,          /* opt_nocrossrefs  */
  YYSYMBOL_memspec_opt = 208,              /* memspec_opt  */
  YYSYMBOL_phdr_opt = 209,                 /* phdr_opt  */
  YYSYMBOL_overlay_section = 210,          /* overlay_section  */
  YYSYMBOL_211_24 = 211,                   /* $@24  */
  YYSYMBOL_212_25 = 212,                   /* $@25  */
  YYSYMBOL_213_26 = 213,                   /* $@26  */
  YYSYMBOL_phdrs = 214,                    /* phdrs  */
  YYSYMBOL_phdr_list = 215,                /* phdr_list  */
  YYSYMBOL_phdr = 216,                     /* phdr  */
  YYSYMBOL_217_27 = 217,                   /* $@27  */
  YYSYMBOL_218_28 = 218,                   /* $@28  */
  YYSYMBOL_phdr_type = 219,                /* phdr_type  */
  YYSYMBOL_phdr_qualifiers = 220,          /* phdr_qualifiers  */
  YYSYMBOL_phdr_val = 221,                 /* phdr_val  */
  YYSYMBOL_version_script_file = 222,      /* version_script_file  */
  YYSYMBOL_223_29 = 223,                   /* $@29  */
  YYSYMBOL_version = 224,                  /* version  */
  YYSYMBOL_225_30 = 225,                   /* $@30  */
  YYSYMBOL_vers_nodes = 226,               /* vers_nodes  */
  YYSYMBOL_vers_node = 227,                /* vers_node  */
  YYSYMBOL_verdep = 228,                   /* verdep  */
  YYSYMBOL_vers_tag = 229,                 /* vers_tag  */
  YYSYMBOL_vers_defns = 230,               /* vers_defns  */
  YYSYMBOL_231_31 = 231                    /* @31  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1311

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  128
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  104
/* YYNRULES -- Number of rules.  */
#define YYNRULES  287
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  582

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   359


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   126,     2,     2,     2,    34,    21,     2,
      37,   123,    32,    30,   121,    31,     2,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    16,   122,
      24,    10,    25,    15,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   124,     2,   125,    20,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,    19,    50,   127,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    11,    12,    13,    14,    17,
      18,    22,    23,    26,    27,    28,    29,    35,    36,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   151,   151,   152,   153,   154,   158,   162,   162,   171,
     171,   184,   185,   189,   190,   191,   194,   197,   198,   199,
     201,   203,   205,   207,   209,   211,   213,   215,   217,   219,
     221,   222,   223,   225,   227,   229,   231,   233,   234,   236,
     235,   237,   239,   243,   244,   245,   249,   251,   255,   257,
     262,   263,   264,   268,   270,   272,   277,   277,   288,   289,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   307,   309,   311,   314,   316,   318,   320,   322,   321,
     325,   328,   327,   329,   333,   337,   340,   343,   346,   349,
     352,   358,   362,   363,   364,   368,   370,   376,   380,   384,
     391,   397,   403,   409,   419,   426,   436,   442,   441,   448,
     447,   458,   460,   459,   466,   467,   471,   472,   477,   482,
     483,   488,   499,   500,   503,   505,   509,   511,   513,   515,
     517,   522,   529,   535,   537,   539,   541,   543,   545,   547,
     549,   554,   554,   559,   563,   571,   579,   579,   583,   587,
     588,   589,   594,   593,   599,   607,   617,   618,   622,   623,
     627,   629,   634,   639,   640,   645,   647,   653,   655,   657,
     661,   663,   669,   672,   681,   692,   692,   698,   700,   702,
     704,   706,   708,   711,   713,   715,   717,   719,   721,   723,
     725,   727,   729,   731,   733,   735,   737,   739,   741,   743,
     745,   747,   749,   751,   753,   756,   758,   760,   762,   764,
     766,   768,   770,   772,   774,   780,   781,   784,   786,   788,
     794,   796,   784,   802,   804,   806,   811,   813,   801,   822,
     824,   822,   832,   833,   834,   835,   836,   840,   841,   842,
     846,   847,   852,   853,   858,   859,   864,   865,   870,   872,
     877,   880,   893,   897,   902,   904,   895,   912,   915,   917,
     921,   922,   921,   931,   962,   965,   977,   986,   989,   998,
     998,  1012,  1012,  1022,  1023,  1027,  1031,  1038,  1042,  1050,
    1053,  1057,  1061,  1065,  1072,  1076,  1081,  1080
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "NAME", "LNAME",
  "PLUSEQ", "MINUSEQ", "MULTEQ", "DIVEQ", "'='", "LSHIFTEQ", "RSHIFTEQ",
  "ANDEQ", "OREQ", "'?'", "':'", "OROR", "ANDAND", "'|'", "'^'", "'&'",
  "EQ", "NE", "'<'", "'>'", "LE", "GE", "LSHIFT", "RSHIFT", "'+'", "'-'",
  "'*'", "'/'", "'%'", "UNARY", "END", "'('", "ALIGN_K", "BLOCK", "BIND",
  "QUAD", "SQUAD", "LONG", "SHORT", "BYTE", "SECTIONS", "PHDRS", "SORT",
  "'{'", "'}'", "SIZEOF_HEADERS", "OUTPUT_FORMAT",
  "FORCE_COMMON_ALLOCATION", "OUTPUT_ARCH", "INCLUDE", "MEMORY",
  "DEFSYMEND", "NOLOAD", "DSECT", "COPY", "INFO", "OVERLAY", "DEFINED",
  "TARGET_K", "SEARCH_DIR", "MAP", "ENTRY", "NEXT", "SIZEOF", "ADDR",
  "LOADADDR", "MAX_K", "MIN_K", "STARTUP", "HLL", "SYSLIB", "FLOAT",
  "NOFLOAT", "NOCROSSREFS", "ORIGIN", "FILL", "LENGTH",
  "CREATE_OBJECT_SYMBOLS", "INPUT", "GROUP", "OUTPUT", "CONSTRUCTORS",
  "ALIGNMOD", "AT", "PROVIDE", "CHIP", "LIST", "SECT", "ABSOLUTE", "LOAD",
  "NEWLINE", "ENDWORD", "ORDER", "NAMEWORD", "ASSERT_K", "FORMAT",
  "PUBLIC", "BASE", "ALIAS", "TRUNCATE", "REL", "INPUT_SCRIPT",
  "INPUT_MRI_SCRIPT", "INPUT_DEFSYM", "CASE", "EXTERN", "START",
  "VERS_TAG", "VERS_IDENTIFIER", "GLOBAL", "LOCAL", "VERSIONK",
  "INPUT_VERSION_SCRIPT", "KEEP", "EXCLUDE_FILE", "','", "';'", "')'",
  "'['", "']'", "'!'", "'~'", "$accept", "file", "filename", "defsym_expr",
  "$@1", "mri_script_file", "$@2", "mri_script_lines",
  "mri_script_command", "$@3", "ordernamelist", "mri_load_name_list",
  "mri_abs_name_list", "casesymlist", "extern_name_list", "script_file",
  "$@4", "ifile_list", "ifile_p1", "$@5", "$@6", "input_list", "sections",
  "sec_or_group_p1", "statement_anywhere", "wildcard_name",
  "wildcard_spec", "file_NAME_list", "input_section_spec_no_keep", "$@7",
  "$@8", "input_section_spec", "$@9", "statement", "statement_list",
  "statement_list_opt", "length", "fill_opt", "assign_op", "end",
  "assignment", "opt_comma", "memory", "memory_spec_list", "memory_spec",
  "$@10", "origin_spec", "length_spec", "attributes_opt",
  "attributes_list", "attributes_string", "startup", "high_level_library",
  "high_level_library_NAME_list", "low_level_library",
  "low_level_library_NAME_list", "floating_point_support",
  "nocrossref_list", "mustbe_exp", "$@11", "exp", "opt_at", "section",
  "$@12", "$@13", "$@14", "$@15", "$@16", "$@17", "$@18", "$@19", "$@20",
  "$@21", "$@22", "$@23", "type", "atype", "opt_exp_with_type",
  "opt_exp_without_type", "opt_nocrossrefs", "memspec_opt", "phdr_opt",
  "overlay_section", "$@24", "$@25", "$@26", "phdrs", "phdr_list", "phdr",
  "$@27", "$@28", "phdr_type", "phdr_qualifiers", "phdr_val",
  "version_script_file", "$@29", "version", "$@30", "vers_nodes",
  "vers_node", "verdep", "vers_tag", "vers_defns", "@31", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-534)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-272)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      97,  -534,  -534,  -534,  -534,    51,  -534,  -534,  -534,  -534,
    -534,    52,  -534,   -50,  -534,   597,   514,    57,    40,   -50,
    -534,   488,    53,   128,    42,  -534,    47,   196,   176,   220,
     221,   222,   223,   226,   227,   228,  -534,  -534,   230,   231,
    -534,   232,   233,   234,  -534,  -534,  -534,  -534,    30,  -534,
    -534,  -534,  -534,  -534,  -534,  -534,   144,  -534,   269,   196,
     270,   504,  -534,   272,   273,   274,  -534,  -534,   275,   276,
     277,   504,   280,   289,   290,   293,   296,   197,   504,    -1,
    -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,
    -534,  -534,  -534,   297,   298,  -534,  -534,   300,   301,   196,
     196,   302,   196,    15,  -534,   303,   203,   271,   196,   305,
     293,  -534,  -534,  -534,   261,     6,  -534,     7,  -534,  -534,
     504,   504,   504,   281,   282,  -534,   299,   306,   307,   308,
     310,   312,   313,   314,   316,   504,   504,  1069,   252,  -534,
     190,  -534,   193,    10,  -534,  -534,   338,  1231,   214,  -534,
    -534,   216,  -534,    18,  -534,  -534,  1231,   334,  -534,   323,
     324,   267,   236,  -534,   504,  -534,    31,    35,     2,   237,
    -534,  -534,  -534,   239,   240,   241,   242,   243,  -534,  -534,
      68,    78,    24,   244,  -534,  -534,    61,   203,   247,   345,
      67,   -50,   504,   504,  -534,   504,   504,  -534,  -534,   671,
     504,   504,   352,   504,   355,   367,   368,   504,   504,   504,
     504,  -534,  -534,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,  1231,   370,   376,  -534,   377,
     504,   504,  1231,   210,   379,  -534,   380,   341,    72,    72,
     -39,   279,  1231,   488,  -534,  -534,  -534,  -534,  -534,  -534,
    -534,  -534,   383,  -534,  -534,   674,   354,     9,  -534,  -534,
    -534,  -534,  -534,  -534,  -534,   196,  -534,   196,   303,  -534,
    -534,  -534,  -534,   224,  -534,    64,  -534,  -534,  -534,   -12,
    1231,  1231,   707,  1231,  1231,  -534,   748,   805,   292,   825,
     294,   304,   311,  1089,  1126,   855,  1146,  1197,   892,   998,
    1104,  1211,  1266,  1277,  1277,   219,   219,   219,   219,   186,
     186,    86,    86,  -534,  -534,  -534,  1231,  1231,  1231,  -534,
    -534,  -534,  1231,  1231,  -534,  -534,  -534,  -534,  -534,   278,
     283,  -534,  -534,   -22,  -534,   410,   454,   410,   504,   291,
    -534,     8,   378,  -534,   300,  -534,  -534,  -534,  -534,  -534,
    -534,  -534,   319,  -534,  -534,  -534,  -534,  -534,  -534,  -534,
    -534,  -534,   504,   504,  -534,   391,   504,    72,    80,   279,
    -534,  -534,   172,   359,  1174,   381,   315,  -534,  1253,   340,
    -534,  1231,    20,   395,  -534,   399,     3,  -534,   342,  -534,
    -534,   875,   912,   321,  1231,   -30,   404,  -534,  -534,  -534,
    -534,  -534,  -534,   322,   504,   -28,   405,  -534,   386,  -534,
    -534,  -534,   315,   375,   389,   392,  -534,   328,  -534,  -534,
    -534,   418,   309,  -534,  -534,  -534,  -534,   279,    72,  -534,
     932,  -534,   504,   382,  -534,  -534,   504,    20,   504,   317,
    -534,  -534,   351,   330,   199,   962,  -534,   387,    32,   982,
    -534,  1019,  -534,  -534,   425,  -534,   279,   400,   427,  -534,
     546,  -534,  -534,  -534,    20,  -534,   504,  -534,   320,  -534,
    -534,  -534,  -534,  -534,  -534,  -534,   409,   416,  -534,  -534,
     417,   419,  -534,  -534,  -534,  -534,  -534,  -534,  -534,   546,
     412,   423,    30,  -534,  -534,  -534,  1039,    92,  -534,  -534,
      25,    58,   426,  -534,  -534,  -534,  -534,    37,   429,  -534,
     332,   430,   346,   348,    22,   353,   431,  -534,   -77,    58,
     449,   363,  -534,  -534,   459,  -534,    25,  -534,  -534,   364,
     365,    25,    73,  -534,    58,   116,   473,  -534,  -534,   440,
     449,  -534,   388,  -534,  -534,  -534,  -534,  -534,    87,   546,
    -534,    25,  -534,   486,  -534,   453,    87,   390,  -534,  -534,
     309,  -534,  -534,  -534,  -534,  -534,   309,    87,  -534,  -534,
     309,  -534
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,    56,     9,     7,   269,     0,     2,    59,     3,    12,
       5,     0,     4,     0,     1,    57,    10,     0,     0,   270,
     273,     0,     0,     0,     0,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   170,   171,     0,     0,
      78,     0,     0,     0,    69,    58,    61,    67,     0,    60,
      63,    64,    65,    66,    62,    68,     0,    15,     0,     0,
       0,     0,    16,     0,     0,     0,    18,    45,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     0,   279,
     274,   133,   134,   135,   136,   175,   137,   138,   139,   140,
     175,    94,   258,     0,     0,     6,    81,     0,     0,     0,
       0,     0,     0,     0,   169,   172,     0,     0,     0,     0,
       0,   142,   141,    96,     0,     0,    39,     0,   203,   211,
       0,     0,     0,     0,     0,   204,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,     0,    48,
      30,    46,    31,    17,    32,    22,     0,    35,     0,    36,
      51,    37,    53,    38,    41,    11,     8,     0,   284,     0,
       0,     0,     0,   143,     0,   144,     0,     0,     0,     0,
      59,   152,   151,     0,     0,     0,     0,     0,   164,   166,
     147,   147,   172,     0,    85,    88,     0,     0,     0,     0,
       0,     0,     0,     0,    12,     0,     0,   181,   177,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   180,   182,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,     0,    44,     0,
       0,     0,    21,     0,     0,    54,     0,     0,     0,     0,
       0,   280,   176,   217,    91,   223,   229,    93,    92,   260,
     257,   259,     0,    73,    75,   271,   156,     0,    70,    71,
      80,    95,   162,   146,   163,     0,   167,     0,   172,   173,
      83,    87,    90,     0,    77,     0,    72,   175,    84,     0,
      26,    27,    42,    28,    29,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   201,   200,
     198,   197,   196,   190,   191,   194,   195,   192,   193,   188,
     189,   186,   187,   183,   184,   185,    14,    25,    23,    49,
      47,    43,    19,    20,    34,    33,    52,    55,   286,     0,
       0,   277,   275,     0,   285,   238,     0,   238,     0,     0,
      82,     0,     0,   148,     0,   149,   165,   168,   174,    86,
      89,    79,     0,   272,    40,   209,   210,   202,   179,   205,
     206,   207,     0,     0,   208,     0,     0,     0,   281,   282,
     278,   276,     0,     0,   238,     0,   216,   245,     0,   246,
     230,   263,   264,     0,   160,     0,     0,   158,     0,   150,
     145,     0,     0,     0,   199,     0,     0,   232,   233,   234,
     235,   236,   239,     0,     0,     0,     0,   241,     0,   218,
     244,   247,   216,     0,   267,     0,   261,     0,   161,   157,
     159,     0,   147,   212,   213,   214,   287,     0,     0,   237,
       0,   240,     0,     0,   224,    94,     0,   264,     0,     0,
      74,   175,     0,     0,   238,     0,   219,     0,     0,     0,
     265,     0,   262,   154,     0,   153,   283,     0,     0,   215,
     124,   225,   231,   268,   264,   175,     0,   242,   106,    99,
      98,   126,   127,   128,   129,   130,     0,     0,   115,   117,
       0,     0,   116,   107,   100,   109,   111,   119,   123,   125,
       0,     0,     0,   252,   266,   155,     0,     0,   175,   112,
       0,     0,     0,   122,   220,   175,   114,     0,   238,    97,
       0,     0,     0,     0,     0,     0,     0,   104,   147,     0,
     249,     0,   253,   226,     0,   118,     0,   102,   121,    97,
       0,     0,     0,   108,     0,   147,     0,   250,   120,     0,
     249,   243,     0,   113,   101,   105,   110,   248,   132,   124,
     250,     0,   175,     0,   221,     0,   132,     0,   131,   251,
     147,   254,   227,   103,   222,   250,   147,   132,   228,   255,
     147,   256
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -534,  -534,   -53,  -534,  -534,  -534,  -534,   318,  -534,  -534,
    -534,  -534,  -534,  -534,   396,  -534,  -534,   339,  -534,  -534,
    -534,   327,  -534,    70,  -162,  -315,  -486,   -13,    -5,  -534,
    -534,  -534,  -534,    21,  -534,   -38,  -534,  -513,  -534,    26,
    -447,  -178,  -534,  -534,  -246,  -534,  -534,  -534,  -534,  -534,
     133,  -534,  -534,  -534,  -534,  -534,  -534,  -167,   -90,  -534,
     -60,   108,  -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,
    -534,  -534,  -534,  -534,  -534,  -534,  -374,   184,  -534,  -534,
     -18,  -533,  -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,
    -534,  -534,  -402,  -534,  -534,  -534,  -534,  -534,   347,   -14,
    -534,  -534,  -240,  -534
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,    96,    10,    11,     8,     9,    16,    77,   194,
     143,   142,   140,   151,   153,     6,     7,    15,    45,   107,
     170,   186,    46,   166,    47,   494,   495,   528,   496,   511,
     512,   497,   524,   498,   499,   500,   501,   564,    90,   113,
      48,   544,    49,   267,   172,   266,   432,   465,   352,   396,
     397,    50,    51,   180,    52,   181,    53,   183,   163,   164,
     199,   419,   258,   345,   443,   470,   530,   570,   346,   457,
     503,   550,   576,   347,   423,   413,   385,   386,   389,   422,
     547,   558,   517,   549,   575,   580,    54,   167,   261,   348,
     449,   392,   426,   447,    12,    13,    55,    56,    19,    20,
     343,   161,   162,   377
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     165,   137,   275,   277,   257,    80,   116,   394,   339,   340,
     416,   147,   394,   171,   238,   279,   192,   195,   156,    95,
     436,   355,   245,   502,   424,   527,   539,   566,   182,   519,
     407,   408,   409,   410,   411,   253,   253,   479,   363,   259,
     479,   532,   577,   527,   273,   460,   174,   175,   543,   177,
     179,    14,   502,   572,   480,   188,    17,   480,   555,   353,
     197,   198,   519,    18,   579,   281,   282,    78,   281,   282,
     526,   245,   504,   479,   341,   211,   212,   519,   235,    93,
     468,   254,   472,   342,    94,   260,   242,   533,   479,    79,
     480,   380,   437,   255,   255,   412,   519,   562,    32,    32,
     381,    18,    91,   563,   252,   480,   526,   479,   399,   425,
     157,   358,   502,   158,   159,   160,   256,   256,   229,   230,
     231,    42,    42,   262,   480,   263,   429,   193,   196,   395,
     354,   239,   290,   291,   395,   293,   294,   405,   178,   246,
     296,   297,   491,   299,   534,   278,   493,   303,   304,   305,
     306,   111,   112,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   118,   119,    92,   491,   520,
     332,   333,   283,   157,   284,   283,   158,   361,   246,   273,
     288,   274,   522,   521,   344,   525,   406,   362,   453,   273,
      95,   276,   120,   121,     1,     2,     3,   184,   185,   122,
     123,   124,   521,   334,   335,     4,   227,   228,   229,   230,
     231,   552,   356,   125,   357,    97,   554,   522,   359,   360,
     407,   408,   409,   410,   411,   126,   415,   273,   467,   556,
     127,   128,   129,   130,   131,   132,   567,   225,   226,   227,
     228,   229,   230,   231,   452,   118,   119,    98,    99,   100,
     101,   114,   233,   102,   103,   104,   133,   105,   106,   108,
     109,   110,   134,   115,   117,    80,   138,   139,   141,   144,
     145,   146,   120,   121,   148,   384,   388,   384,   391,   122,
     123,   124,   149,   155,   150,   412,   257,   152,   135,   136,
     154,   168,   169,   125,   171,   173,   176,   182,   187,   189,
     191,   236,   401,   402,   237,   126,   404,   250,   200,   201,
     127,   128,   129,   130,   131,   132,    81,    82,    83,    84,
      85,    86,    87,    88,    89,   243,   202,   244,   247,   248,
     249,   118,   119,   203,   204,   205,   133,   206,   240,   207,
     208,   209,   134,   210,   440,   287,   298,   -97,   251,   300,
     264,   463,   268,   269,   270,   271,   272,   280,   120,   121,
     286,   301,   302,   234,   329,   122,   123,   124,   135,   136,
     330,   331,   455,   336,   337,   505,   459,   349,   461,   125,
     338,   351,   574,   344,   398,   403,   414,   417,   578,   427,
     378,   126,   581,   428,   418,   379,   127,   128,   129,   130,
     131,   132,   393,   118,   119,   367,   506,   369,   523,   421,
     438,   441,   431,   442,   445,   531,   446,   370,   451,   448,
     273,   456,   133,   464,   371,   475,   471,   476,   134,   462,
     120,   121,   400,   477,   435,   439,   507,   382,   123,   124,
     383,   450,   466,   508,   509,   535,   510,   118,   119,   241,
     515,   125,   514,   529,   135,   136,   415,   536,   542,   537,
     387,   538,   568,   126,   546,   551,   541,   557,   127,   128,
     129,   130,   131,   132,   120,   121,   548,  -106,   553,   559,
     569,   122,   123,   124,    81,    82,    83,    84,    85,    86,
      87,    88,    89,   571,   133,   125,   190,   118,   119,   265,
     134,   561,   292,   573,   285,   458,   545,   126,    57,   540,
     513,   565,   127,   128,   129,   130,   131,   132,   516,   430,
     444,   390,   560,     0,   120,   121,   135,   136,   289,     0,
       0,   122,   123,   124,     0,     0,     0,     0,   133,     0,
     478,     0,    58,     0,   134,   125,     0,     0,     0,     0,
       0,   479,     0,     0,     0,     0,     0,   126,     0,    59,
       0,     0,   127,   128,   129,   130,   131,   132,   480,     0,
     135,   136,     0,     0,     0,     0,     0,   481,   482,   483,
     484,   485,     0,     0,   486,     0,     0,     0,   133,     0,
       0,    21,    60,     0,   134,    61,    62,    63,    64,    65,
     -42,    66,    67,    68,     0,    69,    70,    71,    72,    73,
       0,     0,     0,     0,    74,    75,    76,   487,     0,   488,
     135,   136,     0,   489,     0,     0,    42,     0,     0,     0,
       0,     0,     0,    22,    23,     0,     0,     0,     0,    24,
      25,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,    29,    30,    31,    32,   490,   491,     0,   492,     0,
     493,    33,    34,    35,    36,    37,    38,     0,    21,     0,
       0,    39,    40,    41,     0,     0,   213,    42,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,     0,     0,    43,     0,
     350,    57,     0,     0,  -271,     0,     0,     0,     0,    44,
      22,    23,     0,     0,     0,     0,    24,    25,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,    29,    30,
      31,    32,     0,   364,     0,    58,     0,     0,    33,    34,
      35,    36,    37,    38,     0,     0,     0,     0,    39,    40,
      41,     0,    59,   213,    42,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,     0,     0,    43,     0,     0,     0,     0,
       0,     0,     0,     0,   295,    60,    44,     0,    61,    62,
      63,    64,    65,     0,    66,    67,    68,     0,    69,    70,
      71,    72,    73,     0,     0,     0,     0,    74,    75,    76,
     213,     0,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     213,     0,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     213,   365,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     213,     0,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   213,   366,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   213,   368,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   213,   374,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   213,   433,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,     0,   213,   434,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   213,   454,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,   469,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   213,   473,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,     0,
       0,   213,   474,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   213,   518,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,     0,     0,     0,     0,     0,     0,     0,     0,   213,
     232,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,     0,
     372,   415,   213,   376,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   213,   373,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,     0,   375,   213,   420,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231
};

static const yytype_int16 yycheck[] =
{
      90,    61,   180,   181,   166,    19,    59,     4,   248,   249,
     384,    71,     4,     4,     4,   182,    10,    10,    78,     4,
      50,   267,     4,   470,     4,   511,     4,   560,     4,     4,
      58,    59,    60,    61,    62,     4,     4,    15,    50,     4,
      15,     4,   575,   529,   121,   447,    99,   100,   125,   102,
     103,     0,   499,   566,    32,   108,     4,    32,   544,    50,
     120,   121,     4,   113,   577,     4,     5,    10,     4,     5,
      48,     4,   474,    15,   113,   135,   136,     4,   138,    37,
     454,    50,    50,   122,    37,    50,   146,    50,    15,    49,
      32,   113,   122,    62,    62,   123,     4,    10,    67,    67,
     122,   113,    49,    16,   164,    32,    48,    15,   354,    89,
     111,   278,   559,   114,   115,   116,    85,    85,    32,    33,
      34,    90,    90,   121,    32,   123,   123,   121,   121,   126,
     121,   121,   192,   193,   126,   195,   196,   377,   123,   121,
     200,   201,   120,   203,   518,   121,   124,   207,   208,   209,
     210,   121,   122,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     3,     4,    49,   120,    87,
     240,   241,   121,   111,   123,   121,   114,   123,   121,   121,
     123,   123,   507,   120,   114,   510,   116,   287,   438,   121,
       4,   123,    30,    31,   107,   108,   109,     4,     5,    37,
      38,    39,   120,     3,     4,   118,    30,    31,    32,    33,
      34,   536,   275,    51,   277,    49,   541,   542,     4,     5,
      58,    59,    60,    61,    62,    63,    37,   121,    39,   123,
      68,    69,    70,    71,    72,    73,   561,    28,    29,    30,
      31,    32,    33,    34,   432,     3,     4,    37,    37,    37,
      37,   117,    10,    37,    37,    37,    94,    37,    37,    37,
      37,    37,   100,     4,     4,   289,     4,     4,     4,     4,
       4,     4,    30,    31,     4,   345,   346,   347,   348,    37,
      38,    39,     3,    96,     4,   123,   458,     4,   126,   127,
       4,     4,     4,    51,     4,     4,     4,     4,    37,     4,
      49,   121,   372,   373,   121,    63,   376,    50,    37,    37,
      68,    69,    70,    71,    72,    73,     6,     7,     8,     9,
      10,    11,    12,    13,    14,   121,    37,   121,     4,    16,
      16,     3,     4,    37,    37,    37,    94,    37,    10,    37,
      37,    37,   100,    37,   414,    10,     4,    37,   122,     4,
     123,   451,   123,   123,   123,   123,   123,   123,    30,    31,
     123,     4,     4,   121,     4,    37,    38,    39,   126,   127,
       4,     4,   442,     4,     4,   475,   446,     4,   448,    51,
      49,    37,   570,   114,    16,     4,    37,    16,   576,     4,
     122,    63,   580,     4,    89,   122,    68,    69,    70,    71,
      72,    73,   121,     3,     4,   123,   476,   123,   508,    79,
      16,    16,    80,    37,    49,   515,    37,   123,    10,    37,
     121,    49,    94,    82,   123,    10,    49,    37,   100,   122,
      30,    31,   123,    16,   123,   123,    37,    37,    38,    39,
      40,   123,   122,    37,    37,   123,    37,     3,     4,   121,
      37,    51,    50,    37,   126,   127,    37,    37,    37,   123,
      16,   123,   562,    63,    25,    16,   123,     4,    68,    69,
      70,    71,    72,    73,    30,    31,   123,   123,   123,    49,
       4,    37,    38,    39,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    50,    94,    51,   110,     3,     4,   170,
     100,   123,   194,   123,   187,   445,   529,    63,     4,   524,
     499,   559,    68,    69,    70,    71,    72,    73,   502,   396,
     422,   347,   550,    -1,    30,    31,   126,   127,   191,    -1,
      -1,    37,    38,    39,    -1,    -1,    -1,    -1,    94,    -1,
       4,    -1,    38,    -1,   100,    51,    -1,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    63,    -1,    55,
      -1,    -1,    68,    69,    70,    71,    72,    73,    32,    -1,
     126,   127,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    48,    -1,    -1,    -1,    94,    -1,
      -1,     4,    88,    -1,   100,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    -1,   101,   102,   103,   104,   105,
      -1,    -1,    -1,    -1,   110,   111,   112,    81,    -1,    83,
     126,   127,    -1,    87,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,   119,   120,    -1,   122,    -1,
     124,    74,    75,    76,    77,    78,    79,    -1,     4,    -1,
      -1,    84,    85,    86,    -1,    -1,    15,    90,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    -1,   111,    -1,
      36,     4,    -1,    -1,   117,    -1,    -1,    -1,    -1,   122,
      46,    47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    -1,    36,    -1,    38,    -1,    -1,    74,    75,
      76,    77,    78,    79,    -1,    -1,    -1,    -1,    84,    85,
      86,    -1,    55,    15,    90,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    88,   122,    -1,    91,    92,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,    -1,    -1,    -1,    -1,   110,   111,   112,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      15,   123,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   123,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   123,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,   123,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   123,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    15,   123,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    15,   123,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,   123,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    15,   123,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      -1,    15,   123,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    15,   123,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,
     121,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
     121,    37,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    15,   121,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,   121,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   107,   108,   109,   118,   129,   143,   144,   133,   134,
     131,   132,   222,   223,     0,   145,   135,     4,   113,   226,
     227,     4,    46,    47,    52,    53,    54,    55,    56,    64,
      65,    66,    67,    74,    75,    76,    77,    78,    79,    84,
      85,    86,    90,   111,   122,   146,   150,   152,   168,   170,
     179,   180,   182,   184,   214,   224,   225,     4,    38,    55,
      88,    91,    92,    93,    94,    95,    97,    98,    99,   101,
     102,   103,   104,   105,   110,   111,   112,   136,    10,    49,
     227,     6,     7,     8,     9,    10,    11,    12,    13,    14,
     166,    49,    49,    37,    37,     4,   130,    49,    37,    37,
      37,    37,    37,    37,    37,    37,    37,   147,    37,    37,
      37,   121,   122,   167,   117,     4,   130,     4,     3,     4,
      30,    31,    37,    38,    39,    51,    63,    68,    69,    70,
      71,    72,    73,    94,   100,   126,   127,   188,     4,     4,
     140,     4,   139,   138,     4,     4,     4,   188,     4,     3,
       4,   141,     4,   142,     4,    96,   188,   111,   114,   115,
     116,   229,   230,   186,   187,   186,   151,   215,     4,     4,
     148,     4,   172,     4,   130,   130,     4,   130,   123,   130,
     181,   183,     4,   185,     4,     5,   149,    37,   130,     4,
     142,    49,    10,   121,   137,    10,   121,   188,   188,   188,
      37,    37,    37,    37,    37,    37,    37,    37,    37,    37,
      37,   188,   188,    15,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   121,    10,   121,   188,   121,   121,     4,   121,
      10,   121,   188,   121,   121,     4,   121,     4,    16,    16,
      50,   122,   188,     4,    50,    62,    85,   152,   190,     4,
      50,   216,   121,   123,   123,   145,   173,   171,   123,   123,
     123,   123,   123,   121,   123,   169,   123,   169,   121,   185,
     123,     4,     5,   121,   123,   149,   123,    10,   123,   226,
     188,   188,   135,   188,   188,   123,   188,   188,     4,   188,
       4,     4,     4,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,     4,
       4,     4,   188,   188,     3,     4,     4,     4,    49,   230,
     230,   113,   122,   228,   114,   191,   196,   201,   217,     4,
      36,    37,   176,    50,   121,   172,   130,   130,   185,     4,
       5,   123,   186,    50,    36,   123,   123,   123,   123,   123,
     123,   123,   121,   121,   123,   121,    16,   231,   122,   122,
     113,   122,    37,    40,   188,   204,   205,    16,   188,   206,
     205,   188,   219,   121,     4,   126,   177,   178,    16,   172,
     123,   188,   188,     4,   188,   230,   116,    58,    59,    60,
      61,    62,   123,   203,    37,    37,   204,    16,    89,   189,
      16,    79,   207,   202,     4,    89,   220,     4,     4,   123,
     178,    80,   174,   123,   123,   123,    50,   122,    16,   123,
     188,    16,    37,   192,   189,    49,    37,   221,    37,   218,
     123,    10,   169,   230,   123,   188,    49,   197,   151,   188,
     220,   188,   122,   186,    82,   175,   122,    39,   204,   123,
     193,    49,    50,   123,   123,    10,    37,    16,     4,    15,
      32,    41,    42,    43,    44,    45,    48,    81,    83,    87,
     119,   120,   122,   124,   153,   154,   156,   159,   161,   162,
     163,   164,   168,   198,   220,   186,   188,    37,    37,    37,
      37,   157,   158,   161,    50,    37,   167,   210,   123,     4,
      87,   120,   153,   186,   160,   153,    48,   154,   155,    37,
     194,   186,     4,    50,   204,   123,    37,   123,   123,     4,
     156,   123,    37,   125,   169,   155,    25,   208,   123,   211,
     199,    16,   153,   123,   153,   154,   123,     4,   209,    49,
     208,   123,    10,    16,   165,   163,   209,   153,   186,     4,
     195,    50,   165,   123,   169,   212,   200,   209,   169,   165,
     213,   169
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   128,   129,   129,   129,   129,   130,   132,   131,   134,
     133,   135,   135,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   137,
     136,   136,   136,   138,   138,   138,   139,   139,   140,   140,
     141,   141,   141,   142,   142,   142,   144,   143,   145,   145,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   147,   146,
     146,   148,   146,   146,   146,   149,   149,   149,   149,   149,
     149,   150,   151,   151,   151,   152,   152,   153,   153,   153,
     154,   154,   154,   154,   155,   155,   156,   157,   156,   158,
     156,   159,   160,   159,   161,   161,   161,   161,   161,   161,
     161,   161,   162,   162,   163,   163,   164,   164,   164,   164,
     164,   165,   165,   166,   166,   166,   166,   166,   166,   166,
     166,   167,   167,   168,   168,   168,   169,   169,   170,   171,
     171,   171,   173,   172,   174,   175,   176,   176,   177,   177,
     178,   178,   179,   180,   180,   181,   181,   182,   183,   183,
     184,   184,   185,   185,   185,   187,   186,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   189,   189,   191,   192,   193,
     194,   195,   190,   196,   197,   198,   199,   200,   190,   201,
     202,   190,   203,   203,   203,   203,   203,   204,   204,   204,
     205,   205,   205,   205,   206,   206,   207,   207,   208,   208,
     209,   209,   210,   211,   212,   213,   210,   214,   215,   215,
     217,   218,   216,   219,   220,   220,   220,   221,   221,   223,
     222,   225,   224,   226,   226,   227,   227,   228,   228,   229,
     229,   229,   229,   229,   230,   230,   231,   230
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     1,     0,     4,     0,
       2,     3,     0,     2,     4,     1,     1,     2,     1,     4,
       4,     3,     2,     4,     3,     4,     4,     4,     4,     4,
       2,     2,     2,     4,     4,     2,     2,     2,     2,     0,
       5,     2,     0,     3,     2,     0,     1,     3,     1,     3,
       0,     1,     3,     1,     2,     3,     0,     2,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     8,     4,     1,     4,     0,     5,
       4,     0,     5,     4,     4,     1,     3,     2,     1,     3,
       2,     4,     2,     2,     0,     4,     2,     1,     1,     1,
       1,     5,     4,     8,     1,     3,     1,     0,     4,     0,
       5,     1,     0,     5,     2,     1,     1,     1,     4,     1,
       4,     4,     2,     1,     0,     1,     1,     1,     1,     1,
       1,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     6,     1,     0,     5,     2,
       3,     0,     0,     7,     3,     3,     0,     3,     1,     2,
       1,     2,     4,     4,     3,     3,     1,     4,     3,     0,
       1,     1,     0,     2,     3,     0,     2,     2,     3,     4,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       3,     3,     4,     1,     1,     4,     4,     4,     4,     4,
       4,     1,     6,     6,     6,     4,     0,     0,     0,     0,
       0,     0,    15,     0,     0,     0,     0,     0,    16,     0,
       0,     7,     1,     1,     1,     1,     1,     3,     0,     2,
       3,     2,     6,    10,     2,     1,     0,     1,     2,     0,
       0,     3,     0,     0,     0,     0,    11,     4,     0,     2,
       0,     0,     6,     1,     0,     3,     5,     0,     3,     0,
       2,     0,     5,     1,     2,     5,     6,     1,     2,     0,
       2,     4,     4,     8,     1,     3,     0,     6
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 7: /* $@1: %empty  */
#line 162 "ldgram.y"
                { ldlex_defsym(); }
#line 2185 "y.tab.c"
    break;

  case 8: /* defsym_expr: $@1 NAME '=' exp  */
#line 164 "ldgram.y"
                {
		  ldlex_popstate();
		  lang_add_assignment(exp_assop((yyvsp[-1].token),(yyvsp[-2].name),(yyvsp[0].etree)));
		}
#line 2194 "y.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 171 "ldgram.y"
                {
		  ldlex_mri_script ();
		  PUSH_ERROR (_("MRI style script"));
		}
#line 2203 "y.tab.c"
    break;

  case 10: /* mri_script_file: $@2 mri_script_lines  */
#line 176 "ldgram.y"
                {
		  ldlex_popstate ();
		  mri_draw_tree ();
		  POP_ERROR ();
		}
#line 2213 "y.tab.c"
    break;

  case 15: /* mri_script_command: NAME  */
#line 191 "ldgram.y"
                        {
			einfo(_("%P%F: unrecognised keyword in MRI style script '%s'\n"),(yyvsp[0].name));
			}
#line 2221 "y.tab.c"
    break;

  case 16: /* mri_script_command: LIST  */
#line 194 "ldgram.y"
                        {
			config.map_filename = "-";
			}
#line 2229 "y.tab.c"
    break;

  case 19: /* mri_script_command: PUBLIC NAME '=' exp  */
#line 200 "ldgram.y"
                        { mri_public((yyvsp[-2].name), (yyvsp[0].etree)); }
#line 2235 "y.tab.c"
    break;

  case 20: /* mri_script_command: PUBLIC NAME ',' exp  */
#line 202 "ldgram.y"
                        { mri_public((yyvsp[-2].name), (yyvsp[0].etree)); }
#line 2241 "y.tab.c"
    break;

  case 21: /* mri_script_command: PUBLIC NAME exp  */
#line 204 "ldgram.y"
                        { mri_public((yyvsp[-1].name), (yyvsp[0].etree)); }
#line 2247 "y.tab.c"
    break;

  case 22: /* mri_script_command: FORMAT NAME  */
#line 206 "ldgram.y"
                        { mri_format((yyvsp[0].name)); }
#line 2253 "y.tab.c"
    break;

  case 23: /* mri_script_command: SECT NAME ',' exp  */
#line 208 "ldgram.y"
                        { mri_output_section((yyvsp[-2].name), (yyvsp[0].etree));}
#line 2259 "y.tab.c"
    break;

  case 24: /* mri_script_command: SECT NAME exp  */
#line 210 "ldgram.y"
                        { mri_output_section((yyvsp[-1].name), (yyvsp[0].etree));}
#line 2265 "y.tab.c"
    break;

  case 25: /* mri_script_command: SECT NAME '=' exp  */
#line 212 "ldgram.y"
                        { mri_output_section((yyvsp[-2].name), (yyvsp[0].etree));}
#line 2271 "y.tab.c"
    break;

  case 26: /* mri_script_command: ALIGN_K NAME '=' exp  */
#line 214 "ldgram.y"
                        { mri_align((yyvsp[-2].name),(yyvsp[0].etree)); }
#line 2277 "y.tab.c"
    break;

  case 27: /* mri_script_command: ALIGN_K NAME ',' exp  */
#line 216 "ldgram.y"
                        { mri_align((yyvsp[-2].name),(yyvsp[0].etree)); }
#line 2283 "y.tab.c"
    break;

  case 28: /* mri_script_command: ALIGNMOD NAME '=' exp  */
#line 218 "ldgram.y"
                        { mri_alignmod((yyvsp[-2].name),(yyvsp[0].etree)); }
#line 2289 "y.tab.c"
    break;

  case 29: /* mri_script_command: ALIGNMOD NAME ',' exp  */
#line 220 "ldgram.y"
                        { mri_alignmod((yyvsp[-2].name),(yyvsp[0].etree)); }
#line 2295 "y.tab.c"
    break;

  case 32: /* mri_script_command: NAMEWORD NAME  */
#line 224 "ldgram.y"
                        { mri_name((yyvsp[0].name)); }
#line 2301 "y.tab.c"
    break;

  case 33: /* mri_script_command: ALIAS NAME ',' NAME  */
#line 226 "ldgram.y"
                        { mri_alias((yyvsp[-2].name),(yyvsp[0].name),0);}
#line 2307 "y.tab.c"
    break;

  case 34: /* mri_script_command: ALIAS NAME ',' INT  */
#line 228 "ldgram.y"
                        { mri_alias((yyvsp[-2].name),0,(int) (yyvsp[0].integer));}
#line 2313 "y.tab.c"
    break;

  case 35: /* mri_script_command: BASE exp  */
#line 230 "ldgram.y"
                        { mri_base((yyvsp[0].etree)); }
#line 2319 "y.tab.c"
    break;

  case 36: /* mri_script_command: TRUNCATE INT  */
#line 232 "ldgram.y"
                {  mri_truncate((unsigned int) (yyvsp[0].integer)); }
#line 2325 "y.tab.c"
    break;

  case 39: /* $@3: %empty  */
#line 236 "ldgram.y"
                { ldfile_open_command_file ((yyvsp[0].name)); }
#line 2331 "y.tab.c"
    break;

  case 41: /* mri_script_command: START NAME  */
#line 238 "ldgram.y"
                { lang_add_entry ((yyvsp[0].name), false); }
#line 2337 "y.tab.c"
    break;

  case 43: /* ordernamelist: ordernamelist ',' NAME  */
#line 243 "ldgram.y"
                                             { mri_order((yyvsp[0].name)); }
#line 2343 "y.tab.c"
    break;

  case 44: /* ordernamelist: ordernamelist NAME  */
#line 244 "ldgram.y"
                                          { mri_order((yyvsp[0].name)); }
#line 2349 "y.tab.c"
    break;

  case 46: /* mri_load_name_list: NAME  */
#line 250 "ldgram.y"
                        { mri_load((yyvsp[0].name)); }
#line 2355 "y.tab.c"
    break;

  case 47: /* mri_load_name_list: mri_load_name_list ',' NAME  */
#line 251 "ldgram.y"
                                            { mri_load((yyvsp[0].name)); }
#line 2361 "y.tab.c"
    break;

  case 48: /* mri_abs_name_list: NAME  */
#line 256 "ldgram.y"
                        { mri_only_load((yyvsp[0].name)); }
#line 2367 "y.tab.c"
    break;

  case 49: /* mri_abs_name_list: mri_abs_name_list ',' NAME  */
#line 258 "ldgram.y"
                        { mri_only_load((yyvsp[0].name)); }
#line 2373 "y.tab.c"
    break;

  case 50: /* casesymlist: %empty  */
#line 262 "ldgram.y"
                      { (yyval.name) = NULL; }
#line 2379 "y.tab.c"
    break;

  case 53: /* extern_name_list: NAME  */
#line 269 "ldgram.y"
                        { ldlang_add_undef ((yyvsp[0].name)); }
#line 2385 "y.tab.c"
    break;

  case 54: /* extern_name_list: extern_name_list NAME  */
#line 271 "ldgram.y"
                        { ldlang_add_undef ((yyvsp[0].name)); }
#line 2391 "y.tab.c"
    break;

  case 55: /* extern_name_list: extern_name_list ',' NAME  */
#line 273 "ldgram.y"
                        { ldlang_add_undef ((yyvsp[0].name)); }
#line 2397 "y.tab.c"
    break;

  case 56: /* $@4: %empty  */
#line 277 "ldgram.y"
        {
	 ldlex_both();
	}
#line 2405 "y.tab.c"
    break;

  case 57: /* script_file: $@4 ifile_list  */
#line 281 "ldgram.y"
        {
	ldlex_popstate();
	}
#line 2413 "y.tab.c"
    break;

  case 70: /* ifile_p1: TARGET_K '(' NAME ')'  */
#line 306 "ldgram.y"
                { lang_add_target((yyvsp[-1].name)); }
#line 2419 "y.tab.c"
    break;

  case 71: /* ifile_p1: SEARCH_DIR '(' filename ')'  */
#line 308 "ldgram.y"
                { ldfile_add_library_path ((yyvsp[-1].name), false); }
#line 2425 "y.tab.c"
    break;

  case 72: /* ifile_p1: OUTPUT '(' filename ')'  */
#line 310 "ldgram.y"
                { lang_add_output((yyvsp[-1].name), 1); }
#line 2431 "y.tab.c"
    break;

  case 73: /* ifile_p1: OUTPUT_FORMAT '(' NAME ')'  */
#line 312 "ldgram.y"
                  { lang_add_output_format ((yyvsp[-1].name), (char *) NULL,
					    (char *) NULL, 1); }
#line 2438 "y.tab.c"
    break;

  case 74: /* ifile_p1: OUTPUT_FORMAT '(' NAME ',' NAME ',' NAME ')'  */
#line 315 "ldgram.y"
                  { lang_add_output_format ((yyvsp[-5].name), (yyvsp[-3].name), (yyvsp[-1].name), 1); }
#line 2444 "y.tab.c"
    break;

  case 75: /* ifile_p1: OUTPUT_ARCH '(' NAME ')'  */
#line 317 "ldgram.y"
                  { ldfile_set_output_arch((yyvsp[-1].name)); }
#line 2450 "y.tab.c"
    break;

  case 76: /* ifile_p1: FORCE_COMMON_ALLOCATION  */
#line 319 "ldgram.y"
                { command_line.force_common_definition = true ; }
#line 2456 "y.tab.c"
    break;

  case 78: /* $@5: %empty  */
#line 322 "ldgram.y"
                  { lang_enter_group (); }
#line 2462 "y.tab.c"
    break;

  case 79: /* ifile_p1: GROUP $@5 '(' input_list ')'  */
#line 324 "ldgram.y"
                  { lang_leave_group (); }
#line 2468 "y.tab.c"
    break;

  case 80: /* ifile_p1: MAP '(' filename ')'  */
#line 326 "ldgram.y"
                { lang_add_map((yyvsp[-1].name)); }
#line 2474 "y.tab.c"
    break;

  case 81: /* $@6: %empty  */
#line 328 "ldgram.y"
                { ldfile_open_command_file((yyvsp[0].name)); }
#line 2480 "y.tab.c"
    break;

  case 83: /* ifile_p1: NOCROSSREFS '(' nocrossref_list ')'  */
#line 330 "ldgram.y"
                {
		  lang_add_nocrossref ((yyvsp[-1].nocrossref));
		}
#line 2488 "y.tab.c"
    break;

  case 85: /* input_list: NAME  */
#line 338 "ldgram.y"
                { lang_add_input_file((yyvsp[0].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
#line 2495 "y.tab.c"
    break;

  case 86: /* input_list: input_list ',' NAME  */
#line 341 "ldgram.y"
                { lang_add_input_file((yyvsp[0].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
#line 2502 "y.tab.c"
    break;

  case 87: /* input_list: input_list NAME  */
#line 344 "ldgram.y"
                { lang_add_input_file((yyvsp[0].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
#line 2509 "y.tab.c"
    break;

  case 88: /* input_list: LNAME  */
#line 347 "ldgram.y"
                { lang_add_input_file((yyvsp[0].name),lang_input_file_is_l_enum,
				 (char *)NULL); }
#line 2516 "y.tab.c"
    break;

  case 89: /* input_list: input_list ',' LNAME  */
#line 350 "ldgram.y"
                { lang_add_input_file((yyvsp[0].name),lang_input_file_is_l_enum,
				 (char *)NULL); }
#line 2523 "y.tab.c"
    break;

  case 90: /* input_list: input_list LNAME  */
#line 353 "ldgram.y"
                { lang_add_input_file((yyvsp[0].name),lang_input_file_is_l_enum,
				 (char *)NULL); }
#line 2530 "y.tab.c"
    break;

  case 95: /* statement_anywhere: ENTRY '(' NAME ')'  */
#line 369 "ldgram.y"
                { lang_add_entry ((yyvsp[-1].name), false); }
#line 2536 "y.tab.c"
    break;

  case 97: /* wildcard_name: NAME  */
#line 377 "ldgram.y"
                        {
			  (yyval.cname) = (yyvsp[0].name);
			}
#line 2544 "y.tab.c"
    break;

  case 98: /* wildcard_name: '*'  */
#line 381 "ldgram.y"
                        {
			  (yyval.cname) = "*";
			}
#line 2552 "y.tab.c"
    break;

  case 99: /* wildcard_name: '?'  */
#line 385 "ldgram.y"
                        {
			  (yyval.cname) = "?";
			}
#line 2560 "y.tab.c"
    break;

  case 100: /* wildcard_spec: wildcard_name  */
#line 392 "ldgram.y"
                        {
			  (yyval.wildcard).name = (yyvsp[0].cname);
			  (yyval.wildcard).sorted = false;
			  (yyval.wildcard).exclude_name = NULL;
			}
#line 2570 "y.tab.c"
    break;

  case 101: /* wildcard_spec: EXCLUDE_FILE '(' wildcard_name ')' wildcard_name  */
#line 398 "ldgram.y"
                        {
			  (yyval.wildcard).name = (yyvsp[0].cname);
			  (yyval.wildcard).sorted = false;
			  (yyval.wildcard).exclude_name = (yyvsp[-2].cname);
			}
#line 2580 "y.tab.c"
    break;

  case 102: /* wildcard_spec: SORT '(' wildcard_name ')'  */
#line 404 "ldgram.y"
                        {
			  (yyval.wildcard).name = (yyvsp[-1].cname);
			  (yyval.wildcard).sorted = true;
			  (yyval.wildcard).exclude_name = NULL;
			}
#line 2590 "y.tab.c"
    break;

  case 103: /* wildcard_spec: SORT '(' EXCLUDE_FILE '(' wildcard_name ')' wildcard_name ')'  */
#line 410 "ldgram.y"
                        {
			  (yyval.wildcard).name = (yyvsp[-1].cname);
			  (yyval.wildcard).sorted = true;
			  (yyval.wildcard).exclude_name = (yyvsp[-3].cname);
			}
#line 2600 "y.tab.c"
    break;

  case 104: /* file_NAME_list: wildcard_spec  */
#line 420 "ldgram.y"
                        {
			  lang_add_wild ((yyvsp[0].wildcard).name, (yyvsp[0].wildcard).sorted,
					 current_file.name,
					 current_file.sorted,
					 ldgram_had_keep, (yyvsp[0].wildcard).exclude_name);
			}
#line 2611 "y.tab.c"
    break;

  case 105: /* file_NAME_list: file_NAME_list opt_comma wildcard_spec  */
#line 427 "ldgram.y"
                        {
			  lang_add_wild ((yyvsp[0].wildcard).name, (yyvsp[0].wildcard).sorted,
					 current_file.name,
					 current_file.sorted,
					 ldgram_had_keep, (yyvsp[0].wildcard).exclude_name);
			}
#line 2622 "y.tab.c"
    break;

  case 106: /* input_section_spec_no_keep: NAME  */
#line 437 "ldgram.y"
                        {
			  lang_add_wild (NULL, false, (yyvsp[0].name), false,
					 ldgram_had_keep, NULL);
			}
#line 2631 "y.tab.c"
    break;

  case 107: /* $@7: %empty  */
#line 442 "ldgram.y"
                        {
			  current_file.name = NULL;
			  current_file.sorted = false;
			}
#line 2640 "y.tab.c"
    break;

  case 109: /* $@8: %empty  */
#line 448 "ldgram.y"
                        {
			  current_file = (yyvsp[0].wildcard);
			  /* '*' matches any file name.  */
			  if (strcmp (current_file.name, "*") == 0)
			    current_file.name = NULL;
			}
#line 2651 "y.tab.c"
    break;

  case 112: /* $@9: %empty  */
#line 460 "ldgram.y"
                        { ldgram_had_keep = true; }
#line 2657 "y.tab.c"
    break;

  case 113: /* input_section_spec: KEEP '(' $@9 input_section_spec_no_keep ')'  */
#line 462 "ldgram.y"
                        { ldgram_had_keep = false; }
#line 2663 "y.tab.c"
    break;

  case 115: /* statement: CREATE_OBJECT_SYMBOLS  */
#line 468 "ldgram.y"
                {
 		lang_add_attribute(lang_object_symbols_statement_enum); 
	      	}
#line 2671 "y.tab.c"
    break;

  case 117: /* statement: CONSTRUCTORS  */
#line 473 "ldgram.y"
                {
 		
		  lang_add_attribute(lang_constructors_statement_enum); 
		}
#line 2680 "y.tab.c"
    break;

  case 118: /* statement: SORT '(' CONSTRUCTORS ')'  */
#line 478 "ldgram.y"
                {
		  constructors_sorted = true;
		  lang_add_attribute (lang_constructors_statement_enum);
		}
#line 2689 "y.tab.c"
    break;

  case 120: /* statement: length '(' mustbe_exp ')'  */
#line 484 "ldgram.y"
                        {
			lang_add_data((int) (yyvsp[-3].integer),(yyvsp[-1].etree));
			}
#line 2697 "y.tab.c"
    break;

  case 121: /* statement: FILL '(' mustbe_exp ')'  */
#line 489 "ldgram.y"
                        {
			  lang_add_fill
			    (exp_get_value_int((yyvsp[-1].etree),
					       0,
					       "fill value",
					       lang_first_phase_enum));
			}
#line 2709 "y.tab.c"
    break;

  case 126: /* length: QUAD  */
#line 510 "ldgram.y"
                        { (yyval.integer) = (yyvsp[0].token); }
#line 2715 "y.tab.c"
    break;

  case 127: /* length: SQUAD  */
#line 512 "ldgram.y"
                        { (yyval.integer) = (yyvsp[0].token); }
#line 2721 "y.tab.c"
    break;

  case 128: /* length: LONG  */
#line 514 "ldgram.y"
                        { (yyval.integer) = (yyvsp[0].token); }
#line 2727 "y.tab.c"
    break;

  case 129: /* length: SHORT  */
#line 516 "ldgram.y"
                        { (yyval.integer) = (yyvsp[0].token); }
#line 2733 "y.tab.c"
    break;

  case 130: /* length: BYTE  */
#line 518 "ldgram.y"
                        { (yyval.integer) = (yyvsp[0].token); }
#line 2739 "y.tab.c"
    break;

  case 131: /* fill_opt: '=' mustbe_exp  */
#line 523 "ldgram.y"
                {
		  (yyval.integer) =	 exp_get_value_int((yyvsp[0].etree),
					   0,
					   "fill value",
					   lang_first_phase_enum);
		}
#line 2750 "y.tab.c"
    break;

  case 132: /* fill_opt: %empty  */
#line 529 "ldgram.y"
                { (yyval.integer) = 0; }
#line 2756 "y.tab.c"
    break;

  case 133: /* assign_op: PLUSEQ  */
#line 536 "ldgram.y"
                        { (yyval.token) = '+'; }
#line 2762 "y.tab.c"
    break;

  case 134: /* assign_op: MINUSEQ  */
#line 538 "ldgram.y"
                        { (yyval.token) = '-'; }
#line 2768 "y.tab.c"
    break;

  case 135: /* assign_op: MULTEQ  */
#line 540 "ldgram.y"
                        { (yyval.token) = '*'; }
#line 2774 "y.tab.c"
    break;

  case 136: /* assign_op: DIVEQ  */
#line 542 "ldgram.y"
                        { (yyval.token) = '/'; }
#line 2780 "y.tab.c"
    break;

  case 137: /* assign_op: LSHIFTEQ  */
#line 544 "ldgram.y"
                        { (yyval.token) = LSHIFT; }
#line 2786 "y.tab.c"
    break;

  case 138: /* assign_op: RSHIFTEQ  */
#line 546 "ldgram.y"
                        { (yyval.token) = RSHIFT; }
#line 2792 "y.tab.c"
    break;

  case 139: /* assign_op: ANDEQ  */
#line 548 "ldgram.y"
                        { (yyval.token) = '&'; }
#line 2798 "y.tab.c"
    break;

  case 140: /* assign_op: OREQ  */
#line 550 "ldgram.y"
                        { (yyval.token) = '|'; }
#line 2804 "y.tab.c"
    break;

  case 143: /* assignment: NAME '=' mustbe_exp  */
#line 560 "ldgram.y"
                {
		  lang_add_assignment (exp_assop ((yyvsp[-1].token), (yyvsp[-2].name), (yyvsp[0].etree)));
		}
#line 2812 "y.tab.c"
    break;

  case 144: /* assignment: NAME assign_op mustbe_exp  */
#line 564 "ldgram.y"
                {
		  lang_add_assignment (exp_assop ('=', (yyvsp[-2].name),
						  exp_binop ((yyvsp[-1].token),
							     exp_nameop (NAME,
									 (yyvsp[-2].name)),
							     (yyvsp[0].etree))));
		}
#line 2824 "y.tab.c"
    break;

  case 145: /* assignment: PROVIDE '(' NAME '=' mustbe_exp ')'  */
#line 572 "ldgram.y"
                {
		  lang_add_assignment (exp_provide ((yyvsp[-3].name), (yyvsp[-1].etree)));
		}
#line 2832 "y.tab.c"
    break;

  case 152: /* $@10: %empty  */
#line 594 "ldgram.y"
                        { region = lang_memory_region_lookup((yyvsp[0].name)); }
#line 2838 "y.tab.c"
    break;

  case 154: /* origin_spec: ORIGIN '=' mustbe_exp  */
#line 600 "ldgram.y"
                { region->current =
		 region->origin =
		 exp_get_vma((yyvsp[0].etree), 0L,"origin", lang_first_phase_enum);
}
#line 2847 "y.tab.c"
    break;

  case 155: /* length_spec: LENGTH '=' mustbe_exp  */
#line 608 "ldgram.y"
               { region->length = exp_get_vma((yyvsp[0].etree),
					       ~((bfd_vma)0),
					       "length",
					       lang_first_phase_enum);
		}
#line 2857 "y.tab.c"
    break;

  case 156: /* attributes_opt: %empty  */
#line 617 "ldgram.y"
                  { /* dummy action to avoid bison 1.25 error message */ }
#line 2863 "y.tab.c"
    break;

  case 160: /* attributes_string: NAME  */
#line 628 "ldgram.y"
                  { lang_set_flags (region, (yyvsp[0].name), 0); }
#line 2869 "y.tab.c"
    break;

  case 161: /* attributes_string: '!' NAME  */
#line 630 "ldgram.y"
                  { lang_set_flags (region, (yyvsp[0].name), 1); }
#line 2875 "y.tab.c"
    break;

  case 162: /* startup: STARTUP '(' filename ')'  */
#line 635 "ldgram.y"
                { lang_startup((yyvsp[-1].name)); }
#line 2881 "y.tab.c"
    break;

  case 164: /* high_level_library: HLL '(' ')'  */
#line 641 "ldgram.y"
                        { ldemul_hll((char *)NULL); }
#line 2887 "y.tab.c"
    break;

  case 165: /* high_level_library_NAME_list: high_level_library_NAME_list opt_comma filename  */
#line 646 "ldgram.y"
                        { ldemul_hll((yyvsp[0].name)); }
#line 2893 "y.tab.c"
    break;

  case 166: /* high_level_library_NAME_list: filename  */
#line 648 "ldgram.y"
                        { ldemul_hll((yyvsp[0].name)); }
#line 2899 "y.tab.c"
    break;

  case 168: /* low_level_library_NAME_list: low_level_library_NAME_list opt_comma filename  */
#line 656 "ldgram.y"
                        { ldemul_syslib((yyvsp[0].name)); }
#line 2905 "y.tab.c"
    break;

  case 170: /* floating_point_support: FLOAT  */
#line 662 "ldgram.y"
                        { lang_float(true); }
#line 2911 "y.tab.c"
    break;

  case 171: /* floating_point_support: NOFLOAT  */
#line 664 "ldgram.y"
                        { lang_float(false); }
#line 2917 "y.tab.c"
    break;

  case 172: /* nocrossref_list: %empty  */
#line 669 "ldgram.y"
                {
		  (yyval.nocrossref) = NULL;
		}
#line 2925 "y.tab.c"
    break;

  case 173: /* nocrossref_list: NAME nocrossref_list  */
#line 673 "ldgram.y"
                {
		  struct lang_nocrossref *n;

		  n = (struct lang_nocrossref *) xmalloc (sizeof *n);
		  n->name = (yyvsp[-1].name);
		  n->next = (yyvsp[0].nocrossref);
		  (yyval.nocrossref) = n;
		}
#line 2938 "y.tab.c"
    break;

  case 174: /* nocrossref_list: NAME ',' nocrossref_list  */
#line 682 "ldgram.y"
                {
		  struct lang_nocrossref *n;

		  n = (struct lang_nocrossref *) xmalloc (sizeof *n);
		  n->name = (yyvsp[-2].name);
		  n->next = (yyvsp[0].nocrossref);
		  (yyval.nocrossref) = n;
		}
#line 2951 "y.tab.c"
    break;

  case 175: /* $@11: %empty  */
#line 692 "ldgram.y"
                         { ldlex_expression(); }
#line 2957 "y.tab.c"
    break;

  case 176: /* mustbe_exp: $@11 exp  */
#line 694 "ldgram.y"
                         { ldlex_popstate(); (yyval.etree)=(yyvsp[0].etree);}
#line 2963 "y.tab.c"
    break;

  case 177: /* exp: '-' exp  */
#line 699 "ldgram.y"
                        { (yyval.etree) = exp_unop('-', (yyvsp[0].etree)); }
#line 2969 "y.tab.c"
    break;

  case 178: /* exp: '(' exp ')'  */
#line 701 "ldgram.y"
                        { (yyval.etree) = (yyvsp[-1].etree); }
#line 2975 "y.tab.c"
    break;

  case 179: /* exp: NEXT '(' exp ')'  */
#line 703 "ldgram.y"
                        { (yyval.etree) = exp_unop((int) (yyvsp[-3].integer),(yyvsp[-1].etree)); }
#line 2981 "y.tab.c"
    break;

  case 180: /* exp: '!' exp  */
#line 705 "ldgram.y"
                        { (yyval.etree) = exp_unop('!', (yyvsp[0].etree)); }
#line 2987 "y.tab.c"
    break;

  case 181: /* exp: '+' exp  */
#line 707 "ldgram.y"
                        { (yyval.etree) = (yyvsp[0].etree); }
#line 2993 "y.tab.c"
    break;

  case 182: /* exp: '~' exp  */
#line 709 "ldgram.y"
                        { (yyval.etree) = exp_unop('~', (yyvsp[0].etree));}
#line 2999 "y.tab.c"
    break;

  case 183: /* exp: exp '*' exp  */
#line 712 "ldgram.y"
                        { (yyval.etree) = exp_binop('*', (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3005 "y.tab.c"
    break;

  case 184: /* exp: exp '/' exp  */
#line 714 "ldgram.y"
                        { (yyval.etree) = exp_binop('/', (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3011 "y.tab.c"
    break;

  case 185: /* exp: exp '%' exp  */
#line 716 "ldgram.y"
                        { (yyval.etree) = exp_binop('%', (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3017 "y.tab.c"
    break;

  case 186: /* exp: exp '+' exp  */
#line 718 "ldgram.y"
                        { (yyval.etree) = exp_binop('+', (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3023 "y.tab.c"
    break;

  case 187: /* exp: exp '-' exp  */
#line 720 "ldgram.y"
                        { (yyval.etree) = exp_binop('-' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3029 "y.tab.c"
    break;

  case 188: /* exp: exp LSHIFT exp  */
#line 722 "ldgram.y"
                        { (yyval.etree) = exp_binop(LSHIFT , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3035 "y.tab.c"
    break;

  case 189: /* exp: exp RSHIFT exp  */
#line 724 "ldgram.y"
                        { (yyval.etree) = exp_binop(RSHIFT , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3041 "y.tab.c"
    break;

  case 190: /* exp: exp EQ exp  */
#line 726 "ldgram.y"
                        { (yyval.etree) = exp_binop(EQ , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3047 "y.tab.c"
    break;

  case 191: /* exp: exp NE exp  */
#line 728 "ldgram.y"
                        { (yyval.etree) = exp_binop(NE , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3053 "y.tab.c"
    break;

  case 192: /* exp: exp LE exp  */
#line 730 "ldgram.y"
                        { (yyval.etree) = exp_binop(LE , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3059 "y.tab.c"
    break;

  case 193: /* exp: exp GE exp  */
#line 732 "ldgram.y"
                        { (yyval.etree) = exp_binop(GE , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3065 "y.tab.c"
    break;

  case 194: /* exp: exp '<' exp  */
#line 734 "ldgram.y"
                        { (yyval.etree) = exp_binop('<' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3071 "y.tab.c"
    break;

  case 195: /* exp: exp '>' exp  */
#line 736 "ldgram.y"
                        { (yyval.etree) = exp_binop('>' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3077 "y.tab.c"
    break;

  case 196: /* exp: exp '&' exp  */
#line 738 "ldgram.y"
                        { (yyval.etree) = exp_binop('&' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3083 "y.tab.c"
    break;

  case 197: /* exp: exp '^' exp  */
#line 740 "ldgram.y"
                        { (yyval.etree) = exp_binop('^' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3089 "y.tab.c"
    break;

  case 198: /* exp: exp '|' exp  */
#line 742 "ldgram.y"
                        { (yyval.etree) = exp_binop('|' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3095 "y.tab.c"
    break;

  case 199: /* exp: exp '?' exp ':' exp  */
#line 744 "ldgram.y"
                        { (yyval.etree) = exp_trinop('?' , (yyvsp[-4].etree), (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3101 "y.tab.c"
    break;

  case 200: /* exp: exp ANDAND exp  */
#line 746 "ldgram.y"
                        { (yyval.etree) = exp_binop(ANDAND , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3107 "y.tab.c"
    break;

  case 201: /* exp: exp OROR exp  */
#line 748 "ldgram.y"
                        { (yyval.etree) = exp_binop(OROR , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 3113 "y.tab.c"
    break;

  case 202: /* exp: DEFINED '(' NAME ')'  */
#line 750 "ldgram.y"
                        { (yyval.etree) = exp_nameop(DEFINED, (yyvsp[-1].name)); }
#line 3119 "y.tab.c"
    break;

  case 203: /* exp: INT  */
#line 752 "ldgram.y"
                        { (yyval.etree) = exp_intop((yyvsp[0].integer)); }
#line 3125 "y.tab.c"
    break;

  case 204: /* exp: SIZEOF_HEADERS  */
#line 754 "ldgram.y"
                        { (yyval.etree) = exp_nameop(SIZEOF_HEADERS,0); }
#line 3131 "y.tab.c"
    break;

  case 205: /* exp: SIZEOF '(' NAME ')'  */
#line 757 "ldgram.y"
                        { (yyval.etree) = exp_nameop(SIZEOF,(yyvsp[-1].name)); }
#line 3137 "y.tab.c"
    break;

  case 206: /* exp: ADDR '(' NAME ')'  */
#line 759 "ldgram.y"
                        { (yyval.etree) = exp_nameop(ADDR,(yyvsp[-1].name)); }
#line 3143 "y.tab.c"
    break;

  case 207: /* exp: LOADADDR '(' NAME ')'  */
#line 761 "ldgram.y"
                        { (yyval.etree) = exp_nameop(LOADADDR,(yyvsp[-1].name)); }
#line 3149 "y.tab.c"
    break;

  case 208: /* exp: ABSOLUTE '(' exp ')'  */
#line 763 "ldgram.y"
                        { (yyval.etree) = exp_unop(ABSOLUTE, (yyvsp[-1].etree)); }
#line 3155 "y.tab.c"
    break;

  case 209: /* exp: ALIGN_K '(' exp ')'  */
#line 765 "ldgram.y"
                        { (yyval.etree) = exp_unop(ALIGN_K,(yyvsp[-1].etree)); }
#line 3161 "y.tab.c"
    break;

  case 210: /* exp: BLOCK '(' exp ')'  */
#line 767 "ldgram.y"
                        { (yyval.etree) = exp_unop(ALIGN_K,(yyvsp[-1].etree)); }
#line 3167 "y.tab.c"
    break;

  case 211: /* exp: NAME  */
#line 769 "ldgram.y"
                        { (yyval.etree) = exp_nameop(NAME,(yyvsp[0].name)); }
#line 3173 "y.tab.c"
    break;

  case 212: /* exp: MAX_K '(' exp ',' exp ')'  */
#line 771 "ldgram.y"
                        { (yyval.etree) = exp_binop (MAX_K, (yyvsp[-3].etree), (yyvsp[-1].etree) ); }
#line 3179 "y.tab.c"
    break;

  case 213: /* exp: MIN_K '(' exp ',' exp ')'  */
#line 773 "ldgram.y"
                        { (yyval.etree) = exp_binop (MIN_K, (yyvsp[-3].etree), (yyvsp[-1].etree) ); }
#line 3185 "y.tab.c"
    break;

  case 214: /* exp: ASSERT_K '(' exp ',' NAME ')'  */
#line 775 "ldgram.y"
                        { (yyval.etree) = exp_assert ((yyvsp[-3].etree), (yyvsp[-1].name)); }
#line 3191 "y.tab.c"
    break;

  case 215: /* opt_at: AT '(' exp ')'  */
#line 780 "ldgram.y"
                               { (yyval.etree) = (yyvsp[-1].etree); }
#line 3197 "y.tab.c"
    break;

  case 216: /* opt_at: %empty  */
#line 781 "ldgram.y"
                { (yyval.etree) = 0; }
#line 3203 "y.tab.c"
    break;

  case 217: /* $@12: %empty  */
#line 784 "ldgram.y"
                                { ldlex_expression(); }
#line 3209 "y.tab.c"
    break;

  case 218: /* $@13: %empty  */
#line 786 "ldgram.y"
                                { ldlex_popstate (); ldlex_script (); }
#line 3215 "y.tab.c"
    break;

  case 219: /* $@14: %empty  */
#line 788 "ldgram.y"
                        {
			  lang_enter_output_section_statement((yyvsp[-5].name), (yyvsp[-3].etree),
							      sectype,
							      0, 0, 0, (yyvsp[-2].etree));
			}
#line 3225 "y.tab.c"
    break;

  case 220: /* $@15: %empty  */
#line 794 "ldgram.y"
                    { ldlex_popstate (); ldlex_expression (); }
#line 3231 "y.tab.c"
    break;

  case 221: /* $@16: %empty  */
#line 796 "ldgram.y"
                {
		  ldlex_popstate ();
		  lang_leave_output_section_statement ((yyvsp[0].integer), (yyvsp[-2].name), (yyvsp[-1].section_phdr));
		}
#line 3240 "y.tab.c"
    break;

  case 223: /* $@17: %empty  */
#line 802 "ldgram.y"
                        { ldlex_expression (); }
#line 3246 "y.tab.c"
    break;

  case 224: /* $@18: %empty  */
#line 804 "ldgram.y"
                        { ldlex_popstate (); ldlex_script (); }
#line 3252 "y.tab.c"
    break;

  case 225: /* $@19: %empty  */
#line 806 "ldgram.y"
                        {
			  lang_enter_overlay ((yyvsp[-4].etree), (yyvsp[-2].etree), (int) (yyvsp[-3].integer));
			}
#line 3260 "y.tab.c"
    break;

  case 226: /* $@20: %empty  */
#line 811 "ldgram.y"
                        { ldlex_popstate (); ldlex_expression (); }
#line 3266 "y.tab.c"
    break;

  case 227: /* $@21: %empty  */
#line 813 "ldgram.y"
                        {
			  ldlex_popstate ();
			  lang_leave_overlay ((yyvsp[0].integer), (yyvsp[-2].name), (yyvsp[-1].section_phdr));
			}
#line 3275 "y.tab.c"
    break;

  case 229: /* $@22: %empty  */
#line 822 "ldgram.y"
                      { ldlex_expression (); }
#line 3281 "y.tab.c"
    break;

  case 230: /* $@23: %empty  */
#line 824 "ldgram.y"
                {
		  ldlex_popstate ();
		  lang_add_assignment (exp_assop ('=', ".", (yyvsp[0].etree)));
		}
#line 3290 "y.tab.c"
    break;

  case 232: /* type: NOLOAD  */
#line 832 "ldgram.y"
                   { sectype = noload_section; }
#line 3296 "y.tab.c"
    break;

  case 233: /* type: DSECT  */
#line 833 "ldgram.y"
                   { sectype = dsect_section; }
#line 3302 "y.tab.c"
    break;

  case 234: /* type: COPY  */
#line 834 "ldgram.y"
                   { sectype = copy_section; }
#line 3308 "y.tab.c"
    break;

  case 235: /* type: INFO  */
#line 835 "ldgram.y"
                   { sectype = info_section; }
#line 3314 "y.tab.c"
    break;

  case 236: /* type: OVERLAY  */
#line 836 "ldgram.y"
                   { sectype = overlay_section; }
#line 3320 "y.tab.c"
    break;

  case 238: /* atype: %empty  */
#line 841 "ldgram.y"
                            { sectype = normal_section; }
#line 3326 "y.tab.c"
    break;

  case 239: /* atype: '(' ')'  */
#line 842 "ldgram.y"
                        { sectype = normal_section; }
#line 3332 "y.tab.c"
    break;

  case 240: /* opt_exp_with_type: exp atype ':'  */
#line 846 "ldgram.y"
                                        { (yyval.etree) = (yyvsp[-2].etree); }
#line 3338 "y.tab.c"
    break;

  case 241: /* opt_exp_with_type: atype ':'  */
#line 847 "ldgram.y"
                                        { (yyval.etree) = (etree_type *)NULL;  }
#line 3344 "y.tab.c"
    break;

  case 242: /* opt_exp_with_type: BIND '(' exp ')' atype ':'  */
#line 852 "ldgram.y"
                                           { (yyval.etree) = (yyvsp[-3].etree); }
#line 3350 "y.tab.c"
    break;

  case 243: /* opt_exp_with_type: BIND '(' exp ')' BLOCK '(' exp ')' atype ':'  */
#line 854 "ldgram.y"
                { (yyval.etree) = (yyvsp[-7].etree); }
#line 3356 "y.tab.c"
    break;

  case 244: /* opt_exp_without_type: exp ':'  */
#line 858 "ldgram.y"
                                { (yyval.etree) = (yyvsp[-1].etree); }
#line 3362 "y.tab.c"
    break;

  case 245: /* opt_exp_without_type: ':'  */
#line 859 "ldgram.y"
                                { (yyval.etree) = (etree_type *) NULL;  }
#line 3368 "y.tab.c"
    break;

  case 246: /* opt_nocrossrefs: %empty  */
#line 864 "ldgram.y"
                        { (yyval.integer) = 0; }
#line 3374 "y.tab.c"
    break;

  case 247: /* opt_nocrossrefs: NOCROSSREFS  */
#line 866 "ldgram.y"
                        { (yyval.integer) = 1; }
#line 3380 "y.tab.c"
    break;

  case 248: /* memspec_opt: '>' NAME  */
#line 871 "ldgram.y"
                { (yyval.name) = (yyvsp[0].name); }
#line 3386 "y.tab.c"
    break;

  case 249: /* memspec_opt: %empty  */
#line 872 "ldgram.y"
                { (yyval.name) = "*default*"; }
#line 3392 "y.tab.c"
    break;

  case 250: /* phdr_opt: %empty  */
#line 877 "ldgram.y"
                {
		  (yyval.section_phdr) = NULL;
		}
#line 3400 "y.tab.c"
    break;

  case 251: /* phdr_opt: phdr_opt ':' NAME  */
#line 881 "ldgram.y"
                {
		  struct lang_output_section_phdr_list *n;

		  n = ((struct lang_output_section_phdr_list *)
		       xmalloc (sizeof *n));
		  n->name = (yyvsp[0].name);
		  n->used = false;
		  n->next = (yyvsp[-2].section_phdr);
		  (yyval.section_phdr) = n;
		}
#line 3415 "y.tab.c"
    break;

  case 253: /* $@24: %empty  */
#line 897 "ldgram.y"
                        {
			  ldlex_script ();
			  lang_enter_overlay_section ((yyvsp[0].name));
			}
#line 3424 "y.tab.c"
    break;

  case 254: /* $@25: %empty  */
#line 902 "ldgram.y"
                        { ldlex_popstate (); ldlex_expression (); }
#line 3430 "y.tab.c"
    break;

  case 255: /* $@26: %empty  */
#line 904 "ldgram.y"
                        {
			  ldlex_popstate ();
			  lang_leave_overlay_section ((yyvsp[0].integer), (yyvsp[-1].section_phdr));
			}
#line 3439 "y.tab.c"
    break;

  case 260: /* $@27: %empty  */
#line 921 "ldgram.y"
                     { ldlex_expression (); }
#line 3445 "y.tab.c"
    break;

  case 261: /* $@28: %empty  */
#line 922 "ldgram.y"
                                            { ldlex_popstate (); }
#line 3451 "y.tab.c"
    break;

  case 262: /* phdr: NAME $@27 phdr_type phdr_qualifiers $@28 ';'  */
#line 924 "ldgram.y"
                {
		  lang_new_phdr ((yyvsp[-5].name), (yyvsp[-3].etree), (yyvsp[-2].phdr).filehdr, (yyvsp[-2].phdr).phdrs, (yyvsp[-2].phdr).at,
				 (yyvsp[-2].phdr).flags);
		}
#line 3460 "y.tab.c"
    break;

  case 263: /* phdr_type: exp  */
#line 932 "ldgram.y"
                {
		  (yyval.etree) = (yyvsp[0].etree);

		  if ((yyvsp[0].etree)->type.node_class == etree_name
		      && (yyvsp[0].etree)->type.node_code == NAME)
		    {
		      const char *s;
		      unsigned int i;
		      static const char * const phdr_types[] =
			{
			  "PT_NULL", "PT_LOAD", "PT_DYNAMIC",
			  "PT_INTERP", "PT_NOTE", "PT_SHLIB",
			  "PT_PHDR"
			};

		      s = (yyvsp[0].etree)->name.name;
		      for (i = 0;
			   i < sizeof phdr_types / sizeof phdr_types[0];
			   i++)
			if (strcmp (s, phdr_types[i]) == 0)
			  {
			    (yyval.etree) = exp_intop (i);
			    break;
			  }
		    }
		}
#line 3491 "y.tab.c"
    break;

  case 264: /* phdr_qualifiers: %empty  */
#line 962 "ldgram.y"
                {
		  memset (&(yyval.phdr), 0, sizeof (struct phdr_info));
		}
#line 3499 "y.tab.c"
    break;

  case 265: /* phdr_qualifiers: NAME phdr_val phdr_qualifiers  */
#line 966 "ldgram.y"
                {
		  (yyval.phdr) = (yyvsp[0].phdr);
		  if (strcmp ((yyvsp[-2].name), "FILEHDR") == 0 && (yyvsp[-1].etree) == NULL)
		    (yyval.phdr).filehdr = true;
		  else if (strcmp ((yyvsp[-2].name), "PHDRS") == 0 && (yyvsp[-1].etree) == NULL)
		    (yyval.phdr).phdrs = true;
		  else if (strcmp ((yyvsp[-2].name), "FLAGS") == 0 && (yyvsp[-1].etree) != NULL)
		    (yyval.phdr).flags = (yyvsp[-1].etree);
		  else
		    einfo (_("%X%P:%S: PHDRS syntax error at `%s'\n"), (yyvsp[-2].name));
		}
#line 3515 "y.tab.c"
    break;

  case 266: /* phdr_qualifiers: AT '(' exp ')' phdr_qualifiers  */
#line 978 "ldgram.y"
                {
		  (yyval.phdr) = (yyvsp[0].phdr);
		  (yyval.phdr).at = (yyvsp[-2].etree);
		}
#line 3524 "y.tab.c"
    break;

  case 267: /* phdr_val: %empty  */
#line 986 "ldgram.y"
                {
		  (yyval.etree) = NULL;
		}
#line 3532 "y.tab.c"
    break;

  case 268: /* phdr_val: '(' exp ')'  */
#line 990 "ldgram.y"
                {
		  (yyval.etree) = (yyvsp[-1].etree);
		}
#line 3540 "y.tab.c"
    break;

  case 269: /* $@29: %empty  */
#line 998 "ldgram.y"
                {
		  ldlex_version_file ();
		  PUSH_ERROR (_("VERSION script"));
		}
#line 3549 "y.tab.c"
    break;

  case 270: /* version_script_file: $@29 vers_nodes  */
#line 1003 "ldgram.y"
                {
		  ldlex_popstate ();
		  POP_ERROR ();
		}
#line 3558 "y.tab.c"
    break;

  case 271: /* $@30: %empty  */
#line 1012 "ldgram.y"
                {
		  ldlex_version_script ();
		}
#line 3566 "y.tab.c"
    break;

  case 272: /* version: $@30 VERSIONK '{' vers_nodes '}'  */
#line 1016 "ldgram.y"
                {
		  ldlex_popstate ();
		}
#line 3574 "y.tab.c"
    break;

  case 275: /* vers_node: VERS_TAG '{' vers_tag '}' ';'  */
#line 1028 "ldgram.y"
                {
		  lang_register_vers_node ((yyvsp[-4].name), (yyvsp[-2].versnode), NULL);
		}
#line 3582 "y.tab.c"
    break;

  case 276: /* vers_node: VERS_TAG '{' vers_tag '}' verdep ';'  */
#line 1032 "ldgram.y"
                {
		  lang_register_vers_node ((yyvsp[-5].name), (yyvsp[-3].versnode), (yyvsp[-1].deflist));
		}
#line 3590 "y.tab.c"
    break;

  case 277: /* verdep: VERS_TAG  */
#line 1039 "ldgram.y"
                {
		  (yyval.deflist) = lang_add_vers_depend (NULL, (yyvsp[0].name));
		}
#line 3598 "y.tab.c"
    break;

  case 278: /* verdep: verdep VERS_TAG  */
#line 1043 "ldgram.y"
                {
		  (yyval.deflist) = lang_add_vers_depend ((yyvsp[-1].deflist), (yyvsp[0].name));
		}
#line 3606 "y.tab.c"
    break;

  case 279: /* vers_tag: %empty  */
#line 1050 "ldgram.y"
                {
		  (yyval.versnode) = lang_new_vers_node (NULL, NULL);
		}
#line 3614 "y.tab.c"
    break;

  case 280: /* vers_tag: vers_defns ';'  */
#line 1054 "ldgram.y"
                {
		  (yyval.versnode) = lang_new_vers_node ((yyvsp[-1].versyms), NULL);
		}
#line 3622 "y.tab.c"
    break;

  case 281: /* vers_tag: GLOBAL ':' vers_defns ';'  */
#line 1058 "ldgram.y"
                {
		  (yyval.versnode) = lang_new_vers_node ((yyvsp[-1].versyms), NULL);
		}
#line 3630 "y.tab.c"
    break;

  case 282: /* vers_tag: LOCAL ':' vers_defns ';'  */
#line 1062 "ldgram.y"
                {
		  (yyval.versnode) = lang_new_vers_node (NULL, (yyvsp[-1].versyms));
		}
#line 3638 "y.tab.c"
    break;

  case 283: /* vers_tag: GLOBAL ':' vers_defns ';' LOCAL ':' vers_defns ';'  */
#line 1066 "ldgram.y"
                {
		  (yyval.versnode) = lang_new_vers_node ((yyvsp[-5].versyms), (yyvsp[-1].versyms));
		}
#line 3646 "y.tab.c"
    break;

  case 284: /* vers_defns: VERS_IDENTIFIER  */
#line 1073 "ldgram.y"
                {
		  (yyval.versyms) = lang_new_vers_regex (NULL, (yyvsp[0].name), ldgram_vers_current_lang);
		}
#line 3654 "y.tab.c"
    break;

  case 285: /* vers_defns: vers_defns ';' VERS_IDENTIFIER  */
#line 1077 "ldgram.y"
                {
		  (yyval.versyms) = lang_new_vers_regex ((yyvsp[-2].versyms), (yyvsp[0].name), ldgram_vers_current_lang);
		}
#line 3662 "y.tab.c"
    break;

  case 286: /* @31: %empty  */
#line 1081 "ldgram.y"
                        {
			  (yyval.name) = ldgram_vers_current_lang;
			  ldgram_vers_current_lang = (yyvsp[-1].name);
			}
#line 3671 "y.tab.c"
    break;

  case 287: /* vers_defns: EXTERN NAME '{' @31 vers_defns '}'  */
#line 1086 "ldgram.y"
                        {
			  ldgram_vers_current_lang = (yyvsp[-2].name);
			}
#line 3679 "y.tab.c"
    break;


#line 3683 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1091 "ldgram.y"

void
yyerror(arg) 
     const char *arg;
{ 
  if (ldfile_assumed_script)
    einfo (_("%P:%s: file format not recognized; treating as linker script\n"),
	   ldfile_input_filename);
  if (error_index > 0 && error_index < ERROR_NAME_MAX)
     einfo ("%P%F:%S: %s in %s\n", arg, error_names[error_index-1]);
  else
     einfo ("%P%F:%S: %s\n", arg);
}
