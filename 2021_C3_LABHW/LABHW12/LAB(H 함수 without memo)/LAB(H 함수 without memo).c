#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int H(int n) {
	int i;
	int sum;

	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		sum = 0;
		for (i = 0; i < n; i++) {
			sum += H(i) * H(n - (i + 1));
		}

		return sum;
	}
}

int main(void) {
	int n;

	printf("0보다 큰 정수: ");
	scanf("%d", &n);

	printf("결과는 %d\n", H(n));
}