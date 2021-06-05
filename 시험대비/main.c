/*
 * main.c
 * programmer - 팀 6: 1876375정하늘, 1971039이진경, 1971051최수정
 * date - 2021.06.05
 */

#include <stdio.h>
#include <stdlib.h>
#include "glob.h"
#include "tn.h"

int cErrors = 0;     // 에러 수

int main(){
    printf("*** MiniC parsing begins\n");
    yyparse();
    printf("Parsing ends.***\n");
    printf("\n\n %d error(s) detected\n", cErrors);

    printHStable();
    printf("\n-----------------------------\nTeam 6\n1876375 Jung Haneul\n1971039 Lee JinGyeong\n1971051 Choi Sujeong\n-----------------------------\n");
}