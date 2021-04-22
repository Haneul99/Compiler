#include <stdio.h>
#include "tn.h"
extern yylex();
extern char *yytext;

void main()
{
    enum tokentypes tt;    /* token type */
    while((tt=yylex()) != TEOF){
        switch(tt){
            case TCONST     : printf("%-22s %s\n", "TCONST", yytext); break;
            case TELSE      : printf("%-22s %s\n", "TELSE", yytext); break;
            case TIF        : printf("%-22s %s\n", "TIF", yytext); break;
            case TINT       : printf("%-22s %s\n", "TINT", yytext); break;
            case TRETURN    : printf("%-22s %s\n", "TRETURN", yytext); break;
            case TVOID      : printf("%-22s %s\n", "TVOID", yytext); break;
            case TWHILE     : printf("%-22s %s\n", "TWHILE", yytext); break;
            case TEQUAL     : printf("%-22s %s\n", "TEQUAL", yytext); break;
            case TNOTEQU    : printf("%-22s %s\n", "TNOTEQU", yytext); break;
            case TLESSE     : printf("%-22s %s\n", "TLESSE", yytext); break;
            case TGREATE    : printf("%-22s %s\n", "TGREATE", yytext); break;
            case TAND       : printf("%-22s %s\n", "TAND", yytext); break;
            case TOR        : printf("%-22s %s\n", "TOR", yytext); break;
            case TINC       : printf("%-22s %s\n", "TINC", yytext); break;
            case TDEC       : printf("%-22s %s\n", "TDEC", yytext); break;
            case TADDASSIGN : printf("%-22s %s\n", "TADDASSIGN", yytext); break;
            case TSUBASSIGN : printf("%-22s %s\n", "TSUBASSIGN", yytext); break;
            case TMULASSIGN : printf("%-22s %s\n", "TMULASSIGN", yytext); break;
            case TDIVASSIGN : printf("%-22s %s\n", "TDIVASSIGN", yytext); break;
            case TMODASSIGN : printf("%-22s %s\n", "TMODASSIGN", yytext); break;
            case TIDENT     : printf("%-22s %s\n", "TIDENT", yytext); break;
            case TNUMBER    : printf("%-22s %s\n", "TNUMBER", yytext); break;
        }
    }
}