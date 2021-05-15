/*
 * main.c
 * programmer - 팀 6: 1876375정하늘, 1971039이진경, 1971051최수정
 * date - 2021.04.28
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
}