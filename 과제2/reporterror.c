/*
 * reporterror.c - printing error
 * programmer - 팀 6: 1876375정하늘, 1971039이진경, 1971051최수정
 * date -
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "glob.h"

 /* 알파벳/_ 여부 확인 */
int isLetter(char c) {
    if ('a' <= c && c <= 'z') return 1;
    if ('A' <= c && c <= 'Z') return 1;
    if (c == '_') return 1;

    return 0;
}

/* 숫자 여부 확인 */
int isNumber(char c) {
    if ('0' <= c && c <= '9') return 1;
    else return 0;
}

//에러 종류: swdigit, illid, longid, overst

//에러 검사
void checkError(char* word) {
    if (err == overst);
    else if (yyleng > 12) err = longid;
    else if (word[0] >= '0' && word[0] <= '9') err = swdigit;
    else err = illid;
}

/*에러 출력 */
void printError() {
    checkError(yytext);
    if (err == longid) { //12자 이상
        printf("%-22d", lineCount);
        printf("%-22s", "***error***");
        printf("%-22s", "");
        printf("%s %s", yytext, "is too long identifier");
    }
    else if (err == swdigit) {
        printf("%-22d", lineCount);
        printf("%-22s", "***error***");
        printf("%-22s", "");
        printf("%s ", yytext);
        printf("starts with digit");
    }
    else if (err == illid) {
        printf("%-22d", lineCount);
        printf("%-22s", "***error***");
        printf("%22s"," ");
        int i;
        for (i = 0; i < strlen(yytext); i++) {
            if (!(isLetter(yytext[i]) || isNumber(yytext[i]))) {
                printf("%c ", yytext[i]);
            }
        }
        printf("Illegal Character");
    }
    else if (err == overst) {
        printf("***Error*** Overflow!!");
    }

}
