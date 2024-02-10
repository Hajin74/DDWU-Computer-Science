// 20200988 컴퓨터학과 유하진
#include <stdio.h>

int main(void)
{
	int incomes[7];
	int bestIncome = 0, i;

	for (i = 0; i < 7; i++)
	{
		printf("Enter the income : ");
		scanf_s("%d", &incomes[i]);

		if (incomes[i] > bestIncome)
			bestIncome = incomes[i];
	}

	printf("--------------------------------------\n");
	printf("The best income is %d\n", bestIncome);
	printf("Incomes are\n");

	for (i = 0; i < 7; i++)
		printf("%d ", incomes[i]);
	printf("\n");

	return 0;
}