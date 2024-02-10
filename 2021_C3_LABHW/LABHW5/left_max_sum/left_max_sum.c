#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int left_max_sum(int A[], int left, int right) {
	int i, max, sum = 0;

	max = A[right];
	for (i = right; i >= left; i--) {
		sum += A[i];

		if (sum > max)
			max = sum;
	}

	return max;
}

int main(void) {
	int A[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

	//int max = left_max_sum(A, 4, 6);
	//int max = left_max_sum(A, 0, 4);
	int max = left_max_sum(A, 0, 8);

	printf("max value = %d\n", max);
}