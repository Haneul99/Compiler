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


/*
* printtoken() --token type 별로 출력
*/
void printtoken(enum tnumber tn) {
	printf("%-22d", lineCount);
	switch (tn) {
	case TCONST: printf("%-22s %s", "TCONST", yytext); break;
	case TELSE: printf("%-22s %s", "TELSE", yytext); break;
	case TIF: printf("%-22s %s", "TIF", yytext); break;
	case TINT: printf("%-22s %s", "TINT", yytext); break;
	case TRETURN: printf("%-22s %s", "TRETURN", yytext); break;
	case TVOID: printf("%-22s %s", "TVOID", yytext); break;
	case TWHILE: printf("%-22s %s", "TWHILE", yytext); break;

	case TADD: printf("%-22s %s", "TADD", yytext); break;
	case TSUB: printf("%-22s %s", "TSUB", yytext); break;
	case TMUL: printf("%-22s %s", "TMUL", yytext); break;
	case TDIV: printf("%-22s %s", "TDIV", yytext); break;
	case TMOD: printf("%-22s %s", "TMOD", yytext); break;	

	case TASSIGN: printf("%-22s %s", "TASSIGN", yytext); break;
	case TADDASSIGN: printf("%-22s %s", "TADDASSIGN", yytext); break;
	case TSUBASSIGN: printf("%-22s %s", "TSUBASSIGN", yytext); break;
	case TMULASSIGN: printf("%-22s %s", "TMULASSIGN", yytext); break;
	case TDIVASSIGN: printf("%-22s %s", "TDIVASSIGN", yytext); break;
	case TMODASSIGN: printf("%-22s %s", "TMODASSIGN", yytext); break;	

	case TNOT: printf("%-22s %s", "TNOT", yytext); break;
	case TAND: printf("%-22s %s", "TAND", yytext); break;
	case TOR: printf("%-22s %s", "TOR", yytext); break;

	case TEQUAL: printf("%-22s %s", "TEQUAL", yytext); break;
	case TNOTEQU: printf("%-22s %s", "TNOTEQU", yytext); break;
	case TLESS: printf("%-22s %s", "TLESS", yytext); break;
	case TGREAT: printf("%-22s %s", "TGREAT", yytext); break;
	case TLESSE: printf("%-22s %s", "TLESSE", yytext); break;
	case TGREATE: printf("%-22s %s", "TGREATE", yytext); break;

	case TBRASL: printf("%-22s %s", "TBRASL", yytext); break;
	case TBRASR: printf("%-22s %s", "TBRASR", yytext); break;
	case TBRAML: printf("%-22s %s", "TBRAML", yytext); break;
	case TBRAMR: printf("%-22s %s", "TBRAMR", yytext); break;
	case TBRALL: printf("%-22s %s", "TBRALL", yytext); break;
	case TBRALR: printf("%-22s %s", "TBRALR", yytext); break;
	case TCOMMA: printf("%-22s %s", "TCOMMA", yytext); break;
	case TSEMICOLON: printf("%-22s %s", "TSEMICOLON", yytext); break;

	case TBLANK: printf("%-22s %s", "TBLANK", yytext); break;
	case TTAB: printf("%-22s %s", "TTAB", yytext); break;
	case TNEWLINE: printf("%-22s %s", "TNEWLINE", yytext); break;

	case TINC: printf("%-22s %s", "TINC", yytext); break;
	case TDEC: printf("%-22s %s", "TDEC", yytext); break;

	case TIDENT: printf("%-22s %s", "TIDENT", yytext); break;
	case TNUMBER: printf("%-22s %s", "TNUMBER", yytext); break;
	case TRNUMBER: printf("%-22s %s", "TRNUMBER", yytext); break;
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
		printf("%d errors detected", cErrors);
	}
}


/*
void main(){
	enum tnumber tn;

	while((tn = yylex()) != TEOF){
		switch(tn){
			case TIF: printf("TIF: %s", yytext); break;
			case TNUMBER: printf("TNUMBER: %s\n", yytext); break;
			case TRNUMBER: printf("TRNUMBER: %s\n", yytext); break;
			case TIDENT: printf("TIDENT: %s\n", yytext); break;
			case TERROR: printf("TERROR: %s\n", yytext); printError(); break;
			case TBLANK: printf("TBLANK\n"); break;
			case TTAB: printf("TTAB\n"); break;
			case TNEWLINE: printf("TNEWLINE\n"); break;
		}
	}
	printf("Total %d lines\n", lineCount);
}
*/