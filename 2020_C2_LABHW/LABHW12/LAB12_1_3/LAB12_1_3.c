// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp1, * fp2;
	int score;

	fp1 = fopen("score.in", "rt");
	if (fp1 == NULL)
	{
		printf("파일 오픈 에러입니다!!!\n");
		return 1;
	}

	fp2 = fopen("score.out", "wt");
	if (fp2 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	// 읽고 처리(+9를 더함)해서 쓴다
	fscanf(fp1, "%d", &score);

	while (!feof(fp1)) {
		fprintf(fp2, "%d\n", score + 9);
		fscanf(fp1, "%d", &score);
	}

	fclose(fp1);
	fclose(fp2);
}