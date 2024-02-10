// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* fp1, *fp2;
	char ch;

	fp1 = fopen("hello.world", "wt");
	if (fp1 == NULL) {
		printf("파일 오픈 에러입니다!!\n");
		return 1;
	}

	fprintf(fp1, "Hello\n");
	fprintf(fp1, "World\n");


	fp2 = fopen("hello.in", "rt");
	if (fp2 == NULL) {
		printf("파일 오픈 에러입니다!!\n");
		return 1;
	}

	ch = getc(fp2);
	while (!feof(fp2)) {
		putc(ch, stdout);
		ch = getc(fp2);
	}

	fclose(fp1);
	fclose(fp2);
}