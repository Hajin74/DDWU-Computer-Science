// 20200988 À¯ÇÏÁø
#include <stdio.h>

int main(void)
{
	int number;
	printf("Enter a number : ");
	scanf_s("%d", &number);

	for (int i = 1; i <= number; i++)
		printf("%d\n", i * i * i);
}