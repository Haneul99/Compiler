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
	noerror, illsp, numerr, illid, overst //문제없음, 구분자 오류, 이름 오류, 오버플로우
}errorTypes;

char ST[STsize];
HTpointer HT[HTsize];

FILE* rfp; // file pointer
char seperator[9] = { ' ', '\t', '.', ',', ';', ':', '?', '!', '\n' };
errorTypes err;

char input;
char illch;
int start = 0, end = 0;

void printError(errorTypes err) {
	int i;

	if (err == illsp) { //중복 메세지
		printf("***ERROR*** 구분자 중복\n");
	}
	else if (err == numerr) {
		printf("***ERROR***\t%s\tstart with digit\n", ST+start);
	}
	else if (err == illid) {
		printf("***ERROR***\t%s\t%c is not allowed\n", ST + start, illch);
	}
	else if (err == overst) {
		printf("***Error*** OVERFLOW\n");
	}
	else return;
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
void SkipSeperators() {
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
	int invalid;

	if (isNumber(input)) err = numerr;
	invalid = 0;
	while (input != EOF && !isSeperator(input)) {
		if (end == STsize) {
			err = overst;
			break;
		}

		// 올바르지 않은 character있는지 확인
		if (!isLetter(input) && !isNumber(input)) {
			if (invalid == 0) {
				illch = input;
				invalid = 1;
				err = illid;
			}
		}

		ST[end++] = input;
		input = fgetc(rfp);
	}

	if (err != overst) ST[end++] = '\0';

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
	printHeading();
	initialize(); //파일열기

	while (input != EOF) {
		err = noerror;
		SkipSeperators();
		ReadID();

		if (err == overst) break;  //already 때매 해쉬 밑에 두자, lookupHS

		// 아래 부분 채워주세요 
		if (err == noerror) {
			printf("%d\t", start);
			for (int i = start; i < end; i++) {
				printf("%c", ST[i]);
			}
			printf("\n");
			//ComputeHS
			//LookupHS : 만약에 ST에 안넣을 경우 end = start하고, ST에 넣을 경우 start=end 해주세요
			start = end;
		}
		else {
			end = start;
		}

		input = fgetc(rfp);
	}

	printError(err);

	HTentry* hte, *hte2;
	hte = (HTentry*)malloc(sizeof(HTentry));
	hte2 = (HTentry*)malloc(sizeof(HTentry));
	hte->index = 0;
	hte2->index = 3;
	hte->next = hte2;
	hte2->next = NULL;
	HT[4] = hte;

	PrintHStable();

	fclose(rfp);
}
