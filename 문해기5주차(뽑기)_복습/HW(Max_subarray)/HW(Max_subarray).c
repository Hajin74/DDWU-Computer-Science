#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int right_max_sum(int A[], int left, int right) {
	int i, sum = 0, max = A[left];

	for (i = left; i <= right; i++) {
		sum += A[i];

		if (sum > max)
			max = sum;
	}

	return max;
}

int left_max_sum(int A[], int left, int right) {
	int i;
	int sum = 0, max = A[right];

	for (i = right; i >= left; i--) { // right부터 하나 하나 더해서 최댓값을 리턴
		sum += A[i];
		if (sum > max)
			max = sum;
	}

	return max;
}

/*
하나의 원소로 나누어질 때까지 mid를 중심으로 양쪽으로 나눠서 max_array를 부름
그리고 왼쪽최댓값, 오른쪽 최댓값, mid가 껴있는 최댓값을 비교해서 가장 큰게 정답
하나로 원소로 나누어질 때까지 나누는 이유는 하나의 원소가 최댓값이 될 수도 있음
*/

int max_subarray(int* A, int left, int right) {
	int v1, v2, v3;
	int max;
	int mid = (left + right) / 2;

	if (left == right) // 종료조건, 하나의 원소로 나누어지면 그 원소를 반환
		return A[mid];

	v1 = max_subarray(A, left, mid); // 위임
	v2 = max_subarray(A, mid + 1, right); // 위임
	v3 = left_max_sum(A, left, mid) + right_max_sum(A, mid + +1, right); // 자기가 할 일

	if ((v1 >= v2) && (v1 >= v3))
		return v1;
	else if ((v2 >= v1) && (v2 >= v3))
		return v2;
	else
		return v3;
}

int main() {
	int array_size, lastIndex, max, i;
	int* A;

	scanf("%d", &array_size);
	A = (int*)malloc(sizeof(int) * array_size);

	for (i = 0; i < array_size; i++)
		scanf("%d", &A[i]);

	lastIndex = array_size - 1;

	max = max_subarray(A, 0, lastIndex);
	printf("%d\n", max);

	free(A);

	return 0;
}
