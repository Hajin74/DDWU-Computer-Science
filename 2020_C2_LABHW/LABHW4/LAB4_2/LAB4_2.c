// 20200988 컴퓨터학과 유하진
#include <stdio.h>
int sum_rec(int);

void main()
{
	int n;
	printf("Enter a number: ");
	scanf_s("%d", &n);
	printf("1부터 %d까지의 합은 %d입니다,\n", n, sum_rec(n));
}

int sum_rec(int n)
{
	if (n <= 1)
		return 1;
	else
		return n + sum_rec(n - 1);
}