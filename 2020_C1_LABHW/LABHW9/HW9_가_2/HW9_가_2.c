#include <stdio.h>

int main(void)
{
	int i, j, k;
	int num;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	for (i = 0; i < (num + 1) / 2; i++) // 줄 수
	{
		for (k = num - i; k < num; k++) // 공백 수
		{
			printf(" ");
		}

		for (j = num - 2 * i; j > 0; j--) // * 수
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