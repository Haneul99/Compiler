/*
 * reporterror.c - printing error
 * programmer - 팀 6: 1876375정하늘, 1971039이진경, 1971051최수정
 * date - 2021.04.28
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "glob.h"

/* printLongIDError
   : 12자 이상이라서 id가 될 수 없는 토큰의 오류를 출력한다 */
void printLongIDError(){
    printf("%d\t %-25s %s is too long\n", lineCount, "longID error", yytext);
}

/* printSWDigitError
   : 숫자로 시작해서 id가 될 수 없는 토큰의 오류를 출력한다 */
void printSWDigitError(){
    printf("%d\t %-25s %s starts with digit\n", lineCount, "start with digit error", yytext);
    
}

/* printIllSymbolError
   : 잘못된 심볼 오류를 출력한다 */
void printIllSymbolError(){
    printf("%d\t %-25s %s is illegal symbol\n", lineCount, "illsymbol error", yytext);
}

/* printOverflowrror
   : ST 오버플로우 오류를 출력한다 */
void printOverflowError(){
    printf("%-25s", "***error***");
    printf("%-25s", "");
    printf("ST OVERFLOW, failed to save %s\n", yytext);
}

/* yyerror
   : 파싱중 발생한 오류를 출력한다 */
void yyerror(char *s)
{
    printf("%d\t %-25s ", lineCount, s);
}

void printNoSemicolon() {
    printf("%d: No Semicolon %s\n", lineCount, yytext);
};
void printNoBracket() {
    printf("%d: No bracket %s\n", lineCount, yytext);
};
void printSyntaxErr(){
    printf("%d: No comma %s\n", lineCount, yytext);
}