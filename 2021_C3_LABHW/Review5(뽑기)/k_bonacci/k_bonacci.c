#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int k_bonacci(int k, int n) {
	int i, sum;

	if (n > k) {
		sum = 0;

		for (i = 1; i <= k; i++) {
			sum += k_bonacci(k, n - i);
		}

		return sum;
	}
	else {
		return 1;
	}
}

int main(void) {
	int k, n, result;

	scanf("%d %d", &k, &n);

	result = k_bonacci(k, n);
	printf("%d\n", result);
}