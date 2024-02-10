#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArr(int a[], int p, int r) {
	int i;

	for (i = p; i <= r; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void merge(int a[], int p, int q, int r) {
	int i = p, j = q + 1, k = p;
	int* temp = (int*)malloc(sizeof(int) * (r + 1));

	while (i <= q && j <= r) {
		if (a[i] <= a[j]) {
			temp[k++] = a[i++];
		}
		else {
			temp[k++] = a[j++];
		}
	}

	while (i <= q) {
		temp[k++] = a[i++];
	}

	while (j <= r) {
		temp[k++] = a[j++];
	}

	for (i = p; i <= r; i++) {
		a[i] = temp[i];
	}
}

void mergeSort(int a[], int p, int r) {
	int q;

	if (p < r) {
		q = (p + r) / 2;
		mergeSort(a, p, q);
		mergeSort(a, q + 1, r);
		merge(a, p, q, r);
	}
}

int main(void) {
	int i, n;
	int* arr;

	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);

	srand(time(NULL));
	for (i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}

	printArr(arr, 0, n - 1);
	mergeSort(arr, 0,  n - 1);
	printArr(arr, 0, n - 1);

	free(arr);
}