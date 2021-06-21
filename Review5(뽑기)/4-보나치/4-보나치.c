#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int four_bonacci(int n) {
	int i, sum;

	if (n > 4) {
		sum = 0;

		for (i = 1; i <= 4; i++) {
			sum += four_bonacci(n - i);
		}

		return sum;
	}
	else {
		return 1;
	}
}

int main(void) {
	int n, result;

	scanf("%d", &n);

	result = four_bonacci(n);
	printf("%d\n", result);
}