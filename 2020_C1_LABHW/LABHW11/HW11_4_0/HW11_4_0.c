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
		printf("�Ҽ��Դϴ�.\n");
	else
		printf("�Ҽ��� �ƴմϴ�.\n");
}