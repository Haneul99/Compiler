
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

int current_type;

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



#define	YYFINAL		165
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
     0,     2,     4,     7,     9,    11,    14,    18,    20,    22,
    25,    27,    29,    31,    33,    35,    37,    39,    43,    47,
    49,    50,    52,    56,    59,    62,    67,    72,    74,    75,
    77,    80,    84,    88,    90,    94,    96,   100,   104,   106,
   111,   116,   118,   120,   121,   123,   124,   126,   129,   131,
   133,   135,   137,   139,   142,   145,   147,   148,   154,   162,
   168,   172,   174,   176,   180,   184,   188,   192,   196,   200,
   202,   206,   208,   212,   214,   218,   222,   224,   228,   232,
   236,   240,   242,   246,   250,   252,   256,   260,   264,   266,
   269,   272,   275,   278,   280,   285,   290,   293,   296,   298,
   299,   301,   303,   307,   310,   312,   314,   316,   320
};

static const short yyrhs[] = {    46,
     0,    47,     0,    46,    47,     0,    48,     0,    63,     0,
    49,    60,     0,    50,    55,    56,     0,    51,     0,    52,
     0,    51,    52,     0,    53,     0,    54,     0,     3,     0,
     6,     0,     7,     0,     9,     0,    41,     0,    33,    57,
    34,     0,    33,    57,     1,     0,    58,     0,     0,    59,
     0,    58,    39,    59,     0,    58,     1,     0,    50,    66,
     0,    35,    61,    68,    36,     0,    35,    61,    68,     1,
     0,    62,     0,     0,    63,     0,    62,    63,     0,    50,
    64,    40,     0,    50,    64,     1,     0,    65,     0,    64,
    39,    65,     0,    66,     0,    66,    16,    42,     0,    66,
    16,    43,     0,    41,     0,    41,    37,    67,    38,     0,
    41,    37,    67,     1,     0,    42,     0,    43,     0,     0,
    69,     0,     0,    70,     0,    69,    70,     0,    60,     0,
    71,     0,    73,     0,    74,     0,    75,     0,    72,    40,
     0,    72,     1,     0,    76,     0,     0,     5,    33,    76,
    34,    70,     0,     5,    33,    76,    34,    70,     4,    70,
     0,    10,    33,    76,    34,    70,     0,     8,    72,    40,
     0,    77,     0,    78,     0,    84,    16,    77,     0,    84,
    17,    77,     0,    84,    18,    77,     0,    84,    19,    77,
     0,    84,    20,    77,     0,    84,    21,    77,     0,    79,
     0,    78,    22,    79,     0,    80,     0,    79,    23,    80,
     0,    81,     0,    80,    25,    81,     0,    80,    26,    81,
     0,    82,     0,    81,    29,    82,     0,    81,    30,    82,
     0,    81,    27,    82,     0,    81,    28,    82,     0,    83,
     0,    82,    11,    83,     0,    82,    12,    83,     0,    84,
     0,    83,    13,    84,     0,    83,    14,    84,     0,    83,
    15,    84,     0,    85,     0,    12,    84,     0,    24,    84,
     0,    31,    84,     0,    32,    84,     0,    89,     0,    85,
    37,    76,    38,     0,    85,    33,    86,    34,     0,    85,
    31,     0,    85,    32,     0,    87,     0,     0,    88,     0,
    77,     0,    88,    39,    77,     0,    88,     1,     0,    41,
     0,    42,     0,    43,     0,    33,    76,    34,     0,    33,
    76,     1,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    24,    26,    27,    29,    30,    32,    34,    36,    38,    39,
    41,    42,    44,    46,    47,    48,    50,    52,    53,    55,
    56,    58,    59,    60,    62,    64,    65,    67,    68,    70,
    71,    73,    74,    76,    77,    79,    80,    81,    83,    92,
    93,    95,    96,    97,    99,   100,   102,   103,   105,   106,
   107,   108,   109,   111,   112,   114,   115,   117,   118,   120,
   122,   124,   126,   127,   128,   129,   130,   131,   132,   134,
   135,   137,   138,   140,   141,   142,   144,   145,   146,   147,
   148,   150,   151,   152,   154,   155,   156,   157,   159,   160,
   161,   162,   163,   165,   166,   167,   168,   169,   171,   172,
   174,   176,   177,   178,   180,   181,   182,   183,   184
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
    45,    46,    46,    47,    47,    48,    49,    50,    51,    51,
    52,    52,    53,    54,    54,    54,    55,    56,    56,    57,
    57,    58,    58,    58,    59,    60,    60,    61,    61,    62,
    62,    63,    63,    64,    64,    65,    65,    65,    66,    66,
    66,    67,    67,    67,    68,    68,    69,    69,    70,    70,
    70,    70,    70,    71,    71,    72,    72,    73,    73,    74,
    75,    76,    77,    77,    77,    77,    77,    77,    77,    78,
    78,    79,    79,    80,    80,    80,    81,    81,    81,    81,
    81,    82,    82,    82,    83,    83,    83,    83,    84,    84,
    84,    84,    84,    85,    85,    85,    85,    85,    86,    86,
    87,    88,    88,    88,    89,    89,    89,    89,    89
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     2,     3,     1,     1,     2,
     1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
     0,     1,     3,     2,     2,     4,     4,     1,     0,     1,
     2,     3,     3,     1,     3,     1,     3,     3,     1,     4,
     4,     1,     1,     0,     1,     0,     1,     2,     1,     1,
     1,     1,     1,     2,     2,     1,     0,     5,     7,     5,
     3,     1,     1,     3,     3,     3,     3,     3,     3,     1,
     3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
     3,     1,     3,     3,     1,     3,     3,     3,     1,     2,
     2,     2,     2,     1,     4,     4,     2,     2,     1,     0,
     1,     1,     3,     2,     1,     1,     1,     3,     3
};

static const short yydefact[] = {     0,
    13,    14,    15,    16,     1,     2,     4,     0,     0,     8,
     9,    11,    12,     5,     3,    29,     6,    39,     0,     0,
    34,    36,    10,     0,    46,    28,    30,    44,    21,     7,
    33,     0,    32,     0,    39,     0,    57,     0,     0,     0,
     0,     0,     0,   105,   106,   107,    49,     0,    45,    47,
    50,     0,    51,    52,    53,    56,    62,    63,    70,    72,
    74,    77,    82,    85,    89,    94,    31,    42,    43,     0,
     0,     0,     0,    22,    35,    37,    38,     0,     0,     0,
    90,    91,    92,    93,     0,    27,    26,    48,    55,    54,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
    98,   100,     0,    41,    40,    25,    19,    18,    24,     0,
     0,    61,     0,   109,   108,    71,    85,    73,    75,    76,
    80,    81,    78,    79,    83,    84,    86,    87,    88,    64,
    65,    66,    67,    68,    69,   102,     0,    99,     0,     0,
    23,    57,    57,    96,   104,     0,    95,    58,    60,   103,
    57,    59,     0,     0,     0
};

static const short yydefgoto[] = {   163,
     5,     6,     7,     8,     9,    10,    11,    12,    13,    19,
    30,    72,    73,    74,    47,    25,    26,    14,    20,    21,
    22,    70,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
   147,   148,   149,    66
};

static const short yypact[] = {    19,
-32768,-32768,-32768,-32768,    19,-32768,-32768,   -20,   -14,    19,
-32768,-32768,-32768,-32768,-32768,    19,-32768,     1,    21,     6,
-32768,    25,-32768,    29,    66,    19,-32768,   -10,    19,-32768,
-32768,    29,-32768,    53,    40,    46,    90,    67,    90,    90,
    90,    90,    90,-32768,-32768,-32768,-32768,     8,    66,-32768,
-32768,     7,-32768,-32768,-32768,-32768,-32768,    89,    97,    93,
    23,   113,    74,    65,    -2,-32768,-32768,-32768,-32768,    11,
    29,    35,     9,-32768,-32768,-32768,-32768,    90,    76,    90,
-32768,-32768,-32768,-32768,    39,-32768,-32768,-32768,-32768,-32768,
    90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
    90,    90,    90,    90,    90,    90,    90,    90,    90,-32768,
-32768,    90,    90,-32768,-32768,-32768,-32768,-32768,-32768,    19,
    94,-32768,    96,-32768,-32768,    97,-32768,    93,    23,    23,
   113,   113,   113,   113,    74,    74,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   100,-32768,    41,   101,
-32768,   105,   105,-32768,-32768,    90,-32768,   131,-32768,-32768,
   105,-32768,   143,   144,-32768
};

static const short yypgoto[] = {-32768,
-32768,   140,-32768,-32768,   -15,-32768,   139,-32768,-32768,-32768,
-32768,-32768,-32768,    30,   145,-32768,-32768,    -3,-32768,   119,
    81,-32768,-32768,-32768,   -49,-32768,   117,-32768,-32768,-32768,
   -41,   -88,-32768,    64,    68,    33,    -4,    42,   -36,-32768,
-32768,-32768,-32768,-32768
};


#define	YYLAST		160


static const short yytable[] = {    88,
    24,    85,    81,    82,    83,    84,    31,    89,    86,   119,
    24,   114,    27,    71,    16,   140,   141,   142,   143,   144,
   145,     1,    67,   146,     2,     3,    18,     4,   110,   111,
   112,    68,    69,   -17,   113,   117,   121,    28,   123,   124,
    34,   155,   -20,    87,    32,    33,    90,   120,   115,    95,
    96,    97,    98,    29,   127,   127,   127,   127,   127,   127,
   127,   127,   127,   127,   137,   138,   139,   160,   118,    35,
    36,   150,   125,    37,  -101,    38,    28,    39,    78,   156,
   104,   105,   106,   107,   108,   109,   101,   102,   103,    40,
   131,   132,   133,   134,    76,    77,    41,    42,    43,    80,
    16,    39,   158,   159,    71,   -57,    44,    45,    46,    36,
    91,   162,    37,    40,    38,   122,    39,    93,    94,    92,
    41,    42,    43,    99,   100,   129,   130,   152,    40,   153,
    44,    45,    46,   154,   161,    41,    42,    43,   157,    16,
   135,   136,   164,   165,    15,    44,    45,    46,    23,   151,
    75,   116,    17,    79,   126,     0,     0,     0,     0,   128
};

static const short yycheck[] = {    49,
    16,    43,    39,    40,    41,    42,     1,     1,     1,     1,
    26,     1,    16,    29,    35,   104,   105,   106,   107,   108,
   109,     3,    26,   112,     6,     7,    41,     9,    31,    32,
    33,    42,    43,    33,    37,     1,    78,    37,    80,     1,
    16,     1,    34,    36,    39,    40,    40,    39,    38,    27,
    28,    29,    30,    33,    91,    92,    93,    94,    95,    96,
    97,    98,    99,   100,   101,   102,   103,   156,    34,    41,
     5,   113,    34,     8,    34,    10,    37,    12,    33,    39,
    16,    17,    18,    19,    20,    21,    13,    14,    15,    24,
    95,    96,    97,    98,    42,    43,    31,    32,    33,    33,
    35,    12,   152,   153,   120,    40,    41,    42,    43,     5,
    22,   161,     8,    24,    10,    40,    12,    25,    26,    23,
    31,    32,    33,    11,    12,    93,    94,    34,    24,    34,
    41,    42,    43,    34,     4,    31,    32,    33,    38,    35,
    99,   100,     0,     0,     5,    41,    42,    43,    10,   120,
    32,    71,     8,    37,    91,    -1,    -1,    -1,    -1,    92
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

case 14:
#line 46 "parser.y"
{current_type = INTEGER;;
    break;}
case 15:
#line 47 "parser.y"
{current_type = FLOAT;;
    break;}
case 16:
#line 48 "parser.y"
{current_type = VOID;;
    break;}
case 17:
#line 50 "parser.y"
{type = FUNCTION; idEntry->maintype = type; idEntry->subtype = current_type;;
    break;}
case 19:
#line 53 "parser.y"
{yyerrok; cErrors++; printNoBracket();;
    break;}
case 24:
#line 60 "parser.y"
{yyerrok; cErrors++; printSyntaxErr();;
    break;}
case 27:
#line 65 "parser.y"
{yyerrok; cErrors++; printNoBracket();;
    break;}
case 33:
#line 74 "parser.y"
{yyerrok; cErrors++; printNoSemicolon();;
    break;}
case 39:
#line 83 "parser.y"
{ // 스칼라 or 배열 or 파라미터
						if(type == FUNCTION){ // 파라미터
							idEntry->maintype = PARAMETER;
						}
						else{ // 스칼라
							idEntry->maintype = SCALAR;
						}
						idEntry->subtype = current_type;
					;
    break;}
case 40:
#line 92 "parser.y"
{idEntry->maintype = ARRAY; idEntry->subtype = current_type;;
    break;}
case 41:
#line 93 "parser.y"
{yyerrok; cErrors++; printNoBracket();;
    break;}
case 55:
#line 112 "parser.y"
{yyerrok; cErrors++; printNoSemicolon();;
    break;}
case 104:
#line 178 "parser.y"
{;
    break;}
case 109:
#line 184 "parser.y"
{yyerrok; cErrors++; printNoBracket();;
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
#line 186 "parser.y"

