// 20200988 ��ǻ���а� ������
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

	printf("\nȦ�� ��� :");
	for (i = 0; i < oddIndex; i++)
		printf("%d ", odd[i]);

	printf("\n¦�� ��� :");
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

	printf("\n Ȧ�� ���:");
	for (i = 0; i < oddIndex; i++)
		printf("%d ", odd[i]);

	printf("\n ¦�� ���:");
	for (i = 0; i < evenIndex; i++)
		printf("%d ", even[i]);
	printf("\n");

	return 0;
}
*/