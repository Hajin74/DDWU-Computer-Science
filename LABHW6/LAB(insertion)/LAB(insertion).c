#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int* A, int n) {
	int i, j, k;
	int temp;

	for (i = 1; i < n; i++) {
		for (j = 0; j < i; j++) {
			if (A[j] > A[i])
				break;
		}

		temp = A[i];
		for (k = i; k > j; k--) {
			A[k] = A[k - 1];
		}
		A[j] = temp;
	}
}

int main(void) {
	int i, n;
	int* p;

	scanf("%d", &n);
	p = (int*)malloc(sizeof(int) * n);

	srand(time(NULL));

	for (i = 0; i < n; i++)
		p[i] = rand() % 1000;

	for (i = 0; i < n; i++)
		printf("%d ", p[i]);
	printf("\n");

	insertionSort(p, n);

	for (i = 0; i < n; i++)
		printf("%d ", p[i]);
	printf("\n");

	free(p);
}