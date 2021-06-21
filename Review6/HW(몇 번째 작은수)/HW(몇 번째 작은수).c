#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void quickSort(int* list, int p, int r) {
	int q;

	if (p < r) {
		q = partition(list, p, r);
		quickSort(list, p, q - 1);
		quickSort(list, q + 1, r);
	}
}

int main(void) {
	int sIndex, num, i, n, * list;

	printf("Enter the number of numbers: ");
	scanf("%d", &n);
	list = (int*)malloc(sizeof(int) * n);

	printf("몇 번째로 작은 수: ");
	scanf("%d", &sIndex);

	srand(time(NULL));
	for (i = 0; i < n; i++) {
		list[i] = rand() % 100;
	}
	printList(list, n);

	quickSort(list, 0, n - 1);
	printList(list, n);
	printf("%d 번째 작은 수는 %d\n", sIndex, list[sIndex]);

	free(list);
}