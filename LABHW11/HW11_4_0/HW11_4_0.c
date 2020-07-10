#include <stdio.h>

int main(void)
{
	int number, i;
	int isPrime = 1;

	printf("Enter a number : ");
	scanf_s("%d", &number);

	for (i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			isPrime = 0;
			break;
		}
	}

	if (isPrime == 1)
		printf("소수입니다.\n");
	else
		printf("소수가 아닙니다.\n");
}