// 20200988 컴퓨터학과 유하진
#include <stdio.h>
int fibo(int n);

int main(void)
{
	int n, idx;
	printf("몇개의 피보나치 수열값을 출력할까요?(3보다 큰 정수):");
	scanf_s("%d", &n);
	for (idx = 0; idx < n; idx++)
	{
		printf("%10d ", fibo(idx));
		if ((idx + 1) % 5 == 0)
			printf("\n");
	}
	printf("\n");
}
int fibo(int n) // 재귀적으로 구현하지 않는다
{
	int n1 = 1, n2 = 1, n3;
	int i;

	if (n == 0 || n == 1)
		return 1;

	for (i = 2; i <= n; i++)
	{
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
	}

	return n3;
}

/*
#include <stdio.h>
int fibo(int n);
int main(void)
{
	int n, idx;
	printf("몇개의 피보나치 수열값을 출력할까요?(3보다 큰 정수):");
	scanf_s("%d", &n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d ", fibo(idx));
		if ((idx + 1) % 5 == 0)
			printf("\n");
	}
	printf("\n");
}

int fibo(int n) // 재귀적으로 구현하지 않는다
{
	int n1 = 0, n2 = 1, n3 = 1;
	int i;

	for (i = 0; i < n; i++) {
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}

	return n3;
}
*/