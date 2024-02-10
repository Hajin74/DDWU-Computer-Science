// 20200988 컴퓨터학과 유하진
#include <stdio.h>
int is_prime(int num);

int main(void)
{
	int a[20], p[20], np[20];
	int i, n;
	int pcount = 0, npcount = 0;

	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);

	for (i = 0; i < n; i++)
	{
		if (is_prime(a[i]))
			p[pcount++] = a[i];
		else
			np[npcount++] = a[i];
	}

	for (i = 0; i < pcount; i++)
		printf("%d ", p[i]);

	for (i = 0; i < npcount; i++)
		printf("%d ", np[i]);

}

int is_prime(int num)
{
	int i;
	int flag = 1;


	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			flag = 0;
			return flag;
		}
	}

	return flag;

}