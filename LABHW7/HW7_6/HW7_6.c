// 20200988 컴퓨터학과 유하진
#include <stdio.h>

int main(void)
{
	int number, i;
	int ones = 0;

	printf("Enter a number : ");
	scanf_s("%d", &number);

	i = 1;
	while (i <= number)
	{
		printf("1");
		ones++;

		if (ones == i)
		{
			printf("\n");
			ones = 0;
			i++;
		}
	}
}

/*
	int i, number;
	int ones = 0;

	printf("Enter a number : ");
	scanf("%d", &number);

	i = 1;
	ones = 1;
	while(i <= number)
	{
		printf("%d\n", ones);

		ones *= 10;
		ones += 1;
		i++;
	}
*/