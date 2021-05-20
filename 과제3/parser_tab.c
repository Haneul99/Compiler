
/*  A Bison parser, made from parser.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	TCONST	258
#define	TELSE	259
#define	TIF	260
#define	TINT	261
#define	TFLOAT	262
#define	TRETURN	263
#define	TVOID	264
#define	TWHILE	265
#define	TADD	266
#define	TSUB	267
#define	TMUL	268
#define	TDIV	269
#define	TMOD	270
#define	TASSIGN	271
#define	TADDASSIGN	272
#define	TSUBASSIGN	273
#define	TMULASSIGN	274
#define	TDIVASSIGN	275
#define	TMODASSIGN	276
#define	TOR	277
#define	TAND	278
#define	TNOT	279
#define	TEQUAL	280
#define	TNOTEQU	281
#define	TGREATE	282
#define	TLESSE	283
#define	TGREAT	284
#define	TLESS	285
#define	TINC	286
#define	TDEC	287
#define	TBRASL	288
#define	TBRASR	289
#define	TBRAML	290
#define	TBRAMR	291
#define	TBRALL	292
#define	TBRALR	293
#define	TCOMMA	294
#define	TSEMICOLON	295
#define	TIDENT	296
#define	TNUMBER	297
#define	TRNUMBER	298
#define	LOWER_THAN_ELSE	299

#line 1 "parser.y"

#include <stdio.h>
#include <ctype.h>
#include <malloc.h>
#include "tn.h"
#include "glob.h"

int current_data_type = NONTYPE;
int check_const = 0;

#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		170
#define	YYFLAG		-32768
#define	YYNTBASE	45

#define YYTRANSLATE(x) ((unsigned)(x) <= 299 ? yytranslate[x] : 90)

static const char yytranslate[] = {     0,
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
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     7,     9,    11,    14,    17,    20,    24,
    26,    28,    31,    33,    35,    37,    39,    41,    43,    45,
    49,    53,    55,    56,    58,    62,    65,    70,    75,    77,
    78,    80,    83,    87,    91,    93,    97,    99,   103,   107,
   109,   114,   119,   121,   123,   124,   126,   127,   129,   132,
   134,   136,   138,   140,   142,   145,   148,   150,   151,   157,
   165,   171,   175,   179,   181,   183,   187,   191,   195,   199,
   203,   207,   209,   213,   215,   219,   221,   225,   229,   231,
   235,   239,   243,   247,   249,   253,   257,   259,   263,   267,
   271,   273,   276,   279,   282,   285,   287,   292,   297,   302,
   307,   310,   313,   315,   317,   318,   320,   324,   326,   328,
   330,   334
};

static const short yyrhs[] = {    46,
     0,    47,     0,    46,    47,     0,    48,     0,    63,     0,
     1,    40,     0,     1,    36,     0,    49,    60,     0,    50,
    55,    56,     0,    51,     0,    52,     0,    51,    52,     0,
    53,     0,    54,     0,     3,     0,     6,     0,     7,     0,
     9,     0,    41,     0,    33,    57,    34,     0,    33,    57,
     1,     0,    58,     0,     0,    59,     0,    58,    39,    59,
     0,    50,    66,     0,    35,    61,    68,    36,     0,    35,
    61,    68,     1,     0,    62,     0,     0,    63,     0,    62,
    63,     0,    50,    64,    40,     0,    50,    64,     1,     0,
    65,     0,    64,    39,    65,     0,    66,     0,    66,    16,
    42,     0,    66,    16,    43,     0,    41,     0,    41,    37,
    67,    38,     0,    41,    37,    67,     1,     0,    42,     0,
    43,     0,     0,    69,     0,     0,    70,     0,    69,    70,
     0,    60,     0,    71,     0,    73,     0,    74,     0,    75,
     0,    72,    40,     0,    76,     1,     0,    76,     0,     0,
     5,    33,    76,    34,    70,     0,     5,    33,    76,    34,
    70,     4,    70,     0,    10,    33,    76,    34,    70,     0,
     8,    72,    40,     0,     8,    72,     1,     0,    77,     0,
    78,     0,    84,    16,    77,     0,    84,    17,    77,     0,
    84,    18,    77,     0,    84,    19,    77,     0,    84,    20,
    77,     0,    84,    21,    77,     0,    79,     0,    78,    22,
    79,     0,    80,     0,    79,    23,    80,     0,    81,     0,
    80,    25,    81,     0,    80,    26,    81,     0,    82,     0,
    81,    29,    82,     0,    81,    30,    82,     0,    81,    27,
    82,     0,    81,    28,    82,     0,    83,     0,    82,    11,
    83,     0,    82,    12,    83,     0,    84,     0,    83,    13,
    84,     0,    83,    14,    84,     0,    83,    15,    84,     0,
    85,     0,    12,    84,     0,    24,    84,     0,    31,    84,
     0,    32,    84,     0,    89,     0,    85,    37,    76,    38,
     0,    85,    37,    76,     1,     0,    85,    33,    86,    34,
     0,    85,    33,    86,     1,     0,    85,    31,     0,    85,
    32,     0,    87,     0,    88,     0,     0,    77,     0,    88,
    39,    77,     0,    41,     0,    42,     0,    43,     0,    33,
    76,    34,     0,    33,    76,     1,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    25,    27,    28,    30,    31,    32,    33,    35,    37,    40,
    42,    43,    45,    46,    48,    50,    51,    52,    56,    60,
    61,    63,    64,    66,    67,    69,    74,    75,    77,    78,
    80,    81,    83,    84,    86,    87,    89,    90,    91,    93,
   104,   114,   116,   117,   118,   122,   123,   125,   126,   128,
   129,   130,   131,   132,   134,   135,   137,   138,   140,   141,
   143,   145,   146,   148,   150,   151,   152,   153,   154,   155,
   156,   158,   159,   161,   162,   164,   165,   166,   168,   169,
   170,   171,   172,   174,   175,   176,   178,   179,   180,   181,
   183,   184,   185,   186,   187,   189,   190,   191,   192,   193,
   194,   195,   197,   201,   202,   204,   205,   207,   208,   209,
   210,   211
};

static const char * const yytname[] = {   "$","error","$undefined.","TCONST",
"TELSE","TIF","TINT","TFLOAT","TRETURN","TVOID","TWHILE","TADD","TSUB","TMUL",
"TDIV","TMOD","TASSIGN","TADDASSIGN","TSUBASSIGN","TMULASSIGN","TDIVASSIGN",
"TMODASSIGN","TOR","TAND","TNOT","TEQUAL","TNOTEQU","TGREATE","TLESSE","TGREAT",
"TLESS","TINC","TDEC","TBRASL","TBRASR","TBRAML","TBRAMR","TBRALL","TBRALR",
"TCOMMA","TSEMICOLON","TIDENT","TNUMBER","TRNUMBER","LOWER_THAN_ELSE","mini_c",
"translation_unit","external_dcl","function_def","function_header","dcl_spec",
"dcl_specifiers","dcl_specifier","type_qualifier","type_specifier","function_name",
"formal_param","opt_formal_param","formal_param_list","param_dcl","compound_st",
"opt_dcl_list","declaration_list","declaration","init_dcl_list","init_declarator",
"declarator","opt_number","opt_stat_list","statement_list","statement","expression_st",
"opt_expression","if_st","while_st","return_st","expression","assignment_exp",
"logical_or_exp","logical_and_exp","equality_exp","relational_exp","additive_exp",
"multiplicative_exp","unary_exp","postfix_exp","opt_actual_param","actual_param",
"actual_param_list","primary_exp",""
};
#endif

static const short yyr1[] = {     0,
    45,    46,    46,    47,    47,    47,    47,    48,    49,    50,
    51,    51,    52,    52,    53,    54,    54,    54,    55,    56,
    56,    57,    57,    58,    58,    59,    60,    60,    61,    61,
    62,    62,    63,    63,    64,    64,    65,    65,    65,    66,
    66,    66,    67,    67,    67,    68,    68,    69,    69,    70,
    70,    70,    70,    70,    71,    71,    72,    72,    73,    73,
    74,    75,    75,    76,    77,    77,    77,    77,    77,    77,
    77,    78,    78,    79,    79,    80,    80,    80,    81,    81,
    81,    81,    81,    82,    82,    82,    83,    83,    83,    83,
    84,    84,    84,    84,    84,    85,    85,    85,    85,    85,
    85,    85,    86,    87,    87,    88,    88,    89,    89,    89,
    89,    89
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     2,     2,     2,     3,     1,
     1,     2,     1,     1,     1,     1,     1,     1,     1,     3,
     3,     1,     0,     1,     3,     2,     4,     4,     1,     0,
     1,     2,     3,     3,     1,     3,     1,     3,     3,     1,
     4,     4,     1,     1,     0,     1,     0,     1,     2,     1,
     1,     1,     1,     1,     2,     2,     1,     0,     5,     7,
     5,     3,     3,     1,     1,     3,     3,     3,     3,     3,
     3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
     3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
     1,     2,     2,     2,     2,     1,     4,     4,     4,     4,
     2,     2,     1,     1,     0,     1,     3,     1,     1,     1,
     3,     3
};

static const short yydefact[] = {     0,
     0,    15,    16,    17,    18,     0,     2,     4,     0,     0,
    10,    11,    13,    14,     5,     7,     6,     3,    30,     8,
    40,     0,     0,    35,    37,    12,     0,    47,    29,    31,
    45,    23,     9,    34,     0,    33,     0,    40,     0,    58,
     0,     0,     0,     0,     0,     0,   108,   109,   110,    50,
     0,    46,    48,    51,     0,    52,    53,    54,     0,    64,
    65,    72,    74,    76,    79,    84,    87,    91,    96,    32,
    43,    44,     0,     0,     0,    22,    24,    36,    38,    39,
     0,     0,    57,     0,    92,    93,    94,    95,     0,    28,
    27,    49,    55,    56,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   101,   102,   105,     0,    42,    41,    26,
    21,    20,     0,     0,    63,    62,     0,   112,   111,    73,
    87,    75,    77,    78,    82,    83,    80,    81,    85,    86,
    88,    89,    90,    66,    67,    68,    69,    70,    71,   106,
     0,   103,   104,     0,    25,    58,    58,   100,    99,     0,
    98,    97,    59,    61,   107,    58,    60,     0,     0,     0
};

static const short yydefgoto[] = {   168,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    22,
    33,    75,    76,    77,    50,    28,    29,    15,    23,    24,
    25,    73,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
   151,   152,   153,    69
};

static const short yypact[] = {    28,
    -4,-32768,-32768,-32768,-32768,   147,-32768,-32768,    -2,    -3,
    73,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    73,-32768,
    50,    42,     4,-32768,    61,-32768,    44,    76,    73,-32768,
   -23,    73,-32768,-32768,    44,-32768,    60,    59,    65,   103,
    77,   103,   103,   103,   103,   103,-32768,-32768,-32768,-32768,
    15,    76,-32768,-32768,    72,-32768,-32768,-32768,    12,-32768,
   101,   110,    67,    19,   114,   128,    39,    58,-32768,-32768,
-32768,-32768,     2,    44,     5,   116,-32768,-32768,-32768,-32768,
   103,    13,-32768,   103,-32768,-32768,-32768,-32768,    16,-32768,
-32768,-32768,-32768,-32768,   103,   103,   103,   103,   103,   103,
   103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
   103,   103,   103,-32768,-32768,   103,   103,-32768,-32768,-32768,
-32768,-32768,    73,   115,-32768,-32768,   123,-32768,-32768,   110,
-32768,    67,    19,    19,   114,   114,   114,   114,   128,   128,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    20,-32768,   119,     3,-32768,    89,    89,-32768,-32768,   103,
-32768,-32768,   155,-32768,-32768,    89,-32768,   160,   161,-32768
};

static const short yypgoto[] = {-32768,
-32768,   156,-32768,-32768,   -17,-32768,   152,-32768,-32768,-32768,
-32768,-32768,-32768,    41,   157,-32768,-32768,    -1,-32768,   130,
    93,-32768,-32768,-32768,   -52,-32768,   129,-32768,-32768,-32768,
   -39,   -86,-32768,    75,    78,    31,    38,    48,   -34,-32768,
-32768,-32768,-32768,-32768
};


#define	YYLAST		174


static const short yytable[] = {    92,
    83,    27,   118,   161,    34,   121,    89,    85,    86,    87,
    88,    27,    94,   125,    74,    90,   128,    30,    71,    72,
   158,   144,   145,   146,   147,   148,   149,    70,     1,   150,
     2,    16,    19,     3,     4,    17,     5,    21,   122,   119,
   162,   124,    35,    36,   127,    99,   100,   101,   102,   129,
    91,   -57,   126,   159,   108,   109,   110,   111,   112,   113,
   131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
   141,   142,   143,   165,    32,     2,    37,   154,     3,     4,
    39,     5,   -19,    40,    38,    41,    31,    42,   114,   115,
   116,    97,    98,    39,   117,    31,    40,    81,    41,    43,
    42,    79,    80,   163,   164,    74,    44,    45,    46,    84,
    19,    93,    43,   167,    42,   -58,    47,    48,    49,    44,
    45,    46,    95,    19,   103,   104,    43,   133,   134,    47,
    48,    49,    96,    44,    45,    46,   135,   136,   137,   138,
   105,   106,   107,    47,    48,    49,    -1,     1,   156,     2,
   139,   140,     3,     4,   123,     5,   157,   160,   166,   169,
   170,    18,    26,   155,    78,    20,   120,     0,    82,   130,
     0,     0,     0,   132
};

static const short yycheck[] = {    52,
    40,    19,     1,     1,     1,     1,    46,    42,    43,    44,
    45,    29,     1,     1,    32,     1,     1,    19,    42,    43,
     1,   108,   109,   110,   111,   112,   113,    29,     1,   116,
     3,    36,    35,     6,     7,    40,     9,    41,    34,    38,
    38,    81,    39,    40,    84,    27,    28,    29,    30,    34,
    36,    40,    40,    34,    16,    17,    18,    19,    20,    21,
    95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
   105,   106,   107,   160,    33,     3,    16,   117,     6,     7,
     5,     9,    33,     8,    41,    10,    37,    12,    31,    32,
    33,    25,    26,     5,    37,    37,     8,    33,    10,    24,
    12,    42,    43,   156,   157,   123,    31,    32,    33,    33,
    35,    40,    24,   166,    12,    40,    41,    42,    43,    31,
    32,    33,    22,    35,    11,    12,    24,    97,    98,    41,
    42,    43,    23,    31,    32,    33,    99,   100,   101,   102,
    13,    14,    15,    41,    42,    43,     0,     1,    34,     3,
   103,   104,     6,     7,    39,     9,    34,    39,     4,     0,
     0,     6,    11,   123,    35,     9,    74,    -1,    40,    95,
    -1,    -1,    -1,    96
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

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
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 192 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 5:
#line 31 "parser.y"
{printf("declaration %s\n", yytext);;
    break;}
case 6:
#line 32 "parser.y"
{yyerrok; cErrors++; printf("invalid external declaration until ';'\n", yytext);;
    break;}
case 7:
#line 33 "parser.y"
{yyerrok; cErrors++; printf("invalid external declaration until '}'\n");;
    break;}
case 8:
#line 35 "parser.y"
{printf("function_def\n");;
    break;}
case 9:
#line 37 "parser.y"
{ printf("header complete\n");type = NONTYPE;;
    break;}
case 15:
#line 48 "parser.y"
{check_const = 1; ;
    break;}
case 16:
#line 50 "parser.y"
{current_data_type = INTEGER;;
    break;}
case 17:
#line 51 "parser.y"
{current_data_type = FLOAT;;
    break;}
case 18:
#line 52 "parser.y"
{current_data_type = VOID;;
    break;}
case 19:
#line 56 "parser.y"
{type = FUNCTION; idEntry->maintype = type; idEntry->datatype = current_data_type;;
    break;}
case 21:
#line 61 "parser.y"
{yyerrok; cErrors++; printf("')' is missing before %s\n", yytext);;
    break;}
case 24:
#line 66 "parser.y"
{current_data_type = NONTYPE; check_const = 0;;
    break;}
case 28:
#line 75 "parser.y"
{yyerrok; cErrors++; printf("'}' is missing\n", yytext);;
    break;}
case 33:
#line 83 "parser.y"
{current_data_type = NONTYPE; check_const = 0;;
    break;}
case 34:
#line 84 "parser.y"
{yyerrok; cErrors++; printf("';' is disapper before '%s'\n", yytext); ;
    break;}
case 40:
#line 93 "parser.y"
{  // 스칼라
						idEntry->subtype = SCALAR;
						idEntry->datatype = current_data_type;
						if(type == FUNCTION){ // 스칼라 파라미터
							idEntry->maintype = PARAMETER;
						}
						else{ // 스칼라 변수
							idEntry->maintype = VARIABLE;
							idEntry->is_const = check_const;
						}
					;
    break;}
case 41:
#line 104 "parser.y"
{  // 배열
						idEntry->subtype = ARRAY;
						idEntry->datatype = current_data_type;
						if(type == FUNCTION){ // 배열 파라미터
							idEntry->maintype = PARAMETER;
						}
						else{ // 배열 변수
						  idEntry->maintype = VARIABLE;
						} // 배열
					;
    break;}
case 42:
#line 114 "parser.y"
{yyerrok; cErrors++; printf("']' is missing before %s\n", yytext);;
    break;}
case 56:
#line 135 "parser.y"
{yyerrok; cErrors++; printf("';' is disappear before %s\n", yytext);;
    break;}
case 61:
#line 143 "parser.y"
{printf("while\n");;
    break;}
case 63:
#line 146 "parser.y"
{yyerrok; cErrors++; printf("';' is disappear before %s\n", yytext);;
    break;}
case 98:
#line 191 "parser.y"
{yyerrok; cErrors++; printf("']' is missing before %s\n", yytext);;
    break;}
case 100:
#line 193 "parser.y"
{yyerrok; cErrors++; printf("')' is missing before %s\n", yytext);;
    break;}
case 112:
#line 211 "parser.y"
{yyerrok; cErrors++; printf("')' is missing before %s\n", yytext);;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 487 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 213 "parser.y"

