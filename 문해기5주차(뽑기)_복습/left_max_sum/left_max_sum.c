#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int left_max_sum (int A[], int left, int right) {
	int i;
	int sum = 0, max = A[right];

	for (i = right; i >= left; i--) { // right부터 하나 하나 더해서 최댓값을 리턴
		sum += A[i];
		if (sum > max)
			max = sum;
	}

	return max;
}

int main(void) {
	int A[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

	int max = left_max_sum(A, 4, 6);
	printf("max value = %d\n", max);

	max = left_max_sum(A, 0, 4);
	printf("max value = %d\n", max);

	max = left_max_sum(A, 4, 7);
	printf("max value = %d\n", max);
}