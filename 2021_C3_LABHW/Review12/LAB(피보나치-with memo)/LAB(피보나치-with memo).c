#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int n, int* f) {
	if (n == 1 || n == 2)
		return 1;

	if (f[n - 1] == 0) {
		f[n - 1] = fib(n - 1, f);
	}

	if (f[n - 2] == 0) {
		f[n - 2] = fib(n - 2, f);
	}

	return f[n - 1] + f[n - 2];
}

int main(void) {
	int n, i;
	int* f;

	printf("ют╥б: ");
	scanf("%d", &n);

	f = (int*)malloc(sizeof(int) * (n + 1));
	for (i = 1; i <= n; i++) {
		f[i] = 0;
	}

	printf("%d\n", fib(n, f));
	free(f);
}