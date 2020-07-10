#include <stdio.h>

int is_prime(int num)
{
	int i;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
}

int main(void)
{
	int a[20], p[20], np[20]; // p는 소수를 np는 소수아닌 수를 담을 배열
	int npIndex = 0, pIndex = 0;
	int i;
	int n;

	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);

	for (i = 0; i < n; i++)
	{
		if (!is_prime(a[i]))
			np[npIndex++] = a[i];
		else if(is_prime(a[i]))
			p[pIndex++] = a[i];
	}

	for (i = 0; i < pIndex; i++)
		printf("%d ", p[i]);

	for (i = 0; i < npIndex; i++)
		printf("%d ", np[i]);
}