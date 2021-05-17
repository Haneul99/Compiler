
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



#define	YYFINAL		163
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
     0,     2,     4,     7,     9,    11,    14,    17,    21,    23,
    25,    28,    30,    32,    34,    36,    38,    40,    42,    46,
    50,    52,    53,    55,    59,    62,    67,    69,    70,    72,
    75,    79,    83,    85,    89,    91,    95,    99,   101,   106,
   108,   110,   111,   113,   114,   116,   119,   121,   123,   125,
   127,   129,   132,   135,   137,   138,   144,   152,   158,   162,
   166,   168,   170,   174,   178,   182,   186,   190,   194,   196,
   200,   202,   206,   208,   212,   216,   218,   222,   226,   230,
   234,   236,   240,   244,   246,   250,   254,   258,   260,   263,
   266,   269,   272,   274,   279,   284,   287,   290,   292,   294,
   295,   297,   301,   303,   305,   307
};

static const short yyrhs[] = {    46,
     0,    47,     0,    46,    47,     0,    48,     0,    63,     0,
    49,    60,     0,     1,    60,     0,    50,    55,    56,     0,
    51,     0,    52,     0,    51,    52,     0,    53,     0,    54,
     0,     3,     0,     6,     0,     7,     0,     9,     0,    41,
     0,    33,    57,    34,     0,    33,    57,     1,     0,    58,
     0,     0,    59,     0,    58,    39,    59,     0,    50,    66,
     0,    35,    61,    68,    36,     0,    62,     0,     0,    63,
     0,    62,    63,     0,    50,    64,    40,     0,    50,    64,
     1,     0,    65,     0,    64,    39,    65,     0,    66,     0,
    66,    16,    42,     0,    66,    16,    43,     0,    41,     0,
    41,    37,    67,    38,     0,    42,     0,    43,     0,     0,
    69,     0,     0,    70,     0,    69,    70,     0,    60,     0,
    71,     0,    73,     0,    74,     0,    75,     0,    72,    40,
     0,    72,     1,     0,    76,     0,     0,     5,    33,    76,
    34,    70,     0,     5,    33,    76,    34,    70,     4,    70,
     0,    10,    33,    76,    34,    70,     0,     8,    72,    40,
     0,     8,    72,     1,     0,    77,     0,    78,     0,    84,
    16,    77,     0,    84,    17,    77,     0,    84,    18,    77,
     0,    84,    19,    77,     0,    84,    20,    77,     0,    84,
    21,    77,     0,    79,     0,    78,    22,    79,     0,    80,
     0,    79,    23,    80,     0,    81,     0,    80,    25,    81,
     0,    80,    26,    81,     0,    82,     0,    81,    29,    82,
     0,    81,    30,    82,     0,    81,    27,    82,     0,    81,
    28,    82,     0,    83,     0,    82,    11,    83,     0,    82,
    12,    83,     0,    84,     0,    83,    13,    84,     0,    83,
    14,    84,     0,    83,    15,    84,     0,    85,     0,    12,
    84,     0,    24,    84,     0,    31,    84,     0,    32,    84,
     0,    89,     0,    85,    37,    76,    38,     0,    85,    33,
    86,    34,     0,    85,    31,     0,    85,    32,     0,    87,
     0,    88,     0,     0,    77,     0,    88,    39,    77,     0,
    41,     0,    42,     0,    43,     0,    33,    76,    34,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    25,    27,    28,    31,    32,    34,    35,    38,    41,    43,
    44,    46,    47,    49,    51,    52,    53,    57,    61,    62,
    64,    65,    67,    68,    70,    75,    78,    79,    81,    82,
    85,    86,    88,    89,    91,    92,    93,    95,   106,   118,
   119,   120,   124,   125,   127,   128,   130,   131,   132,   133,
   134,   136,   137,   139,   140,   142,   143,   145,   147,   148,
   150,   152,   153,   154,   155,   156,   157,   158,   160,   161,
   163,   164,   166,   167,   168,   170,   171,   172,   173,   174,
   176,   177,   178,   180,   181,   182,   183,   185,   186,   187,
   188,   189,   191,   192,   193,   194,   195,   197,   199,   200,
   202,   203,   206,   207,   208,   209
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
    45,    46,    46,    47,    47,    48,    48,    49,    50,    51,
    51,    52,    52,    53,    54,    54,    54,    55,    56,    56,
    57,    57,    58,    58,    59,    60,    61,    61,    62,    62,
    63,    63,    64,    64,    65,    65,    65,    66,    66,    67,
    67,    67,    68,    68,    69,    69,    70,    70,    70,    70,
    70,    71,    71,    72,    72,    73,    73,    74,    75,    75,
    76,    77,    77,    77,    77,    77,    77,    77,    78,    78,
    79,    79,    80,    80,    80,    81,    81,    81,    81,    81,
    82,    82,    82,    83,    83,    83,    83,    84,    84,    84,
    84,    84,    85,    85,    85,    85,    85,    86,    87,    87,
    88,    88,    89,    89,    89,    89
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     2,     2,     3,     1,     1,
     2,     1,     1,     1,     1,     1,     1,     1,     3,     3,
     1,     0,     1,     3,     2,     4,     1,     0,     1,     2,
     3,     3,     1,     3,     1,     3,     3,     1,     4,     1,
     1,     0,     1,     0,     1,     2,     1,     1,     1,     1,
     1,     2,     2,     1,     0,     5,     7,     5,     3,     3,
     1,     1,     3,     3,     3,     3,     3,     3,     1,     3,
     1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
     1,     3,     3,     1,     3,     3,     3,     1,     2,     2,
     2,     2,     1,     4,     4,     2,     2,     1,     1,     0,
     1,     3,     1,     1,     1,     3
};

static const short yydefact[] = {     0,
     0,    14,    15,    16,    17,     0,     2,     4,     0,     0,
     9,    10,    12,    13,     5,    28,     7,     3,     6,    38,
     0,     0,    33,    35,    11,     0,    55,    27,    29,    42,
    22,     8,    32,     0,    31,     0,    38,     0,    55,     0,
     0,     0,     0,     0,     0,   103,   104,   105,    47,     0,
    55,    45,    48,     0,    49,    50,    51,    54,    61,    62,
    69,    71,    73,    76,    81,    84,    88,    93,    30,    40,
    41,     0,     0,     0,    21,    23,    34,    36,    37,     0,
     0,     0,    89,    90,    91,    92,     0,    26,    46,    53,
    52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    96,    97,   100,     0,    39,    25,    20,    19,     0,     0,
    60,    59,     0,   106,    70,    84,    72,    74,    75,    79,
    80,    77,    78,    82,    83,    85,    86,    87,    63,    64,
    65,    66,    67,    68,   101,     0,    98,    99,     0,    24,
    55,    55,    95,     0,    94,    56,    58,   102,    55,    57,
     0,     0,     0
};

static const short yydefgoto[] = {   161,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    21,
    32,    74,    75,    76,    49,    27,    28,    15,    22,    23,
    24,    72,    50,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
   146,   147,   148,    68
};

static const short yypact[] = {    67,
   -21,-32768,-32768,-32768,-32768,    27,-32768,-32768,   -21,   -12,
    35,-32768,-32768,-32768,-32768,    35,-32768,-32768,-32768,   -22,
    20,     6,-32768,    19,-32768,    -1,    74,    35,-32768,   -11,
    35,-32768,-32768,    -1,-32768,    38,    46,    36,   113,    39,
   113,   113,   113,   113,   113,-32768,-32768,-32768,-32768,    49,
    87,-32768,-32768,     7,-32768,-32768,-32768,-32768,-32768,    53,
    71,    52,    22,    79,    99,   154,    56,-32768,-32768,-32768,
-32768,    58,    -1,     9,    82,-32768,-32768,-32768,-32768,   113,
     8,   113,-32768,-32768,-32768,-32768,    90,-32768,-32768,-32768,
-32768,   113,   113,   113,   113,   113,   113,   113,   113,   113,
   113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
-32768,-32768,   113,   113,-32768,-32768,-32768,-32768,    35,    98,
-32768,-32768,   101,-32768,    71,-32768,    52,    22,    22,    79,
    79,    79,    79,    99,    99,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   109,-32768,    94,   110,-32768,
   126,   126,-32768,   113,-32768,   143,-32768,-32768,   126,-32768,
   149,   151,-32768
};

static const short yypgoto[] = {-32768,
-32768,   146,-32768,-32768,   -15,-32768,   142,-32768,-32768,-32768,
-32768,-32768,-32768,    41,    16,-32768,-32768,    -4,-32768,   128,
    91,-32768,-32768,-32768,   -51,-32768,   124,-32768,-32768,-32768,
   -43,   -87,-32768,    73,    83,    32,    43,     2,   -38,-32768,
-32768,-32768,-32768,-32768
};


#define	YYLAST		176


static const short yytable[] = {    89,
    26,    87,    83,    84,    85,    86,    33,    90,   121,   117,
   -18,    29,    26,    16,    30,    73,    17,   139,   140,   141,
   142,   143,   144,    69,    19,   145,    -1,     1,    20,     2,
    70,    71,     3,     4,    36,     5,   120,     2,   123,    37,
     3,     4,   118,     5,    34,    35,    91,   122,    96,    97,
    98,    99,    31,   126,   126,   126,   126,   126,   126,   126,
   126,   126,   126,   136,   137,   138,   158,     1,    80,     2,
   149,    82,     3,     4,    92,     5,    94,    95,    38,    78,
    79,    39,    30,    40,    88,    41,   111,   112,   113,   100,
   101,    38,   114,    93,    39,   115,    40,    42,    41,   156,
   157,   134,   135,    73,    43,    44,    45,   160,    16,   -44,
    42,   102,   103,   104,    46,    47,    48,    43,    44,    45,
   119,    16,   -43,   124,    41,   128,   129,    46,    47,    48,
    38,   151,   154,    39,   152,    40,    42,    41,   130,   131,
   132,   133,   153,    43,    44,    45,   159,   155,   162,    42,
   163,    18,    25,    46,    47,    48,    43,    44,    45,   150,
    16,    77,    81,   116,   125,     0,    46,    47,    48,   105,
   106,   107,   108,   109,   110,   127
};

static const short yycheck[] = {    51,
    16,    45,    41,    42,    43,    44,     1,     1,     1,     1,
    33,    16,    28,    35,    37,    31,     1,   105,   106,   107,
   108,   109,   110,    28,     9,   113,     0,     1,    41,     3,
    42,    43,     6,     7,    16,     9,    80,     3,    82,    41,
     6,     7,    34,     9,    39,    40,    40,    40,    27,    28,
    29,    30,    33,    92,    93,    94,    95,    96,    97,    98,
    99,   100,   101,   102,   103,   104,   154,     1,    33,     3,
   114,    33,     6,     7,    22,     9,    25,    26,     5,    42,
    43,     8,    37,    10,    36,    12,    31,    32,    33,    11,
    12,     5,    37,    23,     8,    38,    10,    24,    12,   151,
   152,   100,   101,   119,    31,    32,    33,   159,    35,    36,
    24,    13,    14,    15,    41,    42,    43,    31,    32,    33,
    39,    35,    36,    34,    12,    94,    95,    41,    42,    43,
     5,    34,    39,     8,    34,    10,    24,    12,    96,    97,
    98,    99,    34,    31,    32,    33,     4,    38,     0,    24,
     0,     6,    11,    41,    42,    43,    31,    32,    33,   119,
    35,    34,    39,    73,    92,    -1,    41,    42,    43,    16,
    17,    18,    19,    20,    21,    93
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

case 7:
#line 35 "parser.y"
{yyerrok; cErrors++; printf("function header missing\n", yytext);;
    break;}
case 8:
#line 38 "parser.y"
{type = NONTYPE;;
    break;}
case 14:
#line 49 "parser.y"
{check_const = 1; ;
    break;}
case 15:
#line 51 "parser.y"
{current_data_type = INTEGER;;
    break;}
case 16:
#line 52 "parser.y"
{current_data_type = FLOAT;;
    break;}
case 17:
#line 53 "parser.y"
{current_data_type = VOID;;
    break;}
case 18:
#line 57 "parser.y"
{type = FUNCTION; idEntry->maintype = type; idEntry->datatype = current_data_type;;
    break;}
case 20:
#line 62 "parser.y"
{yyerrok; cErrors++; printf("')' is missing before %s\n", yytext);;
    break;}
case 31:
#line 85 "parser.y"
{current_data_type = NONTYPE; check_const = 0;;
    break;}
case 32:
#line 86 "parser.y"
{yyerrok; cErrors++; printf("';' is disapper before '%s'\n", yytext); ;
    break;}
case 38:
#line 95 "parser.y"
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
case 39:
#line 106 "parser.y"
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
case 53:
#line 137 "parser.y"
{yyerrok; cErrors++; printf("';' is disapper before %s\n", yytext);;
    break;}
case 60:
#line 148 "parser.y"
{yyerrok; cErrors++; printf("';' is disapper before %s\n", yytext);;
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

