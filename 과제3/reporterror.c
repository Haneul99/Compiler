/*
 * reporterror.c - printing error
 * programmer - 팀 6: 1876375정하늘, 1971039이진경, 1971051최수정
 * date - 2021.05.26
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "glob.h"

/* printTokenErrHeading
   : 토큰 인식 중 발생한 에러 출력시 공통되는 부분을 출력한다 */
void printTokenErrHeading(){
    printf("%d\t %-25s ", lineCount, "token error");
}

/* printLongIDError
   : 12자 이상이라서 id가 될 수 없는 토큰의 오류를 출력한다 */
void printLongIDError(){
    printTokenErrHeading();
    printf("%s is too long\n", yytext);
}

/* printSWDigitError
   : 숫자로 시작해서 id가 될 수 없는 토큰의 오류를 출력한다 */
void printSWDigitError(){
    printTokenErrHeading();
    printf("%s starts with digit\n", yytext);
    
}

/* printIllSymbolError
   : 잘못된 심볼 오류를 출력한다 */
void printIllSymbolError(){
    printTokenErrHeading();
    printf("%s is illegal symbol\n", yytext);
}

/* printOverflowrror
   : ST 오버플로우 오류를 출력한다 */
void printOverflowError(){
    printf("%-25s", "***error***");
    printf("%-25s", "");
    printf("ST OVERFLOW, failed to save %s\n", yytext);
}

/* yyerror
   : parser에서 error 사용시 호출되는 부분 */
void yyerror(char *s){}

/* printParseErrHeading
   : 파싱 중 발생한 에러 출력시 공통되는 부분을 출력한다 */
void printParseErrHeading(){
    printf("%d\t %-25s ", lineCount, "parse error");
}

/* printExternelDeclarationErrSemi
   : external declaration 문장 중에서, "세미콜론으로 끝나는" 에러 문장을 출력한다 */
void printExternalDeclarationErrSemi(){
    printParseErrHeading();
    printf("%s\n", "invalid external declaration until ';'");
}

/* printExternelDeclarationErrBracket
   : external declaration 문장 중에서, "중괄호로 끝나는" 에러 문장을 출력한다 */
void printExternalDeclarationErrBracket(){
    printParseErrHeading();
    printf("%s\n", "invalid external declaration until '}'");
}

/* printNoFuncHeader
   : 함수의 헤더가 잘못되었을 때 에러를 출력한다 */
void printInvalidFuncHeader(){
    printParseErrHeading();
    printf("%s\n", "invalid function header");
}

/* printNoFuncCompound_st
   : 함수의 헤더 뒤에 오는 중괄호문이 잘못되었을 때 에러를 출력한다 */
void printInvalidFuncCompound_st(){
    printParseErrHeading();
    printf("%s\n", "invalid compound statement at function def");
}

/* printNoSemicolon
   : 세미콜론이 없을 때 오류를 출력한다 */
void printNoSemicolon() {
    printParseErrHeading();
    printf("%s %s\n", "';' is disappeared before",yytext);
}

/* printNoSquareBracket
   : 닫는 대괄호가 없을 때 오류를 출력한다 */
void printNoSquareBracket() {
    printParseErrHeading();
    printf("%s %s\n", "']' is missing before", yytext);
}

/* printNoCurlyBracket
   : 닫는 중괄호가 없을 때 오류를 출력한다 */
void printNoCurlyBracket() {
    printParseErrHeading();
    printf("%s %s\n", "'}' is missing before",yytext);
}

/* printNoRoundBracket
   : 닫는 소괄호가 없을 때 오류를 출력한다 */
void printNoRoundBracket() {
    printParseErrHeading();
    printf("%s %s\n", "')' is missing before", yytext);
}
