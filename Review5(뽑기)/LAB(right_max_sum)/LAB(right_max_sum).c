#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int right_max_sum(int a[], int s, int e) {
	int i, j, sum, max = a[s];

	for (i = s; i <= e; i++) {
		sum = 0;
		for (j = s; j <= i; j++) {
			sum += a[j];
		}
		if (sum > max)
			max = sum;
	}

	return max;
}

int main(void) {
	int max, s, e;
	int a[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

	scanf("%d %d", &s, &e);

	max = right_max_sum(a, s, e);
	printf("max value = %d\n", max);
}