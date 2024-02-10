// 20200988 유하진
#include <stdio.h>

int main(void)
{
	int deposit, target;
	int i, j;
	int year = 0, month = 0, total = 0;

	scanf_s("%d %d", &deposit, &target);

	while (target > total)
	{
		month++;
		total += deposit;
		total *= 1.02;
	}

	if (month >= 12)
	{
		year = month / 12;
		month = month % 12;
	}

	printf("%d %d %d", year, month, total);
}

// 틀린 답들

/*
	do
	{
		month++;
		total = total * 1.02;
		total += deposit;


	} while (total < target);

	printf("%d %d %d\n", year, month, total);
	*/

/*
int main(void)
{
	int deposit, target;
	int month = 0, year = 0;
	int total = 0;

	scanf_s("%d %d", &deposit, &target);
	total += deposit;

	while (1)
	{
		if (total < target)
		{
			month++;
			total = total * 1.02;
			total += deposit;
		}
		else
		{
			month++;
			total = total * 1.02;
			break;
		}

	}

	if (month >= 12)
	{
		year = month / 12;
		month = month % 12;
	}

	printf("%d %d %d\n", year, month, total);
}
*/