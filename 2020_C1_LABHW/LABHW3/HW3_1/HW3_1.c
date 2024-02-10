//HW3_1 유하진 20200988 컴퓨터학과 20학번
#include <stdio.h>

int main(void)
{
	int score1, score2, average;

	printf("Enter two scores : ");
	scanf_s("%d %d", &score1, &score2);

	average = (score1 + score2) / 2;
	printf("The average is %d", average);
}