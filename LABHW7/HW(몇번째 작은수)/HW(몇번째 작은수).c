#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int partition(int* A, int p, int r) {
	int i = p - 1;
	int j = p;
	int temp;

	while (j < r) {
		if (A[j] < A[r]) {
			temp = A[i + 1];
			A[i + 1] = A[j];
			A[j] = temp;
			i++;
		}
		j++;
	}

	temp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = temp;

	return (i + 1);
}

int findNum(int *A, int order, int num) {
	int pivot;

	pivot = partition(A, 0, num - 1);
	while (pivot + 1 != order) {
		if (order < pivot + 1)
			pivot = partition(A, 0, pivot - 1);
		if (order > pivot + 1)
			pivot = partition(A, pivot + 1, num - 1);
	}

	return A[pivot];
}

int main(void) {
	int num, order, i;
	int pivot;
	int* list;

	srand(time(NULL));

	printf("Enter the number of numbers: ");
	scanf("%d", &num);
	printf("몇 번째로 작은 수: ");
	scanf("%d", &order);

	list = (int*)malloc(sizeof(int) * num);
	for (i = 0; i < num; i++) {
		list[i] = rand() % 100;
		printf("%d ", list[i]);
	}
	printf("\n");

	pivot = findNum(list, order, num);
	printf("%d번째 작은 수는 %d\n", order, pivot);
}