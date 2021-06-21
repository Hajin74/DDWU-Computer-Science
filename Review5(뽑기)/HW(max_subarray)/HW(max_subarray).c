#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int left_max_sum(int a[], int s, int e) {
	int i, j, sum, max = a[s];

	for (i = e; i >= s; i--) {
		sum = 0;
		for (j = e; j >= i; j--) {
			sum += a[j];
		}
		if (sum > max)
			max = sum;
	}

	return max;
}

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

int max_subarray(int *A, int s, int e) {
	int mid, a, b, c;

	if (s < e) {
		mid = (s + e) / 2;

		a = max_subarray(A, s, mid);
		b = max_subarray(A, mid + 1, e);
		c = left_max_sum(A, s, mid) + right_max_sum(A, mid + 1, e);

		if (a >= b && a >= c) {
			return a;
		}
		else if (b >= a && b >= c) {
			return b;
		}
		else {
			return c;
		}
	}
	else {
		return A[s];
	}
}

int main(void) {
	int a[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	int max;

	max = max_subarray(a, 0, 4);
	printf("max value: %d\n", max);
}