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

	for (i = right; i >= left; i--) { // right���� �ϳ� �ϳ� ���ؼ� �ִ��� ����
		sum += A[i];
		if (sum > max)
			max = sum;
	}

	return max;
}

/*
�ϳ��� ���ҷ� �������� ������ mid�� �߽����� �������� ������ max_array�� �θ�
�׸��� �����ִ�, ������ �ִ�, mid�� ���ִ� �ִ��� ���ؼ� ���� ū�� ����
�ϳ��� ���ҷ� �������� ������ ������ ������ �ϳ��� ���Ұ� �ִ��� �� ���� ����
*/

int max_subarray(int* A, int left, int right) {
	int v1, v2, v3;
	int max;
	int mid = (left + right) / 2;

	if (left == right) // ��������, �ϳ��� ���ҷ� ���������� �� ���Ҹ� ��ȯ
		return A[mid];

	v1 = max_subarray(A, left, mid); // ����
	v2 = max_subarray(A, mid + 1, right); // ����
	v3 = left_max_sum(A, left, mid) + right_max_sum(A, mid + +1, right); // �ڱⰡ �� ��

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
