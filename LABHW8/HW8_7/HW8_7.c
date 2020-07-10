// 20200988 À¯ÇÏÁø
#include <stdio.h>

int main(void)
{
	int number;
	printf("Enter number:");
	scanf_s("%d", &number);

	for (int i = 1; i <= number; i++)
	{
		if (number % i == 0)
			printf("%d ", i);
	}
}