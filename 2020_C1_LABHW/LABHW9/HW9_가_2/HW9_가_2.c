#include <stdio.h>

int main(void)
{
	int i, j, k;
	int num;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	for (i = 0; i < (num + 1) / 2; i++) // �� ��
	{
		for (k = num - i; k < num; k++) // ���� ��
		{
			printf(" ");
		}

		for (j = num - 2 * i; j > 0; j--) // * ��
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}

/*
for(i = 0; i < (num + 1) / 2; i++)
   {
		for(j = 0; j < i; j++)
		{
			printf(" ");
		}

		for(k = num - 2 * i; k > 0; k--)
		{
			printf("*");
		}

		printf("\n");
   }
*/