#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void printList(int* a, int n) {
	int i;

	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int partition(int a[], int p, int r) {
	int i = p - 1, j = p, temp;

	while (j < r) {
		if (a[j] < a[r]) {
			temp = a[i + 1];
			a[i + 1] = a[j];
			a[j] = temp;
			i++;
		}
		j++;
	}

	temp = a[i + 1];
	a[i + 1] = a[j];
	a[j] = temp;

	return i + 1;
}

void quickSort(int *list, int p, int r) {
	int q;

	if (p < r) {
		q = partition(list, p, r);
		quickSort(list, p, q - 1);
		quickSort(list, q + 1, r);
	}
}

int main(void) {
	int i, n, * list;

	scanf("%d", &n);
	list = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		scanf("%d", &list[i]);

	printList(list, n);
	quickSort(list, 0, n - 1);
	printList(list, n);

	free(list);
}