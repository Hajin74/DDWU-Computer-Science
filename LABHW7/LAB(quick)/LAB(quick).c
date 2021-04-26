#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int partition(int *A, int p, int r) {
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

void quickSort(int *A, int p, int r) {
	int q;

	if (p < r) {
		q = partition(A, p, r);
		quickSort(A, p, q - 1);
		quickSort(A, q + 1, r);
	}
}

int main(void) {
	int* list;
	int n;
	int i;

	scanf("%d", &n);
	list = (int*)malloc(sizeof(int) * n);

	srand(time(NULL));

	for (i = 0; i < n; i++)
		list[i] = rand() % 101;

	for (i = 0; i < n; i++)
		printf("%d ", list[i]);
	printf("\n");

	quickSort(list, 0, n - 1);

	for (i = 0; i < n; i++)
		printf("%d ", list[i]);
	printf("\n");

	free(list);
}