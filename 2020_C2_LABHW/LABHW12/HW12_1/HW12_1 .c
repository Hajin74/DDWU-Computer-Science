// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	FILE* fp1, * fp2;
	int i, num, total = 0;

	fp1 = fopen("random.txt", "wt");
	if (fp1 == NULL) {
		printf("파일 오픈 에러\n");
		return 1;
	}

	srand(time(NULL));
	for (i = 0; i < 10; i++) {
		num = rand() % 100;
		total += num;
		fprintf(fp1, "%d\n", num);
	}

	fclose(fp1);

	fp1 = fopen("random.txt", "rt");
	if (fp1 == NULL) {
		printf("파일 오픈 에러\n");
		return 1;
	}

	fp2 = fopen("output.txt", "wt");
	if (fp2 == NULL) {
		printf("파일 오픈 에러\n");
		return 1;
	}

	fscanf(fp1, "%d\n", &num);
	
	while (!feof(fp1)) {
		fprintf(fp2, "%d\n", num);
		fscanf(fp1, "%d", &num);
	}

	fprintf(fp2, "합은%d\n", total);
	
	fclose(fp2);
	/*
	FILE* fp1, * fp2, *fp3;
	int i, num, n;

	fp1 = fopen("random.txt", "w");
	if (fp1 == NULL) {
		printf("파일 오픈 에러\n");
		return 1;
	}

	srand(time(NULL));
	for (i = 0; i < 10; i++) {
		num = rand() % 100;
		fprintf(fp1, "%d\n", num);
	}

	fp2 = fopen("random.txt", "r");
	if (fp2 == NULL) {
		printf("파일 오픈 에러\n");
		return 1;
	}

	fp3 = fopen("output.txt", "w");
	if (fp3 == NULL) {
		printf("파일 오픈 에러\n");
		return 1;
	}

	fscanf(fp2, "%d\n", &n);
	fprintf(stdout, "%d\n", n);
	/*
	while (!feof(fp2)) {
		fprintf(fp3, "%d\n", n);
		fscanf(fp2, "%d", &n);
	}
	*/
	


}