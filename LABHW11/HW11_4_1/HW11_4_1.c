// 20200988 �İ� ������
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
			printf("�Ҽ��Դϴ�.\n");
		else
			printf("�Ҽ��� �ƴմϴ�.\n");

		printf("Enter a number(-1 for exit) : ");
		scanf_s("%d", &num);
	}
}