// 20200988 À¯ÇÏÁø
#include <stdio.h>

int main(void)
{
	int m, n, i, j;
	int sum = 0;
	int prime = 1;

	scanf_s("%d %d", &m, &n);

	for (i = m; i <= n; i++)
	{
		prime = 1;

		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				prime = 0;
				break;
			}
		}

		if (prime == 1)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);
}

/*
int main(void)
{
	int m, n;
	int i, j;
	int flag;
	int sum = 0;

	scanf("%d %d", &m, &n);

	for(i = m; i <= n; i++)
	{
		flag = 1;

		for(j = 2; j < i; j++)
		{
			if(i % j == 0)
			{
				flag = 0;

			}
		}

		if(flag == 1)
			sum += i;
	}

	printf("%d", sum);

}
*/