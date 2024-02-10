#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int *list, int size) {
	int i, j;
	int temp;

	for (i = 0; i < size - 1; i++) { // size - 1번 만큼 반복문을 돈다.
		for (j = 0; j < size - 1 - i; j++) {
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
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

	bubbleSort(list, n);

	for (i = 0; i < n; i++)
		printf("%d ", list[i]);
	printf("\n");

	free(list);
}