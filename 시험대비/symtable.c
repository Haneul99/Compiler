/*
 * symtable.c - symboltable management
 * programmer - 팀 6: 1876375정하늘, 1971039이진경, 1971051최수정
 * date - 2021.05.26
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
      if (!strcmp(ST + p->index, str)){
         if(p->maintype == FUNCTION || p->maintype == NONTYPE)
            return p->index;

         if(p->scope == funcSTindex){
            idEntry = p;
            return p->index;   //존재하는 경우
         }
      }
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

/* printHStable
   : 해쉬 테이블을 출력하는 함수 */
void printHStable() {
	printf("\n\n[[ HASH TABLE ]]\n\n");

	int i;
	HTpointer p;
	for (i = 0; i < HTsize; i++) {
		if (HT[i] == NULL) continue;

		printf("Hash Code %2d:", i);
		for (p = HT[i]; p != NULL; p = p->next) {
			printf("  (%s: ", (ST + p->index));
         
         switch(p->maintype){
            // 1. 타입이 정의된 적 없는 경우
            case NONTYPE:  
               printf("type is not defined, ");
               break;

            // 2. 변수
            case VARIABLE: 
               // const 여부 출력
               if(p->is_const) printf("const ");
               // 자료형 출력
               if(p->datatype == INTEGER) printf("integer ");
               else if(p->datatype == FLOAT) printf("float ");
               // 스칼라 or 배열 출력
               if(p->subtype == SCALAR) printf("scalar variable, ");
               else if(p->subtype == ARRAY) printf("array variable, ");
            
               break;

            // 3. 함수이름
            case FUNCTION: 
               printf("function name, return type is ");
               // 리턴 타입 출력
               if(p->datatype == VOID) printf("void, ");
               else if(p->datatype == INTEGER) printf("integer, ");
               else if(p->datatype == FLOAT) printf("float, ");
               
               break;

            // 4. 파라미터
            case PARAMETER:
               // 자료형 출력
               if(p->datatype == INTEGER) printf("integer ");
               else if(p->datatype == FLOAT) printf("float ");

               // 스칼라 or 배열 출력
               if(p->subtype == ARRAY) printf("array ");
               else if(p->subtype == SCALAR) printf("scalar ");

               printf("function parameter, ");
               break;
         }

         // 라인넘버 출력
         printf("line %d)  ", p->lineNO);
		}
		printf("\n");
	}

   printf("\n<%d characters are used in the string table>\n", end);
}