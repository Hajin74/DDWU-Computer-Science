// 20200988 컴퓨터학과 유하진
#include <stdio.h>

int main(void)
{
	int score;
	double average;
	int total = 0;
	int stu = 0;
	int bestScore = -1;

	printf("Enter a score(-1 for exit) :");
	scanf_s("%d", &score);

	while (score != -1)
	{
		total += score;
		stu++;
		printf("Enter a score(-1 for exit) :");
		scanf_s("%d", &score);

		if (score > bestScore)
			bestScore = score;
	}

	average = (double)total / stu;
	printf("You\'ve entered %d students.\n", stu);

	if (stu == 0)
		printf("There is no data.\n");
	else
	{
		printf("The total is %d\n", total);
		printf("The average is %.1f\n", average);
		printf("The best score is %d\n", bestScore);
	}
}