
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

#line 7 "parser.y"

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



#define	YYFINAL		205
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
     0,     2,     4,     7,     9,    11,    14,    17,    20,    24,
    28,    30,    32,    35,    37,    39,    41,    43,    45,    47,
    49,    53,    57,    59,    60,    62,    66,    70,    73,    78,
    83,    85,    86,    88,    91,    95,    99,   101,   105,   109,
   111,   115,   119,   121,   126,   131,   133,   135,   136,   138,
   139,   141,   144,   146,   148,   150,   152,   154,   157,   160,
   162,   163,   169,   177,   183,   191,   197,   198,   205,   209,
   213,   215,   217,   221,   225,   229,   233,   237,   241,   245,
   249,   253,   257,   261,   265,   267,   271,   275,   277,   281,
   285,   287,   291,   295,   299,   303,   305,   309,   313,   317,
   321,   325,   329,   333,   337,   339,   343,   347,   351,   355,
   357,   361,   365,   369,   373,   377,   381,   383,   386,   389,
   392,   395,   397,   402,   407,   412,   417,   420,   423,   425,
   427,   428,   430,   434,   436,   438,   440,   444
};

static const short yyrhs[] = {    46,
     0,    47,     0,    46,    47,     0,    48,     0,    63,     0,
     1,    40,     0,     1,    36,     0,    49,    60,     0,    50,
    55,    56,     0,     1,    55,    56,     0,    51,     0,    52,
     0,    51,    52,     0,    53,     0,    54,     0,     3,     0,
     6,     0,     7,     0,     9,     0,    41,     0,    33,    57,
    34,     0,    33,    57,     1,     0,    58,     0,     0,    59,
     0,    58,    39,    59,     0,    58,    59,     1,     0,    50,
    66,     0,    35,    61,    68,    36,     0,    35,    61,    68,
     1,     0,    62,     0,     0,    63,     0,    62,    63,     0,
    50,    64,    40,     0,    50,    64,     1,     0,    65,     0,
    64,    39,    65,     0,    64,    65,     1,     0,    66,     0,
    66,    16,    42,     0,    66,    16,    43,     0,    41,     0,
    41,    37,    67,    38,     0,    41,    37,    67,     1,     0,
    42,     0,    43,     0,     0,    69,     0,     0,    70,     0,
    69,    70,     0,    60,     0,    71,     0,    73,     0,    74,
     0,    76,     0,    72,    40,     0,    77,     1,     0,    77,
     0,     0,     5,    33,    77,    34,    70,     0,     5,    33,
    77,    34,    70,     4,    70,     0,     5,    33,     1,    34,
    70,     0,     5,    33,     1,    34,    70,     4,    70,     0,
    10,    33,    77,    34,    70,     0,     0,    10,    33,     1,
    75,    34,    70,     0,     8,    72,    40,     0,     8,    72,
     1,     0,    78,     0,    79,     0,    85,    16,    78,     0,
    85,    17,    78,     0,    85,    18,    78,     0,    85,    19,
    78,     0,    85,    20,    78,     0,    85,    21,    78,     0,
    85,    16,     1,     0,    85,    17,     1,     0,    85,    18,
     1,     0,    85,    19,     1,     0,    85,    20,     1,     0,
    85,    21,     1,     0,    80,     0,    79,    22,    80,     0,
    79,    22,     1,     0,    81,     0,    80,    23,    81,     0,
    80,    23,     1,     0,    82,     0,    81,    25,    82,     0,
    81,    26,    82,     0,    81,    25,     1,     0,    81,    26,
     1,     0,    83,     0,    82,    29,    83,     0,    82,    30,
    83,     0,    82,    27,    83,     0,    82,    28,    83,     0,
    82,    29,     1,     0,    82,    30,     1,     0,    82,    27,
     1,     0,    82,    28,     1,     0,    84,     0,    83,    11,
    84,     0,    83,    12,    84,     0,    83,    11,     1,     0,
    83,    12,     1,     0,    85,     0,    84,    13,    85,     0,
    84,    14,    85,     0,    84,    15,    85,     0,    84,    13,
     1,     0,    84,    14,     1,     0,    84,    15,     1,     0,
    86,     0,    12,    85,     0,    24,    85,     0,    31,    85,
     0,    32,    85,     0,    90,     0,    86,    37,    77,    38,
     0,    86,    37,    77,     1,     0,    86,    33,    87,    34,
     0,    86,    33,    87,     1,     0,    86,    31,     0,    86,
    32,     0,    88,     0,    89,     0,     0,    78,     0,    89,
    39,    78,     0,    41,     0,    42,     0,    43,     0,    33,
    77,    34,     0,    33,    77,     1,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    33,    35,    36,    38,    39,    40,    41,    43,    45,    46,
    48,    50,    51,    53,    54,    56,    58,    59,    60,    64,
    68,    69,    72,    73,    75,    76,    77,    79,    84,    85,
    87,    88,    90,    91,    94,    95,    98,    99,   100,   102,
   103,   104,   106,   119,   131,   133,   134,   135,   137,   138,
   140,   141,   143,   144,   145,   146,   147,   150,   151,   153,
   154,   156,   157,   158,   159,   161,   162,   162,   164,   165,
   167,   169,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,   180,   181,   183,   184,   185,   187,   188,   189,
   191,   192,   193,   194,   195,   197,   198,   199,   200,   201,
   202,   203,   204,   205,   207,   208,   209,   210,   211,   213,
   214,   215,   216,   217,   218,   219,   221,   222,   223,   224,
   225,   227,   228,   229,   230,   231,   233,   234,   236,   238,
   239,   241,   242,   245,   246,   247,   248,   249
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
"opt_expression","if_st","while_st","@1","return_st","expression","assignment_exp",
"logical_or_exp","logical_and_exp","equality_exp","relational_exp","additive_exp",
"multiplicative_exp","unary_exp","postfix_exp","opt_actual_param","actual_param",
"actual_param_list","primary_exp",""
};
#endif

static const short yyr1[] = {     0,
    45,    46,    46,    47,    47,    47,    47,    48,    49,    49,
    50,    51,    51,    52,    52,    53,    54,    54,    54,    55,
    56,    56,    57,    57,    58,    58,    58,    59,    60,    60,
    61,    61,    62,    62,    63,    63,    64,    64,    64,    65,
    65,    65,    66,    66,    66,    67,    67,    67,    68,    68,
    69,    69,    70,    70,    70,    70,    70,    71,    71,    72,
    72,    73,    73,    73,    73,    74,    75,    74,    76,    76,
    77,    78,    78,    78,    78,    78,    78,    78,    78,    78,
    78,    78,    78,    78,    79,    79,    79,    80,    80,    80,
    81,    81,    81,    81,    81,    82,    82,    82,    82,    82,
    82,    82,    82,    82,    83,    83,    83,    83,    83,    84,
    84,    84,    84,    84,    84,    84,    85,    85,    85,    85,
    85,    86,    86,    86,    86,    86,    86,    86,    87,    88,
    88,    89,    89,    90,    90,    90,    90,    90
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     2,     2,     2,     3,     3,
     1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
     3,     3,     1,     0,     1,     3,     3,     2,     4,     4,
     1,     0,     1,     2,     3,     3,     1,     3,     3,     1,
     3,     3,     1,     4,     4,     1,     1,     0,     1,     0,
     1,     2,     1,     1,     1,     1,     1,     2,     2,     1,
     0,     5,     7,     5,     7,     5,     0,     6,     3,     3,
     1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
     1,     3,     3,     3,     3,     1,     3,     3,     3,     3,
     3,     3,     3,     3,     1,     3,     3,     3,     3,     1,
     3,     3,     3,     3,     3,     3,     1,     2,     2,     2,
     2,     1,     4,     4,     4,     4,     2,     2,     1,     1,
     0,     1,     3,     1,     1,     1,     3,     3
};

static const short yydefact[] = {     0,
     0,    16,    17,    18,    19,     0,     2,     4,     0,     0,
    11,    12,    14,    15,     5,     7,     6,    20,     0,     3,
    32,     8,    43,     0,     0,    37,    40,    13,    24,    10,
     0,    50,    31,    33,    48,     9,    36,     0,    35,    43,
     0,     0,     0,     0,    23,    25,     0,    61,     0,     0,
     0,     0,     0,     0,   134,   135,   136,    53,     0,    49,
    51,    54,     0,    55,    56,    57,     0,    71,    72,    85,
    88,    91,    96,   105,   110,   117,   122,    34,    46,    47,
     0,    38,    39,    41,    42,    28,    22,    21,     0,     0,
     0,     0,    60,     0,   118,   119,   120,   121,     0,    30,
    29,    52,    58,    59,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   127,   128,   131,     0,    45,    44,    26,
    27,     0,     0,    70,    69,    67,     0,   138,   137,    87,
    86,   110,    90,    89,    94,    92,    95,    93,   103,    99,
   104,   100,   101,    97,   102,    98,   108,   106,   109,   107,
   114,   111,   115,   112,   116,   113,    79,    73,    80,    74,
    81,    75,    82,    76,    83,    77,    84,    78,   132,     0,
   129,   130,     0,    61,    61,     0,    61,   126,   125,     0,
   124,   123,    64,    62,    61,    66,   133,    61,    61,    68,
    65,    63,     0,     0,     0
};

static const short yydefgoto[] = {   203,
     6,     7,     8,     9,    43,    11,    12,    13,    14,    19,
    30,    44,    45,    46,    58,    32,    33,    15,    25,    26,
    27,    81,    59,    60,    61,    62,    63,    64,    65,   186,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
    76,   180,   181,   182,    77
};

static const short yypact[] = {    19,
    55,-32768,-32768,-32768,-32768,    83,-32768,-32768,   -11,   -12,
    29,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    43,-32768,
    29,-32768,   -10,    43,    14,-32768,    23,-32768,    29,-32768,
    11,   368,    29,-32768,     6,-32768,-32768,    11,-32768,    85,
    77,    56,    11,    41,    34,-32768,    60,   394,   114,   394,
   394,   394,   394,   394,-32768,-32768,-32768,-32768,    15,   368,
-32768,-32768,   120,-32768,-32768,-32768,    30,-32768,   140,   150,
   103,   354,   158,   130,   347,    99,-32768,-32768,-32768,-32768,
     7,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    29,   181,
    70,    32,-32768,    73,-32768,-32768,-32768,-32768,    45,-32768,
-32768,-32768,-32768,-32768,    76,   109,   122,   125,   147,   160,
   173,   186,   199,   212,   225,   238,   251,   264,   277,   290,
   303,   316,   329,-32768,-32768,   394,   394,-32768,-32768,-32768,
-32768,   149,   152,-32768,-32768,-32768,   165,-32768,-32768,-32768,
   150,-32768,-32768,   103,-32768,   354,-32768,   354,-32768,   158,
-32768,   158,-32768,   158,-32768,   158,-32768,   130,-32768,   130,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    86,
-32768,   168,    18,   381,   381,   178,   381,-32768,-32768,   394,
-32768,-32768,   205,   216,   381,-32768,-32768,   381,   381,-32768,
-32768,-32768,   221,   222,-32768
};

static const short yypgoto[] = {-32768,
-32768,   219,-32768,-32768,   175,-32768,   223,-32768,-32768,   228,
   209,-32768,-32768,   -39,   226,-32768,-32768,    -3,-32768,    -4,
   203,-32768,-32768,-32768,   -60,-32768,   200,-32768,-32768,-32768,
-32768,   -47,  -109,-32768,   142,   145,    69,   285,    81,   -48,
-32768,-32768,-32768,-32768,-32768
};


#define	YYLAST		437


static const short yytable[] = {   102,
    93,    95,    96,    97,    98,    90,    99,   128,   168,   170,
   172,   174,   176,   178,    37,   100,   179,    34,   191,     1,
    41,     2,   -20,    21,     3,     4,    35,     5,    23,    78,
   104,     2,   134,    82,     3,     4,     2,     5,    42,     3,
     4,    87,     5,   133,   129,   138,   137,    79,    80,   130,
   101,    40,    38,    39,    40,   192,   142,   142,   142,   142,
   142,   142,   142,   142,   142,   142,   162,   164,   166,   -60,
   132,   135,    89,   136,    88,    29,   140,    83,   139,   183,
   197,    50,    -1,     1,    50,     2,   188,    50,     3,     4,
    16,     5,    91,    51,    17,    18,    51,    84,    85,    51,
    52,    53,    54,    52,    53,    54,    52,    53,    54,   143,
    55,    56,    57,    55,    56,    57,    55,    56,    57,   189,
    50,    35,   145,   193,   194,   147,   196,   107,   108,   124,
   125,   126,    51,    50,   200,   127,    50,   201,   202,    52,
    53,    54,   115,   116,   117,    51,    94,   149,    51,    55,
    56,    57,    52,    53,    54,    52,    53,    54,    50,   103,
   151,   105,    55,    56,    57,    55,    56,    57,   113,   114,
    51,    50,   106,   153,    10,   146,   148,    52,    53,    54,
    10,   131,   184,    51,    50,   185,   155,    55,    56,    57,
    52,    53,    54,   158,   160,    31,    51,    50,   187,   157,
    55,    56,    57,    52,    53,    54,   190,    31,   198,    51,
    50,   195,   159,    55,    56,    57,    52,    53,    54,   199,
   204,   205,    51,    50,    20,   161,    55,    56,    57,    52,
    53,    54,    36,    28,    22,    51,    50,    24,   163,    55,
    56,    57,    52,    53,    54,    86,   141,    92,    51,    50,
   144,   165,    55,    56,    57,    52,    53,    54,     0,     0,
     0,    51,    50,     0,   167,    55,    56,    57,    52,    53,
    54,     0,     0,     0,    51,    50,     0,   169,    55,    56,
    57,    52,    53,    54,     0,     0,     0,    51,    50,     0,
   171,    55,    56,    57,    52,    53,    54,     0,     0,     0,
    51,    50,     0,   173,    55,    56,    57,    52,    53,    54,
     0,     0,     0,    51,    50,     0,   175,    55,    56,    57,
    52,    53,    54,     0,     0,     0,    51,    50,     0,   177,
    55,    56,    57,    52,    53,    54,     0,     0,     0,    51,
    50,     0,     0,    55,    56,    57,    52,    53,    54,     0,
     0,     0,    51,     0,     0,     0,    55,    56,    57,    52,
    53,    54,   118,   119,   120,   121,   122,   123,     0,    55,
    56,    57,    47,     0,     0,    48,     0,    49,     0,    50,
   109,   110,   111,   112,     0,    47,     0,     0,    48,     0,
    49,    51,    50,   150,   152,   154,   156,     0,    52,    53,
    54,     0,    21,     0,    51,    50,     0,   -61,    55,    56,
    57,    52,    53,    54,     0,    21,     0,    51,     0,     0,
     0,    55,    56,    57,    52,    53,    54,     0,     0,     0,
     0,     0,     0,     0,    55,    56,    57
};

static const short yycheck[] = {    60,
    48,    50,    51,    52,    53,    45,    54,     1,   118,   119,
   120,   121,   122,   123,     1,     1,   126,    21,     1,     1,
    25,     3,    33,    35,     6,     7,    37,     9,    41,    33,
     1,     3,     1,    38,     6,     7,     3,     9,    16,     6,
     7,     1,     9,    91,    38,     1,    94,    42,    43,    89,
    36,    41,    39,    40,    41,    38,   105,   106,   107,   108,
   109,   110,   111,   112,   113,   114,   115,   116,   117,    40,
     1,    40,    39,     1,    34,    33,     1,     1,    34,   127,
   190,    12,     0,     1,    12,     3,     1,    12,     6,     7,
    36,     9,    33,    24,    40,    41,    24,    42,    43,    24,
    31,    32,    33,    31,    32,    33,    31,    32,    33,     1,
    41,    42,    43,    41,    42,    43,    41,    42,    43,    34,
    12,    37,     1,   184,   185,     1,   187,    25,    26,    31,
    32,    33,    24,    12,   195,    37,    12,   198,   199,    31,
    32,    33,    13,    14,    15,    24,    33,     1,    24,    41,
    42,    43,    31,    32,    33,    31,    32,    33,    12,    40,
     1,    22,    41,    42,    43,    41,    42,    43,    11,    12,
    24,    12,    23,     1,     0,   107,   108,    31,    32,    33,
     6,     1,    34,    24,    12,    34,     1,    41,    42,    43,
    31,    32,    33,   113,   114,    21,    24,    12,    34,     1,
    41,    42,    43,    31,    32,    33,    39,    33,     4,    24,
    12,    34,     1,    41,    42,    43,    31,    32,    33,     4,
     0,     0,    24,    12,     6,     1,    41,    42,    43,    31,
    32,    33,    24,    11,     9,    24,    12,    10,     1,    41,
    42,    43,    31,    32,    33,    43,   105,    48,    24,    12,
   106,     1,    41,    42,    43,    31,    32,    33,    -1,    -1,
    -1,    24,    12,    -1,     1,    41,    42,    43,    31,    32,
    33,    -1,    -1,    -1,    24,    12,    -1,     1,    41,    42,
    43,    31,    32,    33,    -1,    -1,    -1,    24,    12,    -1,
     1,    41,    42,    43,    31,    32,    33,    -1,    -1,    -1,
    24,    12,    -1,     1,    41,    42,    43,    31,    32,    33,
    -1,    -1,    -1,    24,    12,    -1,     1,    41,    42,    43,
    31,    32,    33,    -1,    -1,    -1,    24,    12,    -1,     1,
    41,    42,    43,    31,    32,    33,    -1,    -1,    -1,    24,
    12,    -1,    -1,    41,    42,    43,    31,    32,    33,    -1,
    -1,    -1,    24,    -1,    -1,    -1,    41,    42,    43,    31,
    32,    33,    16,    17,    18,    19,    20,    21,    -1,    41,
    42,    43,     5,    -1,    -1,     8,    -1,    10,    -1,    12,
    27,    28,    29,    30,    -1,     5,    -1,    -1,     8,    -1,
    10,    24,    12,   109,   110,   111,   112,    -1,    31,    32,
    33,    -1,    35,    -1,    24,    12,    -1,    40,    41,    42,
    43,    31,    32,    33,    -1,    35,    -1,    24,    -1,    -1,
    -1,    41,    42,    43,    31,    32,    33,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    41,    42,    43
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

case 6:
#line 40 "parser.y"
{yyerrok; cErrors++; printExternalDeclarationErrSemi();;
    break;}
case 7:
#line 41 "parser.y"
{yyerrok; cErrors++; printExternalDeclarationErrBracket();;
    break;}
case 9:
#line 45 "parser.y"
{type = NONTYPE;;
    break;}
case 10:
#line 46 "parser.y"
{yyerrok; cErrors++; printInvalidFuncHeader();;
    break;}
case 16:
#line 56 "parser.y"
{check_const = 1; ;
    break;}
case 17:
#line 58 "parser.y"
{current_data_type = INTEGER;;
    break;}
case 18:
#line 59 "parser.y"
{current_data_type = FLOAT;;
    break;}
case 19:
#line 60 "parser.y"
{current_data_type = VOID;;
    break;}
case 20:
#line 64 "parser.y"
{type = FUNCTION; idEntry->maintype = type; idEntry->datatype = current_data_type;;
    break;}
case 22:
#line 69 "parser.y"
{yyerrok; cErrors++; printNoRoundBracket();;
    break;}
case 25:
#line 75 "parser.y"
{current_data_type = NONTYPE; check_const = 0;;
    break;}
case 27:
#line 77 "parser.y"
{yyerrok; cErrors++; printNoComma(); ;
    break;}
case 30:
#line 85 "parser.y"
{yyerrok; cErrors++; printNoCurlyBracket();;
    break;}
case 35:
#line 94 "parser.y"
{current_data_type = NONTYPE; check_const = 0;;
    break;}
case 36:
#line 95 "parser.y"
{yyerrok; cErrors++; printNoSemicolon(); ;
    break;}
case 39:
#line 100 "parser.y"
{cErrors++; printNoComma(); ;
    break;}
case 43:
#line 107 "parser.y"
{  
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
case 44:
#line 120 "parser.y"
{
						idEntry->subtype = ARRAY;
						idEntry->datatype = current_data_type;

						if(type == FUNCTION){ // 배열 파라미터
							idEntry->maintype = PARAMETER;
						}
						else{ // 배열 변수
						  idEntry->maintype = VARIABLE;
						}
					;
    break;}
case 45:
#line 131 "parser.y"
{yyerrok; cErrors++; printNoSquareBracket();;
    break;}
case 59:
#line 151 "parser.y"
{yyerrok; cErrors++; printNoSemicolon();;
    break;}
case 64:
#line 158 "parser.y"
{yyerrok; cErrors++; printInvalidExpressionBra();;
    break;}
case 65:
#line 159 "parser.y"
{yyerrok; cErrors++; printInvalidExpressionBra();;
    break;}
case 67:
#line 162 "parser.y"
{printInvalidExpressionBra();;
    break;}
case 68:
#line 162 "parser.y"
{yyerrok; cErrors++;;
    break;}
case 70:
#line 165 "parser.y"
{yyerrok; cErrors++; printNoSemicolon();;
    break;}
case 79:
#line 176 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 80:
#line 177 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 81:
#line 178 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 82:
#line 179 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 83:
#line 180 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 84:
#line 181 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 87:
#line 185 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 90:
#line 189 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 94:
#line 194 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 95:
#line 195 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 101:
#line 202 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 102:
#line 203 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 103:
#line 204 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 104:
#line 205 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 108:
#line 210 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 109:
#line 211 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 114:
#line 217 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 115:
#line 218 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 116:
#line 219 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 124:
#line 229 "parser.y"
{yyerrok; cErrors++;printNoSquareBracket();
    break;}
case 126:
#line 231 "parser.y"
{yyerrok; cErrors++; printNoRoundBracket();;
    break;}
case 138:
#line 249 "parser.y"
{yyerrok; cErrors++; printNoRoundBracket();;
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
#line 251 "parser.y"

