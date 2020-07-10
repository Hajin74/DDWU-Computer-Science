// 20200988 컴퓨터학과 유하진
#include <stdio.h>

int main(void)
{
	int score, num1, num2;
	int stu = 0;
	int total = 0;
	double average;
	int bestScore = -1;

	while (1)
	{
		printf("Enter a score(-1 for exit): ");
		scanf_s("%d", &score);
		
		if (score == -1)
			break;
			
		if (score > bestScore)
			bestScore = score;

		total += score;
		stu++;
	}

	average = (double)total / stu;

	if(stu == 0)
	{ 
		printf("You\'ve entered %d students.\n", stu);
		printf("There is no data.\n");
	}
	else
	{
		printf("You\'ve entered %d students.\n", stu);
		printf("The total is %d.\n", total);
		printf("The average is %.1f\n", average);
		printf("The best score is %d.\n", bestScore);
	}	
}