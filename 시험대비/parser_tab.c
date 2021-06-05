
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
#define	TCHAR	266
#define	TSTRING	267
#define	TADD	268
#define	TSUB	269
#define	TMUL	270
#define	TDIV	271
#define	TMOD	272
#define	TASSIGN	273
#define	TADDASSIGN	274
#define	TSUBASSIGN	275
#define	TMULASSIGN	276
#define	TDIVASSIGN	277
#define	TMODASSIGN	278
#define	TOR	279
#define	TAND	280
#define	TNOT	281
#define	TEQUAL	282
#define	TNOTEQU	283
#define	TGREATE	284
#define	TLESSE	285
#define	TGREAT	286
#define	TLESS	287
#define	TINC	288
#define	TDEC	289
#define	TBRASL	290
#define	TBRASR	291
#define	TBRAML	292
#define	TBRAMR	293
#define	TBRALL	294
#define	TBRALR	295
#define	TCOMMA	296
#define	TSEMICOLON	297
#define	TIDENT	298
#define	TNUMBER	299
#define	TRNUMBER	300
#define	TCHARVALUE	301
#define	TSTRINGVALUE	302
#define	LOWER_THAN_ELSE	303

#line 7 "parser.y"

#include <stdio.h>
#include <ctype.h>
#include <malloc.h>
#include "tn.h"
#include "glob.h"

int current_data_type = NONTYPE;
int check_const = 0;
int funcSTindex = 0;

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



#define	YYFINAL		211
#define	YYFLAG		-32768
#define	YYNTBASE	49

#define YYTRANSLATE(x) ((unsigned)(x) <= 303 ? yytranslate[x] : 95)

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
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     7,     9,    11,    14,    17,    20,    24,
    28,    30,    32,    35,    37,    39,    41,    43,    45,    47,
    49,    51,    53,    57,    61,    63,    64,    66,    70,    74,
    77,    82,    87,    89,    90,    92,    95,    99,   103,   105,
   109,   113,   115,   119,   123,   127,   131,   133,   138,   143,
   145,   147,   148,   150,   151,   153,   156,   158,   160,   162,
   164,   166,   169,   172,   174,   175,   181,   189,   195,   203,
   209,   210,   217,   221,   225,   227,   229,   233,   237,   241,
   245,   249,   253,   257,   261,   265,   269,   273,   277,   279,
   283,   287,   289,   293,   297,   299,   303,   307,   311,   315,
   317,   321,   325,   329,   333,   337,   341,   345,   349,   351,
   355,   359,   363,   367,   369,   373,   377,   381,   385,   389,
   393,   395,   398,   401,   404,   407,   409,   414,   419,   424,
   429,   432,   435,   437,   439,   440,   442,   446,   448,   450,
   452,   454,   456,   460
};

static const short yyrhs[] = {    50,
     0,    51,     0,    50,    51,     0,    52,     0,    67,     0,
     1,    42,     0,     1,    38,     0,    53,    64,     0,    54,
    59,    60,     0,     1,    59,    60,     0,    55,     0,    56,
     0,    55,    56,     0,    57,     0,    58,     0,     3,     0,
     6,     0,     7,     0,     9,     0,    11,     0,    12,     0,
    43,     0,    35,    61,    36,     0,    35,    61,     1,     0,
    62,     0,     0,    63,     0,    62,    41,    63,     0,    62,
    63,     1,     0,    54,    70,     0,    37,    65,    72,    38,
     0,    37,    65,    72,     1,     0,    66,     0,     0,    67,
     0,    66,    67,     0,    54,    68,    42,     0,    54,    68,
     1,     0,    69,     0,    68,    41,    69,     0,    68,    69,
     1,     0,    70,     0,    70,    18,    44,     0,    70,    18,
    45,     0,    70,    18,    46,     0,    70,    18,    47,     0,
    43,     0,    43,    39,    71,    40,     0,    43,    39,    71,
     1,     0,    44,     0,    45,     0,     0,    73,     0,     0,
    74,     0,    73,    74,     0,    64,     0,    75,     0,    77,
     0,    78,     0,    80,     0,    76,    42,     0,    81,     1,
     0,    81,     0,     0,     5,    35,    81,    36,    74,     0,
     5,    35,    81,    36,    74,     4,    74,     0,     5,    35,
     1,    36,    74,     0,     5,    35,     1,    36,    74,     4,
    74,     0,    10,    35,    81,    36,    74,     0,     0,    10,
    35,     1,    79,    36,    74,     0,     8,    76,    42,     0,
     8,    76,     1,     0,    82,     0,    83,     0,    89,    18,
    82,     0,    89,    19,    82,     0,    89,    20,    82,     0,
    89,    21,    82,     0,    89,    22,    82,     0,    89,    23,
    82,     0,    89,    18,     1,     0,    89,    19,     1,     0,
    89,    20,     1,     0,    89,    21,     1,     0,    89,    22,
     1,     0,    89,    23,     1,     0,    84,     0,    83,    24,
    84,     0,    83,    24,     1,     0,    85,     0,    84,    25,
    85,     0,    84,    25,     1,     0,    86,     0,    85,    27,
    86,     0,    85,    28,    86,     0,    85,    27,     1,     0,
    85,    28,     1,     0,    87,     0,    86,    31,    87,     0,
    86,    32,    87,     0,    86,    29,    87,     0,    86,    30,
    87,     0,    86,    31,     1,     0,    86,    32,     1,     0,
    86,    29,     1,     0,    86,    30,     1,     0,    88,     0,
    87,    13,    88,     0,    87,    14,    88,     0,    87,    13,
     1,     0,    87,    14,     1,     0,    89,     0,    88,    15,
    89,     0,    88,    16,    89,     0,    88,    17,    89,     0,
    88,    15,     1,     0,    88,    16,     1,     0,    88,    17,
     1,     0,    90,     0,    14,    89,     0,    26,    89,     0,
    33,    89,     0,    34,    89,     0,    94,     0,    90,    39,
    81,    40,     0,    90,    39,    81,     1,     0,    90,    35,
    91,    36,     0,    90,    35,    91,     1,     0,    90,    33,
     0,    90,    34,     0,    92,     0,    93,     0,     0,    82,
     0,    93,    41,    82,     0,    43,     0,    44,     0,    45,
     0,    46,     0,    47,     0,    35,    81,    36,     0,    35,
    81,     1,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    33,    35,    36,    38,    39,    40,    41,    43,    45,    46,
    48,    50,    51,    53,    54,    56,    58,    59,    60,    61,
    62,    66,    70,    71,    74,    75,    77,    78,    79,    81,
    86,    87,    89,    90,    92,    93,    96,    97,   100,   101,
   102,   104,   105,   106,   107,   108,   110,   124,   137,   139,
   140,   141,   143,   144,   146,   147,   149,   150,   151,   152,
   153,   156,   157,   159,   160,   162,   163,   164,   165,   167,
   168,   168,   170,   171,   173,   175,   176,   177,   178,   179,
   180,   181,   182,   183,   184,   185,   186,   187,   189,   190,
   191,   193,   194,   195,   197,   198,   199,   200,   201,   203,
   204,   205,   206,   207,   208,   209,   210,   211,   213,   214,
   215,   216,   217,   219,   220,   221,   222,   223,   224,   225,
   227,   228,   229,   230,   231,   233,   234,   235,   236,   237,
   239,   240,   242,   244,   245,   247,   248,   251,   252,   253,
   254,   255,   256,   257
};

static const char * const yytname[] = {   "$","error","$undefined.","TCONST",
"TELSE","TIF","TINT","TFLOAT","TRETURN","TVOID","TWHILE","TCHAR","TSTRING","TADD",
"TSUB","TMUL","TDIV","TMOD","TASSIGN","TADDASSIGN","TSUBASSIGN","TMULASSIGN",
"TDIVASSIGN","TMODASSIGN","TOR","TAND","TNOT","TEQUAL","TNOTEQU","TGREATE","TLESSE",
"TGREAT","TLESS","TINC","TDEC","TBRASL","TBRASR","TBRAML","TBRAMR","TBRALL",
"TBRALR","TCOMMA","TSEMICOLON","TIDENT","TNUMBER","TRNUMBER","TCHARVALUE","TSTRINGVALUE",
"LOWER_THAN_ELSE","mini_c","translation_unit","external_dcl","function_def",
"function_header","dcl_spec","dcl_specifiers","dcl_specifier","type_qualifier",
"type_specifier","function_name","formal_param","opt_formal_param","formal_param_list",
"param_dcl","compound_st","opt_dcl_list","declaration_list","declaration","init_dcl_list",
"init_declarator","declarator","opt_number","opt_stat_list","statement_list",
"statement","expression_st","opt_expression","if_st","while_st","@1","return_st",
"expression","assignment_exp","logical_or_exp","logical_and_exp","equality_exp",
"relational_exp","additive_exp","multiplicative_exp","unary_exp","postfix_exp",
"opt_actual_param","actual_param","actual_param_list","primary_exp",""
};
#endif

static const short yyr1[] = {     0,
    49,    50,    50,    51,    51,    51,    51,    52,    53,    53,
    54,    55,    55,    56,    56,    57,    58,    58,    58,    58,
    58,    59,    60,    60,    61,    61,    62,    62,    62,    63,
    64,    64,    65,    65,    66,    66,    67,    67,    68,    68,
    68,    69,    69,    69,    69,    69,    70,    70,    70,    71,
    71,    71,    72,    72,    73,    73,    74,    74,    74,    74,
    74,    75,    75,    76,    76,    77,    77,    77,    77,    78,
    79,    78,    80,    80,    81,    82,    82,    82,    82,    82,
    82,    82,    82,    82,    82,    82,    82,    82,    83,    83,
    83,    84,    84,    84,    85,    85,    85,    85,    85,    86,
    86,    86,    86,    86,    86,    86,    86,    86,    87,    87,
    87,    87,    87,    88,    88,    88,    88,    88,    88,    88,
    89,    89,    89,    89,    89,    90,    90,    90,    90,    90,
    90,    90,    91,    92,    92,    93,    93,    94,    94,    94,
    94,    94,    94,    94
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     2,     2,     2,     3,     3,
     1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     3,     3,     1,     0,     1,     3,     3,     2,
     4,     4,     1,     0,     1,     2,     3,     3,     1,     3,
     3,     1,     3,     3,     3,     3,     1,     4,     4,     1,
     1,     0,     1,     0,     1,     2,     1,     1,     1,     1,
     1,     2,     2,     1,     0,     5,     7,     5,     7,     5,
     0,     6,     3,     3,     1,     1,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
     3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
     3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
     3,     3,     3,     1,     3,     3,     3,     3,     3,     3,
     1,     2,     2,     2,     2,     1,     4,     4,     4,     4,
     2,     2,     1,     1,     0,     1,     3,     1,     1,     1,
     1,     1,     3,     3
};

static const short yydefact[] = {     0,
     0,    16,    17,    18,    19,    20,    21,     0,     2,     4,
     0,     0,    11,    12,    14,    15,     5,     7,     6,    22,
     0,     3,    34,     8,    47,     0,     0,    39,    42,    13,
    26,    10,     0,    54,    33,    35,    52,     9,    38,     0,
    37,    47,     0,     0,     0,     0,    25,    27,     0,    65,
     0,     0,     0,     0,     0,     0,   138,   139,   140,   141,
   142,    57,     0,    53,    55,    58,     0,    59,    60,    61,
     0,    75,    76,    89,    92,    95,   100,   109,   114,   121,
   126,    36,    50,    51,     0,    40,    41,    43,    44,    45,
    46,    30,    24,    23,     0,     0,     0,     0,    64,     0,
   122,   123,   124,   125,     0,    32,    31,    56,    62,    63,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
   132,   135,     0,    49,    48,    28,    29,     0,     0,    74,
    73,    71,     0,   144,   143,    91,    90,   114,    94,    93,
    98,    96,    99,    97,   107,   103,   108,   104,   105,   101,
   106,   102,   112,   110,   113,   111,   118,   115,   119,   116,
   120,   117,    83,    77,    84,    78,    85,    79,    86,    80,
    87,    81,    88,    82,   136,     0,   133,   134,     0,    65,
    65,     0,    65,   130,   129,     0,   128,   127,    68,    66,
    65,    70,   137,    65,    65,    72,    69,    67,     0,     0,
     0
};

static const short yydefgoto[] = {   209,
     8,     9,    10,    11,    45,    13,    14,    15,    16,    21,
    32,    46,    47,    48,    62,    34,    35,    17,    27,    28,
    29,    85,    63,    64,    65,    66,    67,    68,    69,   192,
    70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
    80,   186,   187,   188,    81
};

static const short yypact[] = {   554,
     1,-32768,-32768,-32768,-32768,-32768,-32768,   547,-32768,-32768,
    -3,   -16,   561,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    51,-32768,   561,-32768,    -7,    51,    34,-32768,    87,-32768,
   561,-32768,   -13,   499,   561,-32768,    -4,-32768,-32768,   -13,
-32768,    70,   109,    44,   -13,    49,    91,-32768,   103,   484,
   107,   484,   484,   484,   484,   484,-32768,-32768,-32768,-32768,
-32768,-32768,    14,   499,-32768,-32768,    -6,-32768,-32768,-32768,
    18,-32768,   125,   133,    55,   115,    82,   169,   474,   -10,
-32768,-32768,-32768,-32768,    13,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   561,   155,    73,    36,-32768,    78,
-32768,-32768,-32768,-32768,    92,-32768,-32768,-32768,-32768,-32768,
   129,   134,   156,   182,   197,   219,   234,   256,   271,   293,
   308,   330,   345,   367,   382,   404,   419,   441,   456,-32768,
-32768,   484,   484,-32768,-32768,-32768,-32768,   123,   135,-32768,
-32768,-32768,   151,-32768,-32768,-32768,   133,-32768,-32768,    55,
-32768,   115,-32768,   115,-32768,    82,-32768,    82,-32768,    82,
-32768,    82,-32768,   169,-32768,   169,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   100,-32768,   120,    41,    12,
    12,   152,    12,-32768,-32768,   484,-32768,-32768,   161,   188,
    12,-32768,-32768,    12,    12,-32768,-32768,-32768,   193,   194,
-32768
};

static const short yypgoto[] = {-32768,
-32768,   187,-32768,-32768,   131,-32768,   184,-32768,-32768,   192,
   179,-32768,-32768,   -41,   195,-32768,-32768,    -2,-32768,    -9,
   162,-32768,-32768,-32768,   -64,-32768,   159,-32768,-32768,-32768,
-32768,   -49,  -116,-32768,    99,   101,    20,    35,    -5,   -50,
-32768,-32768,-32768,-32768,-32768
};


#define	YYLAST		573


static const short yytable[] = {   108,
    99,   101,   102,   103,   104,    96,   105,   174,   176,   178,
   180,   182,   184,   134,   106,   185,    49,    43,   110,    50,
    36,    51,   130,   131,   132,    52,    25,   -22,   133,    42,
    86,    37,    82,    23,    39,   109,   140,    53,    18,    83,
    84,   197,    19,    20,    54,    55,    56,   139,    23,    93,
   143,   107,   135,   136,    57,    58,    59,    60,    61,   -64,
   148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
   168,   170,   172,   138,    40,    41,    42,   141,   142,   203,
   198,   113,   114,   189,    94,    31,    52,    88,    89,    90,
    91,    52,   144,     2,   119,   120,     3,     4,    53,     5,
   194,     6,     7,    53,    44,    54,    55,    56,    37,    87,
    54,    55,    56,   164,   166,    57,    58,    59,    60,    61,
    57,    58,    59,    60,    61,   199,   200,   145,   202,   146,
    12,    95,   152,   154,   149,   195,   206,    97,    12,   207,
   208,   100,    52,   115,   116,   117,   118,    52,   111,   156,
   158,   160,   162,    33,    53,   137,   151,   112,   190,    53,
   196,    54,    55,    56,   204,    33,    54,    55,    56,    52,
   191,    57,    58,    59,    60,    61,    57,    58,    59,    60,
    61,    53,   153,   121,   122,   123,   193,   201,    54,    55,
    56,   205,   210,   211,    22,    52,    30,   155,    57,    58,
    59,    60,    61,    26,    38,    24,    92,    53,    98,   147,
    52,     0,   150,     0,    54,    55,    56,     0,     0,   157,
     0,     0,    53,     0,    57,    58,    59,    60,    61,    54,
    55,    56,    52,     0,   159,     0,     0,     0,     0,    57,
    58,    59,    60,    61,    53,     0,     0,    52,     0,     0,
     0,    54,    55,    56,     0,     0,   161,     0,     0,    53,
     0,    57,    58,    59,    60,    61,    54,    55,    56,    52,
     0,   163,     0,     0,     0,     0,    57,    58,    59,    60,
    61,    53,     0,     0,    52,     0,     0,     0,    54,    55,
    56,     0,     0,   165,     0,     0,    53,     0,    57,    58,
    59,    60,    61,    54,    55,    56,    52,     0,   167,     0,
     0,     0,     0,    57,    58,    59,    60,    61,    53,     0,
     0,    52,     0,     0,     0,    54,    55,    56,     0,     0,
   169,     0,     0,    53,     0,    57,    58,    59,    60,    61,
    54,    55,    56,    52,     0,   171,     0,     0,     0,     0,
    57,    58,    59,    60,    61,    53,     0,     0,    52,     0,
     0,     0,    54,    55,    56,     0,     0,   173,     0,     0,
    53,     0,    57,    58,    59,    60,    61,    54,    55,    56,
    52,     0,   175,     0,     0,     0,     0,    57,    58,    59,
    60,    61,    53,     0,     0,    52,     0,     0,     0,    54,
    55,    56,     0,     0,   177,     0,     0,    53,     0,    57,
    58,    59,    60,    61,    54,    55,    56,    52,     0,   179,
     0,     0,     0,     0,    57,    58,    59,    60,    61,    53,
     0,     0,    52,     0,     0,     0,    54,    55,    56,     0,
     0,   181,     0,     0,    53,     0,    57,    58,    59,    60,
    61,    54,    55,    56,    52,     0,   183,     0,     0,     0,
     0,    57,    58,    59,    60,    61,    53,     0,     0,    52,
     0,     0,     0,    54,    55,    56,     0,     0,     0,     0,
     0,    53,     0,    57,    58,    59,    60,    61,    54,    55,
    56,   124,   125,   126,   127,   128,   129,    52,    57,    58,
    59,    60,    61,    49,     0,     0,    50,     0,    51,    53,
     0,     0,    52,     0,     0,     0,    54,    55,    56,     0,
     0,     0,     0,     0,    53,     0,    57,    58,    59,    60,
    61,    54,    55,    56,     0,    23,     0,     0,     0,     0,
   -65,    57,    58,    59,    60,    61,    -1,     1,     0,     2,
     0,     0,     3,     4,     1,     5,     2,     6,     7,     3,
     4,     0,     5,     2,     6,     7,     3,     4,     0,     5,
     0,     6,     7
};

static const short yycheck[] = {    64,
    50,    52,    53,    54,    55,    47,    56,   124,   125,   126,
   127,   128,   129,     1,     1,   132,     5,    27,     1,     8,
    23,    10,    33,    34,    35,    14,    43,    35,    39,    43,
    40,    39,    35,    37,     1,    42,     1,    26,    38,    44,
    45,     1,    42,    43,    33,    34,    35,    97,    37,     1,
   100,    38,    40,    95,    43,    44,    45,    46,    47,    42,
   111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
   121,   122,   123,     1,    41,    42,    43,    42,     1,   196,
    40,    27,    28,   133,    36,    35,    14,    44,    45,    46,
    47,    14,     1,     3,    13,    14,     6,     7,    26,     9,
     1,    11,    12,    26,    18,    33,    34,    35,    39,     1,
    33,    34,    35,   119,   120,    43,    44,    45,    46,    47,
    43,    44,    45,    46,    47,   190,   191,    36,   193,     1,
     0,    41,   113,   114,     1,    36,   201,    35,     8,   204,
   205,    35,    14,    29,    30,    31,    32,    14,    24,   115,
   116,   117,   118,    23,    26,     1,     1,    25,    36,    26,
    41,    33,    34,    35,     4,    35,    33,    34,    35,    14,
    36,    43,    44,    45,    46,    47,    43,    44,    45,    46,
    47,    26,     1,    15,    16,    17,    36,    36,    33,    34,
    35,     4,     0,     0,     8,    14,    13,     1,    43,    44,
    45,    46,    47,    12,    26,    11,    45,    26,    50,   111,
    14,    -1,   112,    -1,    33,    34,    35,    -1,    -1,     1,
    -1,    -1,    26,    -1,    43,    44,    45,    46,    47,    33,
    34,    35,    14,    -1,     1,    -1,    -1,    -1,    -1,    43,
    44,    45,    46,    47,    26,    -1,    -1,    14,    -1,    -1,
    -1,    33,    34,    35,    -1,    -1,     1,    -1,    -1,    26,
    -1,    43,    44,    45,    46,    47,    33,    34,    35,    14,
    -1,     1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,
    47,    26,    -1,    -1,    14,    -1,    -1,    -1,    33,    34,
    35,    -1,    -1,     1,    -1,    -1,    26,    -1,    43,    44,
    45,    46,    47,    33,    34,    35,    14,    -1,     1,    -1,
    -1,    -1,    -1,    43,    44,    45,    46,    47,    26,    -1,
    -1,    14,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,
     1,    -1,    -1,    26,    -1,    43,    44,    45,    46,    47,
    33,    34,    35,    14,    -1,     1,    -1,    -1,    -1,    -1,
    43,    44,    45,    46,    47,    26,    -1,    -1,    14,    -1,
    -1,    -1,    33,    34,    35,    -1,    -1,     1,    -1,    -1,
    26,    -1,    43,    44,    45,    46,    47,    33,    34,    35,
    14,    -1,     1,    -1,    -1,    -1,    -1,    43,    44,    45,
    46,    47,    26,    -1,    -1,    14,    -1,    -1,    -1,    33,
    34,    35,    -1,    -1,     1,    -1,    -1,    26,    -1,    43,
    44,    45,    46,    47,    33,    34,    35,    14,    -1,     1,
    -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,    26,
    -1,    -1,    14,    -1,    -1,    -1,    33,    34,    35,    -1,
    -1,     1,    -1,    -1,    26,    -1,    43,    44,    45,    46,
    47,    33,    34,    35,    14,    -1,     1,    -1,    -1,    -1,
    -1,    43,    44,    45,    46,    47,    26,    -1,    -1,    14,
    -1,    -1,    -1,    33,    34,    35,    -1,    -1,    -1,    -1,
    -1,    26,    -1,    43,    44,    45,    46,    47,    33,    34,
    35,    18,    19,    20,    21,    22,    23,    14,    43,    44,
    45,    46,    47,     5,    -1,    -1,     8,    -1,    10,    26,
    -1,    -1,    14,    -1,    -1,    -1,    33,    34,    35,    -1,
    -1,    -1,    -1,    -1,    26,    -1,    43,    44,    45,    46,
    47,    33,    34,    35,    -1,    37,    -1,    -1,    -1,    -1,
    42,    43,    44,    45,    46,    47,     0,     1,    -1,     3,
    -1,    -1,     6,     7,     1,     9,     3,    11,    12,     6,
     7,    -1,     9,     3,    11,    12,     6,     7,    -1,     9,
    -1,    11,    12
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
case 8:
#line 43 "parser.y"
{funcSTindex = GLOBAL;;
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
#line 61 "parser.y"
{current_data_type = CHAR;;
    break;}
case 21:
#line 62 "parser.y"
{current_data_type = STRING;;
    break;}
case 22:
#line 66 "parser.y"
{type = FUNCTION; idEntry->maintype = type; idEntry->datatype = current_data_type; funcSTindex = idEntry->index; idEntry->scope = funcSTindex;;
    break;}
case 24:
#line 71 "parser.y"
{yyerrok; cErrors++; printNoRoundBracket();;
    break;}
case 27:
#line 77 "parser.y"
{current_data_type = NONTYPE; check_const = 0;;
    break;}
case 29:
#line 79 "parser.y"
{yyerrok; cErrors++; printNoComma(); ;
    break;}
case 32:
#line 87 "parser.y"
{yyerrok; cErrors++; printNoCurlyBracket();;
    break;}
case 37:
#line 96 "parser.y"
{current_data_type = NONTYPE; check_const = 0;;
    break;}
case 38:
#line 97 "parser.y"
{yyerrok; cErrors++; printNoSemicolon(); ;
    break;}
case 41:
#line 102 "parser.y"
{cErrors++; printNoComma(); ;
    break;}
case 47:
#line 111 "parser.y"
{  
						idEntry->subtype = SCALAR;
						idEntry->datatype = current_data_type;
						idEntry->scope = funcSTindex;

						if(type == FUNCTION){ // 스칼라 파라미터
							idEntry->maintype = PARAMETER;
						}
						else{ // 스칼라 변수
							idEntry->maintype = VARIABLE;
							idEntry->is_const = check_const;
						}
					;
    break;}
case 48:
#line 125 "parser.y"
{
						idEntry->subtype = ARRAY;
						idEntry->datatype = current_data_type;
						idEntry->scope = funcSTindex;

						if(type == FUNCTION){ // 배열 파라미터
							idEntry->maintype = PARAMETER;
						}
						else{ // 배열 변수
						  idEntry->maintype = VARIABLE;
						}
					;
    break;}
case 49:
#line 137 "parser.y"
{yyerrok; cErrors++; printNoSquareBracket();;
    break;}
case 63:
#line 157 "parser.y"
{yyerrok; cErrors++; printNoSemicolon();;
    break;}
case 68:
#line 164 "parser.y"
{yyerrok; cErrors++; printInvalidExpressionBra();;
    break;}
case 69:
#line 165 "parser.y"
{yyerrok; cErrors++; printInvalidExpressionBra();;
    break;}
case 71:
#line 168 "parser.y"
{printInvalidExpressionBra();;
    break;}
case 72:
#line 168 "parser.y"
{yyerrok; cErrors++;;
    break;}
case 74:
#line 171 "parser.y"
{yyerrok; cErrors++; printNoSemicolon();;
    break;}
case 83:
#line 182 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 84:
#line 183 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 85:
#line 184 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 86:
#line 185 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 87:
#line 186 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 88:
#line 187 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 91:
#line 191 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 94:
#line 195 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 98:
#line 200 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 99:
#line 201 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 105:
#line 208 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 106:
#line 209 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 107:
#line 210 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 108:
#line 211 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 112:
#line 216 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 113:
#line 217 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 118:
#line 223 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 119:
#line 224 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 120:
#line 225 "parser.y"
{yyerrok; cErrors++; printInvalidExpression();;
    break;}
case 128:
#line 235 "parser.y"
{yyerrok; cErrors++;printNoSquareBracket();
    break;}
case 130:
#line 237 "parser.y"
{yyerrok; cErrors++; printNoRoundBracket();;
    break;}
case 144:
#line 257 "parser.y"
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
#line 259 "parser.y"

