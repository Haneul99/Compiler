/*
 * glob.h - global variable for the project
 * programmer - 팀 6: 1876375정하늘, 1971039이진경, 1971051최수정
 * date - 2021.05.26
 */

#ifndef GLOB_H_
#define GLOB_H_

#define STsize 1000    // ST 사이즈
#define HTsize 100     // HT 사이즈

#define NONTYPE 0

/* maintype: nontype OR function name OR parameter OR variable */
#define FUNCTION 1
#define PARAMETER 2
#define VARIABLE 3

/* subtype: nontype OR scalar OR array */
#define SCALAR 10
#define ARRAY 20

/* datatype: nontype OR int OR float OR void */
#define INTEGER 100
#define FLOAT 200
#define VOID 300

/* HT 관련 구조체 */
typedef struct HTentry* HTpointer;
typedef struct HTentry {
   int index;         // ST내 시작 인덱스
   int maintype;      // nontype OR function name OR parameter OR variable
   int subtype;       // nontype OR scalar OR array
   int datatype;      // nontype OR int OR float OR void
   int is_const;      // CONST: true OR false
   int lineNO;        // 라인 넘버
   HTpointer next;    // 다음 id 포인터
} HTentry;

void SymbolTable();           // 현재 id의 symbol table management를 수행
void printHStable();          // 해시 테이블 출력

void printIllSymbolError();   // ill symbol 에러 출력
void printLongIDError();      // 12자 초과 에러 출력
void printSWDigitError();     // 숫자로 시작 에러 출력
void printOverflowError();    // ST 오버플로우 에러 출력

void printExternalDeclarationErrSemi();      //external_dcl 중, 세미콜론으로 끝나는 문장에 문제가 생겼을 때 에러 출력
void printExternalDeclarationErrBracket();   //external_dcl 중, 중괄호로 끝나는 문장에 문제가 생겼을 때 에러 출력
void printNoSemicolon();      // 세미콜론 없는 에러 출력
void printNoSquareBracket();  // 대괄호 없는 에러 출력
void printNoCurlyBracket();   // 중괄호 없는 에러 출력
void printNoRoundBracket();   // 소괄호 없는 에러 출력
void printInvalidFuncCompound_st();   //함수 헤더가 없을 때 에러 출력
void printInvalidFuncHeader();     // 함수에서 중괄호 부분이 없을 때 에러 출력


extern yylex();
extern yyleng;
extern char *yytext;
extern int lineCount;      // 라인 수
extern int stindex;        // 현재 id의 ST-index
extern int overflow;       // ST 오버플로우 여부
extern int cErrors;        // 에러 개수
extern int type;           // 현재 id type 번호
extern HTpointer idEntry;   // 현재 id가 저장되어있는 HTentry 포인터

#endif