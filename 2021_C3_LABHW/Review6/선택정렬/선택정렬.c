#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void selectionSort(int *list, int n) {
	int i, j, smallest, temp;

	for (i = 0; i < n; i++) {
		smallest = i;
		for (j = i; j < n; j++) {
			if (list[j] < list[smallest])
				smallest = j;
		}
		temp = list[smallest];
		list[smallest] = list[i];
		list[i] = temp;
	}
}

void printList(int* a, int n) {
	int i;

	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(void) {
	int i, n;
	int* list;

	scanf("%d", &n);
	list = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) {
		scanf("%d", &list[i]);
	}

	printList(list, n);
	selectionSort(list, n);
	printList(list, n);

	free(list);
}