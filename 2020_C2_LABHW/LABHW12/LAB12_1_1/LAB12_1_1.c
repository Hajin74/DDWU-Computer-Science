// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int state;
	FILE* fp;
	char ch;

	fp = fopen("hello.out", "wt");
	if (fp == NULL) {
		printf("File open error!\n");
		return 1;
	}

	fprintf(fp, "hello\n");
	fprintf(fp, "world\n");

	state = fclose(fp);
	if (state != 0) {
		printf("File close error!\n");
		return 1;
	}
}