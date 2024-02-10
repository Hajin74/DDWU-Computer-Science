#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int k_bonacci(int k, int n) {
	int i;
	int sum;

	if (n <= k) {
		return 1;
	}
	else {
		sum = 0;
		for (i = 1; i <= k; i++) {
			sum += k_bonacci(k, n - i);
		}
		return sum;
	}
}

int main(void) {
	int k, n;

	scanf("%d %d", &k, &n);

	printf("%d\n", k_bonacci(k, n));
}