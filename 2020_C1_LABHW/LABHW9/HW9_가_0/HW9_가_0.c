// 20200988 �İ� ������
#include <stdio.h>

int main(void)
{
	int num, i, j;
	printf("Enter a number : ");
	scanf_s("%d", &num);

	for (i = num; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}