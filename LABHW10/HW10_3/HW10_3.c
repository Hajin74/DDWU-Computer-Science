// 20200988 컴과 유하진
#include <stdio.h>
void printManyStars(int starNum);

int main(void)
{
	int tom, mary, i;

	printf("Tom's score? ");
	scanf_s("%d", &tom);
	printf("Mary's score? ");
	scanf_s("%d", &mary);

	printf("---------- Score Histogram ----------\n");

	printf("Tom\t:");
	printManyStars(tom);
	printf("Mary\t:");
	printManyStars(mary);

	return;
}

void printManyStars(int starNum)
{
	int i;

	for (i = 0; i < starNum; i++)
		printf("*");
	printf("<%02d>\n", starNum);

	return;
}