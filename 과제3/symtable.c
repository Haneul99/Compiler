/*
 * symtable.c - symboltable management
 * programmer - 팀 6: 1876375정하늘, 1971039이진경, 1971051최수정
 * date - 2021.04.28
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "glob.h"

char ST[STsize];           // 스트링 테이블
HTpointer HT[HTsize];      // 해쉬 테이블
HTpointer idEntry;         // 현재 id 저장된 HTentry 포인터
int start = 0, end = 0;    // ST내 시작 끝위치
int stindex;               // 현재 id의 ST-index
int overflow = 0;          // 오버플로우 여부
int type = 0;              // 현재 id type
int lineCount = 1;         // 라인 넘버

/* ReadID
   :identifier를 ST에 저장한다 */
void ReadID() {
   int i;

   // 한 글자씩 ST에 저장
   for(i = 0; i < yyleng; i++){
      // 오버플로우 체크
      if (end >= STsize) {
         overflow = 1;
         return;
      }

      ST[end++] = yytext[i];
   }

   // identifier 마지막에 널문자 추가
   if (end >= STsize)
      overflow = 1;
   else
      ST[end++] = '\0';
}

/* deleteID
   :ST에 받아두었던 id 삭제 */
void deleteID() {
   end = start;
}

/* insertID
   :ST에 받아두었던 id 저장 확정 */
void insertID() {
   stindex = start;
   start = end;
}

/* ComputeHs
   : identifier의 아스키코드 값에 따라 해시 값을 계산 */
int ComputeHS(int start, int end) {
   int asciisum = 0, i;
   for (i = start; i < end; i++) {
      asciisum += ST[i];
   }
   return asciisum % HTsize;
}

/* LookupHs
   : HT내 존재 여부를 확인한다 */
int LookupHS(int hscode, int start, int end) {
   HTpointer p = HT[hscode];
   char str[22];
   strncpy(str, ST + start, end - start);
   for (; p != NULL; p = p->next) {
      if (!strcmp(ST + p->index, str)) return p->index;   //존재하는 경우
   }
   return -1;   //존재하지 않는 경우
}

/* ADDHT
   : ST에 저장된 id를 HashTable에 추가하는 함수 */
void ADDHT(int hscode, int start) {
   HTentry* hte = (HTentry*)malloc(sizeof(HTentry));
   if (hte == NULL) {
      fprintf(stderr, "malloc error\n");
      exit(1);
   }
   hte->index = start;
   hte->maintype = NONTYPE;
   hte->subtype = NONTYPE;
   hte->datatype = NONTYPE;
   hte->is_const = 0;
   hte->next = NULL;
   hte->lineNO = lineCount;
   idEntry = hte;

   HTpointer p = HT[hscode];
   if (p == NULL) {
      HT[hscode] = hte;
   }
   else {
      hte->next = p;
      HT[hscode] = hte;
   }//chain의 head에 추가해야함
}

/* SymbolTable
   : Identifier를 ST에 저장하고, 새로운 id일 경우 HT에 삽입하는 함수 */
void SymbolTable(){
   int hscode, exist;

   // id를 ST에 저장
   ReadID();

   // ST에 오버플로우가 발생한 경우 종료
   if (overflow) {
      return;
   }

   // 해시코드와 존재 여부 확인
   hscode = ComputeHS(start, end);
   exist = LookupHS(hscode, start, end);
   
   // 존재하지 않는 경우에는 새로 HT에 삽입, 존재하는 경우 ST에서 제거
   if (exist == -1) {
      ADDHT(hscode, start);
      insertID();
   }
   else{
      stindex = exist;
      deleteID();
   }
}

/* 해시 테이블 출력 */
void printHStable() {
	printf("\n\n[[ HASH TABLE ]]\n\n");

	int i, cnt = 0;
	HTpointer p;
	for (i = 0; i < HTsize; i++) {
		if (HT[i] == NULL) continue;

		printf("Hash Code %2d:", i);
		for (p = HT[i]; p != NULL; p = p->next) {
			printf("  (%s: ", (ST + p->index));
         
         switch(p->maintype){
            case NONTYPE:
               printf("type is not defined, ");
               break;
            case VARIABLE:
               if(p->is_const) printf("const ");
               
               if(p->datatype == INTEGER) printf("integer ");
               else if(p->datatype == FLOAT) printf("float ");

               if(p->subtype == SCALAR) printf("scalar variable,");
               else if(p->subtype == ARRAY) printf("array variable,");
               
               break;
            case FUNCTION:
               printf("function name, return type = ");
               if(p->datatype == VOID) printf("void, ");
               else if(p->datatype == INTEGER) printf("integer, ");
               else if(p->datatype == FLOAT) printf("float, ");
               break;
            case PARAMETER:
               if(p->datatype == INTEGER) printf("integer ");
               else if(p->datatype == FLOAT) printf("float ");

               if(p->subtype == ARRAY) printf("array ");

               printf("function parameter, ");
               break;
         }
         printf("line %d)  ", p->lineNO);
			cnt++;
		}
		printf("\n");
	}
}