#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int right_max_sum(int A[], int left, int right) {
	int i;
	int sum = 0;
	int max;

	max = A[left];
	for (i = left; i <= right; i++) {
		sum += A[i];

		if (sum > max)
			max = sum;
	}

	return max;
}

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

int max_subarray(int* A, int left, int right) {
	int V1, V2, V3;
	int mid;

	if (left == right) 
		return A[left];

	mid = (left + right) / 2;

	V1 = max_subarray(A, left, mid);
	V2 = max_subarray(A, mid + 1, right);
	V3 = left_max_sum(A, left, mid) + right_max_sum(A, mid + 1, right);

	if ((V1 >= V2) && (V1 >= V3))
		return V1;
	else if ((V2 >= V1) && (V2 >= V3))
		return V2;
	else if ((V3 >= V1) && (V3 >= V2))
		return V3;
}

int main(void) {
	int* A;
	int n, i;

	scanf("%d", &n);

	A = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);

	printf("%d\n", max_subarray(A, 0, n - 1));
}