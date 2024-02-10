#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int list[], int size) {
	int i, j, min, temp;

	for (i = 0; i < size - 1; i++) {
		min = i;
		for (j = i; j < size; j++) {
			if (list[j] < list[min])
				min = j;
		}
		temp = list[i];
		list[i] = list[min];
		list[min] = temp;
	}
}

int main(void) {
	int num, i;
	int* list;

	printf("Enter a number: ");
	scanf("%d", &num);

	list = (int*)malloc(sizeof(int) * num);

	srand(time(NULL));
	for (i = 0; i < num; i++) {
		list[i] = rand() % 100;
		printf("%d ", list[i]);
	}
	printf("\n");

	selectionSort(list, num);

	printf("정렬된 후:\n");
	for (i = 0; i < num; i++)
		printf("%d ", list[i]);
	printf("\n");

	free(list);
}