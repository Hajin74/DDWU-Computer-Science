// 20200988 컴퓨터학과 유하진
#include <stdio.h>
#define SIZE 10

int main(void)
{
	int odd[SIZE], even[SIZE];
	int num;
	int i, oddIndex = 0, evenIndex = 0;

	for (i = 0; i < SIZE; i++)
	{
		printf("Enter a number : ");
		scanf_s("%d", &num);

		if (num % 2 == 0)
		{
			even[evenIndex] = num;
			evenIndex++;
		}
		else
		{
			odd[oddIndex] = num;
			oddIndex++;
		}
	}

	printf("\n홀수 출력 :");
	for (i = 0; i < oddIndex; i++)
		printf("%d ", odd[i]);

	printf("\n짝수 출력 :");
	for (i = 0; i < evenIndex; i++)
		printf("%d ", even[i]);
	printf("\n");

	return 0;
}

/*
int main(void)
{
	int odd[SIZE], even[SIZE];
	int num;
	int i, oddIndex = 0, evenIndex = 0;

	for (i = 0; i < SIZE; i++)
	{
		printf("Enter a number:");
		scanf("%d", &num);

		if(num % 2 != 0)
			odd[oddIndex++] = num;
		else
			even[evenIndex++] = num;
	}

	printf("\n 홀수 출력:");
	for (i = 0; i < oddIndex; i++)
		printf("%d ", odd[i]);

	printf("\n 짝수 출력:");
	for (i = 0; i < evenIndex; i++)
		printf("%d ", even[i]);
	printf("\n");

	return 0;
}
*/