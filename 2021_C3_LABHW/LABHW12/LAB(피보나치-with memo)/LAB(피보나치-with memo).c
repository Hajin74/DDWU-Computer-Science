#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int n, int *F) {
	if (n == 1 || n == 2) {
		printf("%3d", 1);

		return 1;
	}

	if (F[n - 1] == 0) {
		F[n - 1] = fib(n - 1, F);
	}

	if (F[n - 2] == 0) {
		F[n - 2] = fib(n - 2, F);
	}

	printf("%3d", F[n - 1] + F[n - 2]);

	return F[n - 1] + F[n - 2];
}

int main(void) {
	int n, i, result;
	int* F; // memo -> �ߺ��� ���ϱ� ���� ���� ������ ���� ����
	
	printf("�� ��°������ �Ǻ���ġ ����: ");
	scanf("%d", &n);

	F = (int*)malloc(sizeof(int) * (n + 1));
	for (i = 1; i <= n; i++) {
		F[i] = 0; // F[1]���� ���ǹ��� ���� ����
	}

	result = fib(n, F);

	free(F);
}