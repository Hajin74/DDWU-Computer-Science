#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int* a, int size) {
	int i, j, temp;

	for (i = 0; i < size - 1; i++) {
		for (j = 0; j < size - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
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

	bubbleSort(list, n);

	for (i = 0; i < n; i++)
		printf("%d ", list[i]);

	free(list);
}