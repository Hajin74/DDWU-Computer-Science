// 20200988 컴퓨터학과 유하진
#include <stdio.h>

int main(void)
{
	int incomes[7];
	int total = 0, bestIncome = 0, bestDay;
	double average;
	int i;

	for (i = 0; i < 7; i++)
	{
		printf("Enter the income of day %d :", i + 1);
		scanf_s("%d", &incomes[i]);

		total += incomes[i];

		if (incomes[i] > bestIncome)
		{
			bestIncome = incomes[i];
			bestDay = i;
		}
			
	}

	printf("-------------------------------\n");
	printf("The best income : %d in day %d\n", bestIncome, bestDay + 1);
	printf("-------------------------------\n");
	printf("The total is %d\n", total);

	average = total / 7.0;
	printf("The average is %0.1f\n", average);

	printf("The good days and their incomes are\n");
	for (i = 0; i < 7; i++)
	{
		if (incomes[i] > average)
			printf("day %d : %d\n", i + 1, incomes[i]);
	}

	return 0;
}