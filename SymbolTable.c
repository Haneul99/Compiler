#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "testdata.txt"

#define STsize 1000
#define HTsize 100 // ....?? 보통 소수로 하지 않나...

typedef struct HTentry* HTpointer;
typedef struct HTentry {
	int index; //index of identifier in ST
	HTpointer next; //pointer to next identifier
} HTentry;

typedef enum errorTypes {
	noerror, illsp, numerr, illid, overst, longid //문제없음, 구분자 오류(구분자연속), 숫자시작오류, id알파벳오류, 오버플로우, id길이초과오류
}errorTypes;

char ST[STsize];	// 스트링 테이블
HTpointer HT[HTsize];	// 해쉬 테이블

FILE* rfp; // file pointer

errorTypes err;	// 현재 에러를 담고 있는 변수
char seperator[9] = { ' ', '\t', '.', ',', ';', ':', '?', '!', '\n' };	// 구분자 목록
char input;	// 현재 읽고 있는 character
char illch;	// illid 에러에 해당하는 character
int start = 0, end = 0;	// 현재 identifier의 ST 내 시작, 끝 위치

/* 에러 출력 */
void printError() {
	int i;

	if(err == noerror) return;
	printf("***ERROR***\t");

	if (err == illsp) {		// 구분자 중복 에러
		printf("구분자 중복\n");
	}
	else if(err == longid){	// id 길이 초과 에러
		printf("%s\ttoo long identifier\n", ST+start);
	}
	else if (err == numerr) {	// id 숫자로 시작하는 에러
		printf("%s\tstart with digit\n", ST+start);
	}
	else if (err == illid) {	// id에 잘못된 character 에러
		printf("%s\t%c is not allowed\n", ST + start, illch);
	}
	else if (err == overst) {	// 오버플로우 에러
		printf("OVERFLOW\n");
	}

	// 에러 초기화
	err = noerror;
	return;
}

/* 파일 열기 */
void initialize() {
	fopen_s(&rfp, FILE_NAME, "r");
	if (rfp == NULL) {
		printf("파일 열기 실패\n");
		exit(1); //강제 종료
	}
	input = fgetc(rfp);
}

/* 구분자 여부 확인 */
int isSeperator(char c) {
	int i;
	for (i = 0; i < sizeof(seperator); i++) {
		if (c == seperator[i]) return 1;
	}
	return 0;
}

/* 알파벳/_ 여부 확인 */
int isLetter(char c) {
	if ('a' <= c && c <= 'z') return 1;
	if ('A' <= c && c <= 'z') return 1;
	if (c == '_') return 1;
	else return 0;
}

/* 숫자 여부 확인 */
int isNumber(char c) {
	if (0 <= c - '0' && c - '0' <= 9) return 1;
	else return 0;
}

/* 구분자는 스킵하고 다음 identifier 시작위치까지 이동 */
void SkipSeperators() {
	int cnt = 0;
	while (input != EOF && isSeperator(input)) {
		cnt++;
		input = fgetc(rfp);
	}
	if (cnt >= 1) err = illsp;
	else err = noerror;

	printError();
}

/* identifier 읽기 */
void ReadID() {
	int invalid = 0;	// 올바르지 않은 character가 있었는지 여부
	int len = 0;		// identifier 길이

	// 숫자로 시작하는 에러 체크
	if (isNumber(input)) err = numerr;

	// identifier 끝까지 읽기
	while (input != EOF && !isSeperator(input)) {
		// 오버플로우 체크
		if (end >= STsize) {
			err = overst;
			break;
		}

		// 올바르지 않은 character있는지 확인
		if (!isLetter(input) && !isNumber(input)) {
			// 올바르지 않은 character가 여러 개 있을 경우 첫번째 것만 출력
			if (invalid == 0) {
				illch = input;
				invalid = 1;
				err = illid;
			}
		}

		ST[end++] = input;
		len++;

		input = fgetc(rfp);
	}

	// identifier 마지막에 널문자 추가
	if(end >= STsize)
		err = overst;
	else
		ST[end++] = '\0';

	// 길이 초과 에러 체크
	if(err != overst && len > 12) err = longid;

	printError();
}

/* ST에 받아두었던 id 삭제 */
void deleteID(){
	end = start;
}

/* ST에 받아두었던 id 저장 확정 */
void insertID(){
	start = end;
}

/* ST의 헤딩부분 출력 */
void printHeading() {
	printf("-----------\t-----------\n");
	printf("%11s", "Index in ST");
	printf("\t");
	printf("%11s", "identifier\n");
	printf("-----------\t-----------\n");
}

/* 해시 테이블 출력 */
void PrintHStable(){
	printf("\n[[ HASH TABLE ]]\n");

	int i, cnt = 0;
	HTpointer p;
	for (i = 0; i < HTsize; i++) {
		if (HT[i] == NULL) continue;

		printf("Hash Code %2d:", i);
		for (p = HT[i]; p != NULL; p = p->next) {
			printf("%s\t\t", (ST + p->index));
			cnt++;
		}
		printf("\n");
	}

	printf("\n<%d characters are used in the string table>\n", end - cnt);
}

int main() {
	initialize(); //파일열기

	printHeading();
	while (input != EOF) {
		err = noerror;

		// identifier를 읽어 ST에 넣기
		SkipSeperators();
		ReadID();

		// ST에 오버플로우가 발생한 경우 종료
		if (err == overst) break;

		if (err == noerror) {
			// ST 리스트 출력용 시험용
			printf("%d\t", start);
			for (int i = start; i < end; i++) {
				printf("%c", ST[i]);
			}
			printf("\n");
			insertID();

			//ComputeHS
			//LookupHS : 이미 존재하면 deleteID(), 새로운거면 insertID() 해주세요!
		}
		else {
			deleteID();
		}

		input = fgetc(rfp);
	}

	// 아래는 출력 시험용
	HTentry* hte, *hte2;
	hte = (HTentry*)malloc(sizeof(HTentry));
	hte2 = (HTentry*)malloc(sizeof(HTentry));
	hte->index = 0;
	hte2->index = 3;
	hte->next = hte2;
	hte2->next = NULL;
	HT[4] = hte;

	// 해쉬테이블 출력
	PrintHStable();

	fclose(rfp);
}
