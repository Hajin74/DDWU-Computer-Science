// 20200988 À¯ÇÏÁø
#include <stdio.h>

int main(void)
{
	int n, i;
	int sum = 0;

	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			sum += i;
	}

	printf("%d\n", sum);
}