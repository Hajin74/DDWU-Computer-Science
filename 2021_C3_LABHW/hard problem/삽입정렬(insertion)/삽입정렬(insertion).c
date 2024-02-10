#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void insertionSort(int* list, int n) {
	int i, j, k, temp;

	for (i = 1; i < n; i++) {
		for (j = 0; j < i; j++) {
			if (list[j] > list[i])
				break;
		}

		temp = list[i];
		for (k = i; k > j; k--) {
			list[k] = list[k - 1];
		}
		list[j] = temp;
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
	insertionSort(list, n);
	printList(list, n);

	free(list);
}