// 20200988 컴과 유하진
#include <stdio.h>
int isPrime(int num);

int main(void)
{
	int number;

	printf("Enter a number(-1 for exit) : ");
	scanf_s("%d", &number);
	isPrime(number);
}

int isPrime(int num)
{
	int i, isPrime = 1;

	while (num != -1)
	{
		for (i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				isPrime = 0;
				break;
			}
		}

		if (isPrime == 1)
			printf("소수입니다.\n");
		else
			printf("소수가 아닙니다.\n");

		printf("Enter a number(-1 for exit) : ");
		scanf_s("%d", &num);
	}
}