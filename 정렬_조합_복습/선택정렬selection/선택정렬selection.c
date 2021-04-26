#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int* a, int size) {
	int i, j;
	int min, temp;

	for (i = 0; i < size - 1; i++) {
		min = i;
		for (j = i; j < size; j++) {
			if (a[j] < a[min])
				min = j;
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
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

	selectionSort(list, n);

	for (i = 0; i < n; i++)
		printf("%d ", list[i]);

	free(list);
}