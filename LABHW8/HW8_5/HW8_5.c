// 20200988 À¯ÇÏÁø
#include <stdio.h>

int main(void)
{
	int number;
	int total = 1;
	printf("Enter a number(>=2): ");
	scanf_s("%d", &number);
	printf("%d! = ", number);

	for (int i = number; i > 1; i--)
	{
		total *= i;
		printf("%d * ", i);
	}

	printf("1 = %d", total);
}
