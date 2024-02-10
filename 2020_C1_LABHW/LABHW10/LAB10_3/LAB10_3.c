// 20200988 컴과 유하진
#include <stdio.h>

int main(void)
{
	int score1, score2;
	int i;

	printf("Tom's score? ");
	scanf_s("%d", &score1);
	printf("Mary's score? ");
	scanf_s("%d", &score2);

	printf("---------- Score Histogram ----------\n");

	printf("Tom\t:");
	for (i = 1; i <= score1; i++)
	{
		printf("*");
	}
	printf("<%02d>\n", score1);

	printf("Mary\t:");
	for (i = 1; i <= score2; i++)
	{
		printf("*");
	}
	printf("<%02d>\n", score2);
}