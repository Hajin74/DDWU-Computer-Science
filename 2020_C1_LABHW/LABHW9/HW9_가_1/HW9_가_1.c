// 20200988 컴과 유하진
#include <stdio.h>

int main(void)
{
	int num, i, j, x;
	printf("Enter a number : ");
	scanf_s("%d", &num);

	for (i = num; i >= 1; i--)
	{
		for (x = num - i; x >= 1; x--)
		{
			printf(" ");
		}

		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

/*
for(i = 1; i <= number; i++)
	{
		for(j = 1; j < i; j++)
		{
			printf(" ");
		}
		for(j = number - i + 1; j >= 1; j--)
		{
			printf("*");
		}
		printf("\n");
	}
*/