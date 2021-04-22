/*
 * main.c - 각 token에 대한 출력
 * programmer - 팀 6: 1876375정하늘, 1971039이진경, 1971051최수정
 * date -
 */

#include <stdio.h>
#include "tn.h"
#include "glob.h"

extern yylex();
extern char *yytext;
int lineCount = 1;
int cErrors = 0;
int insertflag = 0;


/*
* printtoken() --token type 별로 출력
*/
void printtoken(enum tnumber tn) {
	if (tn != TERROR) printf("%-22d", lineCount);
	switch (tn) {
	case TCONST: printf("%-22s%-22s%-22s", "TCONST","", yytext); break;
	case TELSE: printf("%-22s%-22s%-22s", "TELSE", "", yytext); break;
	case TIF: printf("%-22s%-22s%-22s", "TIF", "", yytext); break;
	case TINT: printf("%-22s%-22s%-22s", "TINT", "", yytext); break;
	case TRETURN: printf("%-22s%-22s%-22s", "TRETURN", "", yytext); break;
	case TVOID: printf("%-22s%-22s%-22s", "TVOID", "", yytext); break;
	case TWHILE: printf("%-22s%-22s%-22s", "TWHILE", "", yytext); break;

	case TADD: printf("%-22s%-22s%-22s", "TADD", "", yytext); break;
	case TSUB: printf("%-22s%-22s%-22s", "TSUB", "", yytext); break;
	case TMUL: printf("%-22s%-22s%-22s", "TMUL", "", yytext); break;
	case TDIV: printf("%-22s%-22s%-22s", "TDIV", "", yytext); break;
	case TMOD: printf("%-22s%-22s%-22s", "TMOD", "", yytext); break;

	case TASSIGN: printf("%-22s%-22s%-22s", "TASSIGN", "", yytext); break;
	case TADDASSIGN: printf("%-22s%-22s%-22s", "TADDASSIGN", "", yytext); break;
	case TSUBASSIGN: printf("%-22s%-22s%-22s", "TSUBASSIGN", "", yytext); break;
	case TMULASSIGN: printf("%-22s%-22s%-22s", "TMULASSIGN", "", yytext); break;
	case TDIVASSIGN: printf("%-22s%-22s%-22s", "TDIVASSIGN", "", yytext); break;
	case TMODASSIGN: printf("%-22s%-22s%-22s", "TMODASSIGN", "", yytext); break;

	case TNOT: printf("%-22s%-22s%-22s", "TNOT", "", yytext); break;
	case TAND: printf("%-22s%-22s%-22s", "TAND", "", yytext); break;
	case TOR: printf("%-22s%-22s%-22s", "TOR", "", yytext); break;

	case TEQUAL: printf("%-22s%-22s%-22s", "TEQUAL", "", yytext); break;
	case TNOTEQU: printf("%-22s%-22s%-22s", "TNOTEQU", "", yytext); break;
	case TLESS: printf("%-22s%-22s%-22s", "TLESS", "", yytext); break;
	case TGREAT: printf("%-22s%-22s%-22s", "TGREAT", "", yytext); break;
	case TLESSE: printf("%-22s%-22s%-22s", "TLESSE", "", yytext); break;
	case TGREATE: printf("%-22s%-22s%-22s", "TGREATE", "", yytext); break;

	case TBRASL: printf("%-22s%-22s%-22s", "TBRASL", "", yytext); break;
	case TBRASR: printf("%-22s%-22s%-22s", "TBRASR", "", yytext); break;
	case TBRAML: printf("%-22s%-22s%-22s", "TBRAML", "", yytext); break;
	case TBRAMR: printf("%-22s%-22s%-22s", "TBRAMR", "", yytext); break;
	case TBRALL: printf("%-22s%-22s%-22s", "TBRALL", "", yytext); break;
	case TBRALR: printf("%-22s%-22s%-22s", "TBRALR", "", yytext); break;
	case TCOMMA: printf("%-22s%-22s%-22s", "TCOMMA", "", yytext); break;
	case TSEMICOLON: printf("%-22s%-22s%-22s", "TSEMICOLON", "", yytext); break;

	case TBLANK: printf("%-22s%-22s%-22s", "TBLANK", "", yytext); break;
	case TTAB: printf("%-22s%-22s%-22s", "TTAB", "", yytext); break;
	case TNEWLINE: printf("%-22s%-22s%-22s", "TNEWLINE", "", yytext); break;

	case TINC: printf("%-22s%-22s%-22s", "TINC", "", yytext); break;
	case TDEC: printf("%-22s%-22s%-22s", "TDEC", "", yytext); break;

	case TIDENT: { 
		int hscode = ComputeHS(start, end);
		int exist = LookupHS(hscode, start, end);
		if (insertflag) insertID();
		else deleteID();
		printf("%-22s%-22d%-22s", "TIDENT", exist, yytext); break;
	}
	case TNUMBER: printf("%-22s%-22s%-22s", "TNUMBER", "", yytext); break;
	case TRNUMBER: printf("%-22s%-22s%-22s", "TRNUMBER", "", yytext); break;
	case TERROR: printError(); cErrors++;
	}
	printf("\n");
}


void main() {
    enum tnumber tn;    /* token type */
    printf("%-22s%-22s%-22s%-22s\n","Line number","Token type","ST-index","Token");
    while((tn=yylex()) != TEOF){ 
		printtoken(tn);
    }
	if (cErrors == 0) {
		printf("No errors detected\n");
	}
	else {
		printf("%d errors detected\n", cErrors);
	}
}
