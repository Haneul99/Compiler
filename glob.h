/*
 * glob.h - global variable for the project
 * programmer - 팀 6: 1876375정하늘, 1971039이진경, 1971051최수정
 * date - 
 */

#define STsize 1000
#define HTsize 100 

/* HT 관련 구조체 */
typedef struct HTentry* HTpointer;
typedef struct HTentry {
	int index;			// ST내 시작 인덱스
	HTpointer next;		// 다음 id 포인터
} HTentry;

/* 에러 정의 열거형 */
typedef enum errorTypes {
	//문제없음, id숫자시작, id허락되지않은문자, id길이초과, 오버플로우
	noerror, swdigit, illid, longid, overst
}errorTypes;

void SymbolTable();
void printError();

extern char *yytext;
extern int yyleng;
extern errorTypes err;			    // 현재 에러를 담고 있는 변수
extern char ST[STsize];		        // 스트링 테이블
extern HTpointer HT[HTsize];	    // 해쉬 테이블
extern int start, end;		        // 현재 identifier의 ST 내 시작, 끝 위치
extern int lineCount;               // 라인 수
