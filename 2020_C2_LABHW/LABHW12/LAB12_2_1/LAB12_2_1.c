// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* fp;

	fp = fopen("hello.txt", "a");
	if (fp == NULL) {
		printf("파일 오픈 에러입니다.\n");
		return 1;
	}

	fprintf(fp, "Hi\n");
	fprintf(fp, "Everybody\n");

	fclose(fp);
}