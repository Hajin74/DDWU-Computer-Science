#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int* a, int size) {
	int i, j, k, temp;

	for (i = 0; i < size; i++) {
		for (j = 0; j < i; j++) {
			if (a[i] < a[j])
				break;
		}
		
		temp = a[i];
		
		for (k = i; k > j; k--)
			a[k] = a[k - 1];

		a[j] = temp;
	}
}

int main(void) {
	int i, n;
	int* list;

	scanf("%d", &n);
	list = (int*)malloc(sizeof(int) * n);

	srand(time(NULL));
	for (i = 0; i < n; i++) {
		list[i] = rand() % 101;
		printf("%d ", list[i]);
	}
	printf("\n");

	insertionSort(list, n);

	for (i = 0; i < n; i++)
		printf("%d ", list[i]);

	free(list);
}