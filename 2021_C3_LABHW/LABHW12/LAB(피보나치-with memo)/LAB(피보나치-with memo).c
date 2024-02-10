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
	int* F; // memo -> 중복을 피하기 위해 값을 저장해 놓는 역할
	
	printf("몇 번째까지의 피보나치 수열: ");
	scanf("%d", &n);

	F = (int*)malloc(sizeof(int) * (n + 1));
	for (i = 1; i <= n; i++) {
		F[i] = 0; // F[1]부터 유의미한 값을 넣음
	}

	result = fib(n, F);

	free(F);
}