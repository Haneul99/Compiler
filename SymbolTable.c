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
	noerror, illsp, numerr,illid, overst //문제없음, 구분자 오류, 이름 오류, 오버플로우
}errorTypes;

char ST[STsize];
HTpointer HT[HTsize];

FILE* rfp; // file pointer
char seperator[9] = { ' ', '\t', '.', ',', ';', ':', '?', '!', '\n' };
errorTypes err;

char input;
int start = 0, end = 0;

void printError(errorTypes err) {
	if (err == illsp) { //중복 메세지
		printf("***ERROR*** 구분자 중복\n");
	}
	else if (err == numerr) {
		printf("***ERROR***\t");
		while (input != EOF && !isSeperator(input)) {
			printf("%c", input);
			input = fgetc(rfp);
		}
		printf("\t%s", "start with digit\n");
	}
	else if (err == illid) {
		

	}
	else if (err == overst) {
		printf("***Error*** OVERFLOW\n");
	}
}

//intialize <-- 파일 열기
void initialize() {
	fopen_s(&rfp, FILE_NAME, "r");
	if (rfp == NULL) {
		printf("파일 열기 실패\n");
		exit(1); //강제 종료
	}
	input = fgetc(rfp);
}

int isSeperator(char c) { //구분자면 1 아니면 0
	int i;
	for (i = 0; i < sizeof(seperator); i++) {
		if (c == seperator[i]) return 1;
	}
	return 0;
}

int isLetter(char c) {
	if ('a' <= c && c <= 'z') return 1;
	if ('A' <= c && c <= 'z') return 1;
	if (c == '_') return 1;
	else return 0;
}
int isNumber(char c) {
	if (0 <= c - '0' && c - '0' <= 9) return 1;
	else return 0;
}
//SkipSeperators <-- 구분자 스킵, illegal......
void SkipSeperators(){
	int cnt = 0;
	while (input != EOF && isSeperator(input)) {
		cnt++;
		input = fgetc(rfp);
	}
	if (cnt >= 1) err = illsp;
	else err = noerror;

	printError(err);
}

void ReadID() {
	if (isNumber(input)) err = numerr;
	else {

		err = noerror;
		while (input != EOF && !isSeperator(input)) {
			if (end == STsize) {
				err = overst;
				break;
			}
			ST[end++] = input;
			input = fgetc(rfp);
		}
	}
	printError(err);
}

//printHeading
void printHeading() {
	printf("-----------\t-----------\n");
	printf("%11s", "Index in ST");
	printf("\t");
	printf("%11s", "identifier\n");
	printf("-----------\t-----------\n");
}


int main() {
	printHeading();
	initialize(); //파일열기

	while (input!=EOF) {
		err = noerror;
		SkipSeperators();
		ReadID();
		//해시 함수

		if(err=noerror){
			//ComputeHS
			//LookupHS
			start = end;
		}
		

		if (err == overst) break;  //already 때매 해쉬 밑에 두자, lookupHS

		
		input = fgetc(rfp);
		
	}

	fclose(rfp);
}

