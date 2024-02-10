#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int* list, int n) {
	int i, j, k, temp;

	for (i = 1; i < n; i++) {
		for (j = 0; j < i; j++) {
			if (list[j] > list[i])
				break;
		}
		temp = list[i];
		for (k = i; k > j; k--)
			list[k] = list[k - 1];
		list[j] = temp;
	}
}

void insertionSort2(int* list, int n) {
	int i, j, k, temp;

	for (i = 1; i < n; i++) {
		for (j = 0; j < i; j++) {
			if (list[j] < list[i])
				break;
		}
		temp = list[i];
		for (k = i; k > j; k--)
			list[k] = list[k - 1];
		list[j] = temp;
	}
}

int main(void) {
	int n, i;
	int* list;

	srand(time(NULL));

	scanf("%d", &n);
	list = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		list[i] = rand() % 100;

	for (i = 0; i < n; i++)
		printf("%d ", list[i]);
	printf("\n");

	insertionSort(list, n);

	for (i = 0; i < n; i++)
		printf("%d ", list[i]);
	printf("\n");

	insertionSort2(list, n);

	for (i = 0; i < n; i++)
		printf("%d ", list[i]);
	printf("\n");

	free(list);
}