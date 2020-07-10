// 20200988 컴퓨터학과 유하진
#include <stdio.h>

int main(void)
{
	int number;

	printf("Enter a number : ");
	scanf_s("%d", &number);

	while (number != 1)
	{
		printf("%d", number % 2);
		number = number / 2;
	}

	printf("%d", number);
}

























/*{
	int number;
	int even;

	printf("Enter a number : ");
	scanf_s("%d", &number);

	while (number >= 1)
	{
		if (number % 2 == 0)
			printf("0");
		else
			printf("1");

		number = number / 2;
	}

	printf("\n");
}*/