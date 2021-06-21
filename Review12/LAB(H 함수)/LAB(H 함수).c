#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int h(int* m, int n) {
	int i, j, sum;

	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		sum = 0;
		for (i = 0; i < n; i++) {
			if (m[i] == 0) {
				m[i] = h(m, i);
			}
			if (m[n - i - 1] == 0) {
				m[n - i - 1] = h(m, n - i - 1);
			}

			sum += m[i] * m[n - i - 1];
		}
		return sum;
	}
}

int main(void) {
	int i, n, *m;

	printf("0보다 큰 정수: ");
	scanf("%d", &n);

	m = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) {
		m[i] = 0;
	}
	printf("결과는 %d\n", h(m, n));

	free(m);
}