#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int partition(int* a, int p, int r) {
	int i = p - 1, j = p, temp;

	while (j < r) {
		if (a[j] < a[r]) {
			temp = a[j];
			a[j] = a[i + 1];
			a[i + 1] = temp;
			i++;
		}
		j++;
	}
	temp = a[j];
	a[j] = a[i + 1];
	a[i + 1] = temp;

	return i + 1;
}

int findSmallest(int* a, int p, int r, int order) {
	if (p <= r) {
		int pivot;

		pivot = partition(a, p, r);

		if (pivot + 1 == order)
			return a[pivot];
		else if (pivot + 1 > order) {
			return findSmallest(a, p, pivot - 1, order);
		}
		else if (pivot + 1 < order) {
			return findSmallest(a, pivot + 1, r, order);
		}
	}
}


int main(void) {
	int i, num, order, result;
	int* list;

	printf("배열 크기: ");
	scanf("%d", &num);
	printf("몇 번째로 작은 수: ");
	scanf("%d", &order);

	list = (int*)malloc(sizeof(int) * num);
	srand(time(NULL));
	for (i = 0; i < num; i++) {
		list[i] = rand() % 100;
		printf("%d ", list[i]);
	}
	printf("\n");

	result = findSmallest(list, 0, num - 1, order);
	printf("%d\n", result);

	free(list);
}