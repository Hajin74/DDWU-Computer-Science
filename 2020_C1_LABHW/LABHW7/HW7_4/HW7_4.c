// 20200988 À¯ÇÏÁø
#include <stdio.h>

int main(void)
{
	int i = 0;
	int stu;
	double score;
	double total = 0;
	double average;

	printf("Enter a student number: ");
	scanf_s("%d", &stu);

	while (i < stu)
	{
		printf("Enter a score: ");
		scanf_s("%lf", &score);
		total += score;
		i++;
	}

	if (stu == 0)
		average = 0;
	else
		average = (double)total / stu;

	printf("The total is %0.0lf\n", total);
	printf("The average is %0.1f\n", average);
}