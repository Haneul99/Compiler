
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



#define	YYFINAL		169
#define	YYFLAG		-32768
#define	YYNTBASE	45

#define YYTRANSLATE(x) ((unsigned)(x) <= 299 ? yytranslate[x] : 91)

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
     0,     2,     4,     7,    10,    12,    14,    17,    18,    22,
    26,    28,    30,    33,    35,    37,    39,    41,    43,    45,
    47,    51,    55,    57,    58,    60,    64,    67,    72,    77,
    79,    80,    82,    85,    89,    93,    95,    99,   101,   105,
   109,   111,   116,   121,   123,   125,   126,   128,   129,   131,
   134,   136,   138,   140,   142,   144,   147,   149,   150,   156,
   164,   170,   174,   176,   178,   182,   186,   190,   194,   198,
   202,   204,   208,   210,   214,   216,   220,   224,   226,   230,
   234,   238,   242,   244,   248,   252,   254,   258,   262,   266,
   268,   271,   274,   277,   280,   282,   287,   292,   295,   298,
   300,   302,   303,   305,   309,   313,   315,   317,   319,   323
};

static const short yyrhs[] = {    46,
     0,    47,     0,    46,    47,     0,     1,    47,     0,    48,
     0,    64,     0,    50,    61,     0,     0,     1,    49,    61,
     0,    51,    56,    57,     0,    52,     0,    53,     0,    52,
    53,     0,    54,     0,    55,     0,     3,     0,     6,     0,
     7,     0,     9,     0,    41,     0,    33,    58,    34,     0,
    33,    58,     1,     0,    59,     0,     0,    60,     0,    59,
    39,    60,     0,    51,    67,     0,    35,    62,    69,    36,
     0,    35,    62,    69,     1,     0,    63,     0,     0,    64,
     0,    63,    64,     0,    51,    65,    40,     0,    51,    65,
     1,     0,    66,     0,    65,    39,    66,     0,    67,     0,
    67,    16,    42,     0,    67,    16,    43,     0,    41,     0,
    41,    37,    68,    38,     0,    41,    37,    68,     1,     0,
    42,     0,    43,     0,     0,    70,     0,     0,    71,     0,
    70,    71,     0,    61,     0,    72,     0,    74,     0,    75,
     0,    76,     0,    73,    40,     0,    77,     0,     0,     5,
    33,    77,    34,    71,     0,     5,    33,    77,    34,    71,
     4,    71,     0,    10,    33,    77,    34,    71,     0,     8,
    73,    40,     0,    78,     0,    79,     0,    85,    16,    78,
     0,    85,    17,    78,     0,    85,    18,    78,     0,    85,
    19,    78,     0,    85,    20,    78,     0,    85,    21,    78,
     0,    80,     0,    79,    22,    80,     0,    81,     0,    80,
    23,    81,     0,    82,     0,    81,    25,    82,     0,    81,
    26,    82,     0,    83,     0,    82,    29,    83,     0,    82,
    30,    83,     0,    82,    27,    83,     0,    82,    28,    83,
     0,    84,     0,    83,    11,    84,     0,    83,    12,    84,
     0,    85,     0,    84,    13,    85,     0,    84,    14,    85,
     0,    84,    15,    85,     0,    86,     0,    12,    85,     0,
    24,    85,     0,    31,    85,     0,    32,    85,     0,    90,
     0,    86,    37,    77,    38,     0,    86,    33,    87,    34,
     0,    86,    31,     0,    86,    32,     0,    88,     0,    89,
     0,     0,    78,     0,    89,    39,    78,     0,    89,     1,
    78,     0,    41,     0,    42,     0,    43,     0,    33,    77,
    34,     0,    33,    77,     1,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    25,    27,    28,    29,    31,    32,    34,    35,    36,    37,
    40,    42,    43,    45,    46,    48,    50,    51,    52,    56,
    60,    61,    63,    64,    66,    67,    69,    74,    75,    77,
    78,    80,    81,    84,    85,    87,    88,    90,    91,    92,
    94,   105,   115,   117,   118,   119,   123,   124,   126,   127,
   129,   130,   131,   132,   133,   135,   138,   139,   141,   142,
   144,   146,   148,   150,   151,   152,   153,   154,   155,   156,
   158,   159,   161,   162,   164,   165,   166,   168,   169,   170,
   171,   172,   174,   175,   176,   178,   179,   180,   181,   183,
   184,   185,   186,   187,   189,   190,   191,   192,   193,   195,
   199,   200,   202,   203,   204,   206,   207,   208,   209,   210
};

static const char * const yytname[] = {   "$","error","$undefined.","TCONST",
"TELSE","TIF","TINT","TFLOAT","TRETURN","TVOID","TWHILE","TADD","TSUB","TMUL",
"TDIV","TMOD","TASSIGN","TADDASSIGN","TSUBASSIGN","TMULASSIGN","TDIVASSIGN",
"TMODASSIGN","TOR","TAND","TNOT","TEQUAL","TNOTEQU","TGREATE","TLESSE","TGREAT",
"TLESS","TINC","TDEC","TBRASL","TBRASR","TBRAML","TBRAMR","TBRALL","TBRALR",
"TCOMMA","TSEMICOLON","TIDENT","TNUMBER","TRNUMBER","LOWER_THAN_ELSE","mini_c",
"translation_unit","external_dcl","function_def","@1","function_header","dcl_spec",
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
    45,    46,    46,    46,    47,    47,    48,    49,    48,    50,
    51,    52,    52,    53,    53,    54,    55,    55,    55,    56,
    57,    57,    58,    58,    59,    59,    60,    61,    61,    62,
    62,    63,    63,    64,    64,    65,    65,    66,    66,    66,
    67,    67,    67,    68,    68,    68,    69,    69,    70,    70,
    71,    71,    71,    71,    71,    72,    73,    73,    74,    74,
    75,    76,    77,    78,    78,    78,    78,    78,    78,    78,
    79,    79,    80,    80,    81,    81,    81,    82,    82,    82,
    82,    82,    83,    83,    83,    84,    84,    84,    84,    85,
    85,    85,    85,    85,    86,    86,    86,    86,    86,    87,
    88,    88,    89,    89,    89,    90,    90,    90,    90,    90
};

static const short yyr2[] = {     0,
     1,     1,     2,     2,     1,     1,     2,     0,     3,     3,
     1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
     3,     3,     1,     0,     1,     3,     2,     4,     4,     1,
     0,     1,     2,     3,     3,     1,     3,     1,     3,     3,
     1,     4,     4,     1,     1,     0,     1,     0,     1,     2,
     1,     1,     1,     1,     1,     2,     1,     0,     5,     7,
     5,     3,     1,     1,     3,     3,     3,     3,     3,     3,
     1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
     3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
     2,     2,     2,     2,     1,     4,     4,     2,     2,     1,
     1,     0,     1,     3,     3,     1,     1,     1,     3,     3
};

static const short yydefact[] = {     0,
     0,    16,    17,    18,    19,     0,     2,     5,     0,     0,
    11,    12,    14,    15,     6,     8,     4,     0,     3,    31,
     7,    41,     0,     0,    36,    38,    13,     9,     0,    48,
    30,    32,    46,    24,    10,    35,     0,    34,     0,    41,
     0,    58,     0,     0,     0,     0,     0,     0,   106,   107,
   108,    51,     0,    47,    49,    52,     0,    53,    54,    55,
    57,    63,    64,    71,    73,    75,    78,    83,    86,    90,
    95,    33,    44,    45,     0,     0,     0,    23,    25,    37,
    39,    40,     0,     0,     0,    91,    92,    93,    94,     0,
    29,    28,    50,    56,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    98,    99,   102,     0,    43,    42,    27,
    22,    21,     0,     0,    62,     0,   110,   109,    72,    86,
    74,    76,    77,    81,    82,    79,    80,    84,    85,    87,
    88,    89,    65,    66,    67,    68,    69,    70,   103,     0,
   100,     0,     0,    26,    58,    58,    97,     0,     0,    96,
    59,    61,   105,   104,    58,    60,     0,     0,     0
};

static const short yydefgoto[] = {   167,
     6,     7,     8,    18,     9,    10,    11,    12,    13,    14,
    23,    35,    77,    78,    79,    52,    30,    31,    15,    24,
    25,    26,    75,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,   150,   151,   152,    71
};

static const short yypact[] = {    84,
    75,-32768,-32768,-32768,-32768,    26,-32768,-32768,   -25,   -13,
   135,-32768,-32768,-32768,-32768,-32768,-32768,   -25,-32768,   135,
-32768,    -3,    11,     6,-32768,    22,-32768,-32768,   -10,    65,
   135,-32768,    -2,   135,-32768,-32768,   -10,-32768,    52,    43,
    39,    91,    50,    91,    91,    91,    91,    91,-32768,-32768,
-32768,-32768,     7,    65,-32768,-32768,    46,-32768,-32768,-32768,
-32768,-32768,    66,    69,    92,    23,   115,   116,   132,    88,
-32768,-32768,-32768,-32768,    10,   -10,    15,    60,-32768,-32768,
-32768,-32768,    91,   100,    91,-32768,-32768,-32768,-32768,    35,
-32768,-32768,-32768,-32768,    91,    91,    91,    91,    91,    91,
    91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
    91,    91,    91,-32768,-32768,    91,    91,-32768,-32768,-32768,
-32768,-32768,   135,    79,-32768,   109,-32768,-32768,    69,-32768,
    92,    23,    23,   115,   115,   115,   115,   116,   116,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   128,
-32768,     8,   125,-32768,   104,   104,-32768,    91,    91,-32768,
   160,-32768,-32768,-32768,   104,-32768,   165,   166,-32768
};

static const short yypgoto[] = {-32768,
-32768,    73,-32768,-32768,-32768,   -19,-32768,   156,-32768,-32768,
-32768,-32768,-32768,-32768,    45,     5,-32768,-32768,    -7,-32768,
   133,    93,-32768,-32768,-32768,   -54,-32768,   129,-32768,-32768,
-32768,   -46,   -91,-32768,    77,    78,    61,    55,    57,   -41,
-32768,-32768,-32768,-32768,-32768
};


#define	YYLAST		174


static const short yytable[] = {    93,
    29,    90,    86,    87,    88,    89,    36,    91,   158,    20,
   118,    29,    32,    21,    76,   121,   143,   144,   145,   146,
   147,   148,    28,    72,   149,    -1,    16,    22,     2,   -20,
    40,     3,     4,    33,     5,   127,   124,    39,   126,    73,
    74,  -101,    92,    34,    37,    38,   159,   119,   122,    99,
   100,   101,   102,   130,   130,   130,   130,   130,   130,   130,
   130,   130,   130,   140,   141,   142,   163,   164,   128,    41,
   153,    83,    42,    17,    43,    16,    44,     2,    19,    33,
     3,     4,    85,     5,     1,    94,     2,    95,    45,     3,
     4,    96,     5,    81,    82,    46,    47,    48,   123,    20,
   161,   162,    44,    76,   -58,    49,    50,    51,    41,    -8,
   166,    42,   155,    43,    45,    44,    97,    98,   114,   115,
   116,    46,    47,    48,   117,   103,   104,    45,   105,   106,
   107,    49,    50,    51,    46,    47,    48,     2,    20,   125,
     3,     4,   156,     5,    49,    50,    51,   108,   109,   110,
   111,   112,   113,   134,   135,   136,   137,   132,   133,   138,
   139,   157,   160,   165,   168,   169,    27,   154,   120,    80,
    84,   129,     0,   131
};

static const short yycheck[] = {    54,
    20,    48,    44,    45,    46,    47,     1,     1,     1,    35,
     1,    31,    20,     9,    34,     1,   108,   109,   110,   111,
   112,   113,    18,    31,   116,     0,     1,    41,     3,    33,
    41,     6,     7,    37,     9,     1,    83,    16,    85,    42,
    43,    34,    36,    33,    39,    40,    39,    38,    34,    27,
    28,    29,    30,    95,    96,    97,    98,    99,   100,   101,
   102,   103,   104,   105,   106,   107,   158,   159,    34,     5,
   117,    33,     8,     1,    10,     1,    12,     3,     6,    37,
     6,     7,    33,     9,     1,    40,     3,    22,    24,     6,
     7,    23,     9,    42,    43,    31,    32,    33,    39,    35,
   155,   156,    12,   123,    40,    41,    42,    43,     5,    35,
   165,     8,    34,    10,    24,    12,    25,    26,    31,    32,
    33,    31,    32,    33,    37,    11,    12,    24,    13,    14,
    15,    41,    42,    43,    31,    32,    33,     3,    35,    40,
     6,     7,    34,     9,    41,    42,    43,    16,    17,    18,
    19,    20,    21,    99,   100,   101,   102,    97,    98,   103,
   104,    34,    38,     4,     0,     0,    11,   123,    76,    37,
    42,    95,    -1,    96
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

case 4:
#line 29 "parser.y"
{yyerrok; cErrors++; printf("unexpected token '%s'\n", yytext); yyclearin;;
    break;}
case 6:
#line 32 "parser.y"
{printf("declaration %s\n", yytext);;
    break;}
case 7:
#line 34 "parser.y"
{printf("function_def\n");;
    break;}
case 8:
#line 35 "parser.y"
{yyerrok; cErrors++; printf("unexpected token %s\n", yytext); yyclearin;;
    break;}
case 10:
#line 37 "parser.y"
{ printf("header complete\n");type = NONTYPE;;
    break;}
case 16:
#line 48 "parser.y"
{check_const = 1; ;
    break;}
case 17:
#line 50 "parser.y"
{current_data_type = INTEGER;;
    break;}
case 18:
#line 51 "parser.y"
{current_data_type = FLOAT;;
    break;}
case 19:
#line 52 "parser.y"
{current_data_type = VOID;;
    break;}
case 20:
#line 56 "parser.y"
{type = FUNCTION; idEntry->maintype = type; idEntry->datatype = current_data_type;;
    break;}
case 22:
#line 61 "parser.y"
{yyerrok; cErrors++; printf("')' is missing before %s\n", yytext);;
    break;}
case 25:
#line 66 "parser.y"
{current_data_type = NONTYPE; check_const = 0;;
    break;}
case 29:
#line 75 "parser.y"
{yyerrok; cErrors++; printf("'}' is disappear%s'\n", yytext);;
    break;}
case 34:
#line 84 "parser.y"
{current_data_type = NONTYPE; check_const = 0;;
    break;}
case 35:
#line 85 "parser.y"
{yyerrok; cErrors++; printf("';' is disapper before '%s'\n", yytext); ;
    break;}
case 41:
#line 94 "parser.y"
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
case 42:
#line 105 "parser.y"
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
case 43:
#line 115 "parser.y"
{yyerrok; cErrors++; printNoBracket();;
    break;}
case 61:
#line 144 "parser.y"
{printf("while\n");;
    break;}
case 105:
#line 204 "parser.y"
{yyerrok; cErrors++; printSyntaxErr(); ;
    break;}
case 110:
#line 210 "parser.y"
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
#line 212 "parser.y"

