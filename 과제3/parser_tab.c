
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



#define	YYFINAL		163
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
     0,     2,     4,     7,     9,    11,    14,    15,    20,    24,
    26,    28,    31,    33,    35,    37,    39,    41,    43,    45,
    49,    53,    55,    56,    58,    62,    65,    70,    75,    77,
    78,    80,    83,    87,    91,    93,    97,    99,   103,   107,
   109,   114,   116,   118,   119,   121,   122,   124,   127,   129,
   131,   133,   135,   137,   140,   142,   143,   149,   157,   163,
   167,   169,   171,   175,   179,   183,   187,   191,   195,   197,
   201,   203,   207,   209,   213,   217,   219,   223,   227,   231,
   235,   237,   241,   245,   247,   251,   255,   259,   261,   264,
   267,   270,   273,   275,   280,   285,   288,   291,   293,   295,
   296,   298,   302,   304,   306,   308
};

static const short yyrhs[] = {    46,
     0,    47,     0,    46,    47,     0,    48,     0,    64,     0,
    50,    61,     0,     0,    50,     1,    49,    61,     0,    51,
    56,    57,     0,    52,     0,    53,     0,    52,    53,     0,
    54,     0,    55,     0,     3,     0,     6,     0,     7,     0,
     9,     0,    41,     0,    33,    58,    34,     0,    33,    58,
     1,     0,    59,     0,     0,    60,     0,    59,    39,    60,
     0,    51,    67,     0,    35,    62,    69,    36,     0,    35,
    62,    69,     1,     0,    63,     0,     0,    64,     0,    63,
    64,     0,    51,    65,    40,     0,    51,    65,     1,     0,
    66,     0,    65,    39,    66,     0,    67,     0,    67,    16,
    42,     0,    67,    16,    43,     0,    41,     0,    41,    37,
    68,    38,     0,    42,     0,    43,     0,     0,    70,     0,
     0,    71,     0,    70,    71,     0,    61,     0,    72,     0,
    74,     0,    75,     0,    76,     0,    73,    40,     0,    77,
     0,     0,     5,    33,    77,    34,    71,     0,     5,    33,
    77,    34,    71,     4,    71,     0,    10,    33,    77,    34,
    71,     0,     8,    73,    40,     0,    78,     0,    79,     0,
    85,    16,    78,     0,    85,    17,    78,     0,    85,    18,
    78,     0,    85,    19,    78,     0,    85,    20,    78,     0,
    85,    21,    78,     0,    80,     0,    79,    22,    80,     0,
    81,     0,    80,    23,    81,     0,    82,     0,    81,    25,
    82,     0,    81,    26,    82,     0,    83,     0,    82,    29,
    83,     0,    82,    30,    83,     0,    82,    27,    83,     0,
    82,    28,    83,     0,    84,     0,    83,    11,    84,     0,
    83,    12,    84,     0,    85,     0,    84,    13,    85,     0,
    84,    14,    85,     0,    84,    15,    85,     0,    86,     0,
    12,    85,     0,    24,    85,     0,    31,    85,     0,    32,
    85,     0,    90,     0,    86,    37,    77,    38,     0,    86,
    33,    87,    34,     0,    86,    31,     0,    86,    32,     0,
    88,     0,    89,     0,     0,    78,     0,    89,    39,    78,
     0,    41,     0,    42,     0,    43,     0,    33,    77,    34,
     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    24,    26,    27,    30,    31,    33,    34,    34,    36,    38,
    40,    41,    43,    44,    46,    48,    49,    50,    52,    54,
    55,    57,    58,    60,    61,    63,    65,    66,    68,    69,
    71,    72,    75,    76,    79,    80,    82,    83,    84,    86,
    95,    98,    99,   100,   102,   103,   105,   106,   108,   109,
   110,   111,   112,   114,   117,   118,   120,   121,   123,   125,
   127,   129,   130,   131,   132,   133,   134,   135,   137,   138,
   140,   141,   143,   144,   145,   147,   148,   149,   150,   151,
   153,   154,   155,   157,   158,   159,   160,   162,   163,   164,
   165,   166,   168,   169,   170,   171,   172,   174,   176,   177,
   179,   180,   183,   184,   185,   186
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
    45,    46,    46,    47,    47,    48,    49,    48,    50,    51,
    52,    52,    53,    53,    54,    55,    55,    55,    56,    57,
    57,    58,    58,    59,    59,    60,    61,    61,    62,    62,
    63,    63,    64,    64,    65,    65,    66,    66,    66,    67,
    67,    68,    68,    68,    69,    69,    70,    70,    71,    71,
    71,    71,    71,    72,    73,    73,    74,    74,    75,    76,
    77,    78,    78,    78,    78,    78,    78,    78,    79,    79,
    80,    80,    81,    81,    81,    82,    82,    82,    82,    82,
    83,    83,    83,    84,    84,    84,    84,    85,    85,    85,
    85,    85,    86,    86,    86,    86,    86,    87,    88,    88,
    89,    89,    90,    90,    90,    90
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     2,     0,     4,     3,     1,
     1,     2,     1,     1,     1,     1,     1,     1,     1,     3,
     3,     1,     0,     1,     3,     2,     4,     4,     1,     0,
     1,     2,     3,     3,     1,     3,     1,     3,     3,     1,
     4,     1,     1,     0,     1,     0,     1,     2,     1,     1,
     1,     1,     1,     2,     1,     0,     5,     7,     5,     3,
     1,     1,     3,     3,     3,     3,     3,     3,     1,     3,
     1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
     1,     3,     3,     1,     3,     3,     3,     1,     2,     2,
     2,     2,     1,     4,     4,     2,     2,     1,     1,     0,
     1,     3,     1,     1,     1,     3
};

static const short yydefact[] = {     0,
    15,    16,    17,    18,     1,     2,     4,     0,     0,    10,
    11,    13,    14,     5,     3,     7,    30,     6,    40,     0,
     0,    35,    37,    12,     0,     0,    46,    29,    31,    44,
    23,     9,    34,     0,    33,     0,     8,    40,     0,    56,
     0,     0,     0,     0,     0,     0,   103,   104,   105,    49,
     0,    45,    47,    50,     0,    51,    52,    53,    55,    61,
    62,    69,    71,    73,    76,    81,    84,    88,    93,    32,
    42,    43,     0,     0,     0,    22,    24,    36,    38,    39,
     0,     0,     0,    89,    90,    91,    92,     0,    28,    27,
    48,    54,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    96,    97,   100,     0,    41,    26,    21,    20,     0,
     0,    60,     0,   106,    70,    84,    72,    74,    75,    79,
    80,    77,    78,    82,    83,    85,    86,    87,    63,    64,
    65,    66,    67,    68,   101,     0,    98,    99,     0,    25,
    56,    56,    95,     0,    94,    57,    59,   102,    56,    58,
     0,     0,     0
};

static const short yydefgoto[] = {   161,
     5,     6,     7,    25,     8,     9,    10,    11,    12,    13,
    20,    32,    75,    76,    77,    50,    27,    28,    14,    21,
    22,    23,    73,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,   146,   147,   148,    69
};

static const short yypact[] = {    23,
-32768,-32768,-32768,-32768,    23,-32768,-32768,     9,   -25,    23,
-32768,-32768,-32768,-32768,-32768,-32768,    23,-32768,   -20,   -15,
     6,-32768,    15,-32768,    35,    33,    70,    23,-32768,    -2,
    23,-32768,-32768,    33,-32768,    26,-32768,     1,    46,   107,
    48,   107,   107,   107,   107,   107,-32768,-32768,-32768,-32768,
     7,    70,-32768,-32768,    49,-32768,-32768,-32768,-32768,-32768,
    74,    75,    47,    94,    65,    37,    67,    16,-32768,-32768,
-32768,-32768,    68,    33,     8,    69,-32768,-32768,-32768,-32768,
   107,    89,   107,-32768,-32768,-32768,-32768,    91,-32768,-32768,
-32768,-32768,   107,   107,   107,   107,   107,   107,   107,   107,
   107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
   107,-32768,-32768,   107,   107,-32768,-32768,-32768,-32768,    23,
    96,-32768,    98,-32768,    75,-32768,    47,    94,    94,    65,
    65,    65,    65,    37,    37,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,    99,-32768,    95,    97,-32768,
    85,    85,-32768,   107,-32768,   132,-32768,-32768,    85,-32768,
   137,   141,-32768
};

static const short yypgoto[] = {-32768,
-32768,   138,-32768,-32768,-32768,   -16,-32768,   134,-32768,-32768,
-32768,-32768,-32768,-32768,    22,     3,-32768,-32768,    -3,-32768,
   111,    72,-32768,-32768,-32768,   -52,-32768,   112,-32768,-32768,
-32768,   -44,   -87,-32768,    54,    57,    -4,   -64,    13,   -39,
-32768,-32768,-32768,-32768,-32768
};


#define	YYLAST		152


static const short yytable[] = {    91,
    26,    88,    84,    85,    86,    87,    33,    89,   118,    16,
    18,    26,   -19,    29,    74,    19,    30,    31,   139,   140,
   141,   142,   143,   144,    70,     1,   145,    37,     2,     3,
    36,     4,   130,   131,   132,   133,   121,    30,   123,    71,
    72,   119,    90,    17,    34,    35,   112,   113,   114,   103,
   104,   105,   115,   126,   126,   126,   126,   126,   126,   126,
   126,   126,   126,   136,   137,   138,   158,    79,    80,    17,
   149,    95,    96,    38,    39,   101,   102,    40,    81,    41,
    83,    42,   106,   107,   108,   109,   110,   111,    92,    39,
   128,   129,    40,    43,    41,    93,    42,    94,   156,   157,
    44,    45,    46,    74,    17,   116,   160,   120,    43,   -56,
    47,    48,    49,   134,   135,    44,    45,    46,    42,    17,
    97,    98,    99,   100,   124,    47,    48,    49,   122,   151,
    43,   152,   153,   154,   155,   159,   162,    44,    45,    46,
   163,   150,    15,    24,    78,   117,   125,    47,    48,    49,
   127,    82
};

static const short yycheck[] = {    52,
    17,    46,    42,    43,    44,    45,     1,     1,     1,     1,
     8,    28,    33,    17,    31,    41,    37,    33,   106,   107,
   108,   109,   110,   111,    28,     3,   114,    25,     6,     7,
    16,     9,    97,    98,    99,   100,    81,    37,    83,    42,
    43,    34,    36,    35,    39,    40,    31,    32,    33,    13,
    14,    15,    37,    93,    94,    95,    96,    97,    98,    99,
   100,   101,   102,   103,   104,   105,   154,    42,    43,    35,
   115,    25,    26,    41,     5,    11,    12,     8,    33,    10,
    33,    12,    16,    17,    18,    19,    20,    21,    40,     5,
    95,    96,     8,    24,    10,    22,    12,    23,   151,   152,
    31,    32,    33,   120,    35,    38,   159,    39,    24,    40,
    41,    42,    43,   101,   102,    31,    32,    33,    12,    35,
    27,    28,    29,    30,    34,    41,    42,    43,    40,    34,
    24,    34,    34,    39,    38,     4,     0,    31,    32,    33,
     0,   120,     5,    10,    34,    74,    93,    41,    42,    43,
    94,    40
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
#line 34 "parser.y"
{printf("unexpected tokens");;
    break;}
case 8:
#line 34 "parser.y"
{yyerrok;;
    break;}
case 9:
#line 36 "parser.y"
{ printf("header complete\n");type = NONTYPE;;
    break;}
case 16:
#line 48 "parser.y"
{current_type = INTEGER;;
    break;}
case 17:
#line 49 "parser.y"
{current_type = FLOAT;;
    break;}
case 18:
#line 50 "parser.y"
{current_type = VOID;;
    break;}
case 19:
#line 52 "parser.y"
{type = FUNCTION; idEntry->maintype = type; idEntry->subtype = current_type;;
    break;}
case 21:
#line 55 "parser.y"
{yyerrok; cErrors++; printf("')' is missing\n");;
    break;}
case 28:
#line 66 "parser.y"
{yyerrok; cErrors++; printf("'}' is disappear%s'\n", yytext);;
    break;}
case 34:
#line 76 "parser.y"
{yyerrok; cErrors++; printf("';' is disapper before '%s'\n", yytext); ;
    break;}
case 40:
#line 86 "parser.y"
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
case 41:
#line 95 "parser.y"
{idEntry->maintype = ARRAY; idEntry->subtype = current_type;;
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
#line 189 "parser.y"

