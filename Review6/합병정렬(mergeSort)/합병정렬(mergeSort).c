#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void merge(int a[], int p, int q, int r) {
	int i = p, j = q + 1, k = p; // k는 temp의 인덱스
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

	// temp배열을 원래 배열로 옮기기
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
	int i, n, * list;

	scanf("%d", &n);
	list = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) {
		scanf("%d", &list[i]);
	}

	for (i = 0; i < n; i++) {
		printf("%d ", list[i]);
	}
	printf("\n");

	mergeSort(list, 0, n - 1);

	for (i = 0; i < n; i++) {
		printf("%d ", list[i]);
	}
	printf("\n");

	free(list);
}