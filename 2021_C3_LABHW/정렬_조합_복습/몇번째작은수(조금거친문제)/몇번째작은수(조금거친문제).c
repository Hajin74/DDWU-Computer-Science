#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int partition(int* a, int l, int h) {
	int i = l - 1, j = l, temp;

	while (j < h) {
		if (a[j] < a[h]) {
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

int findSmallest(int order, int* a, int l, int h) {
	int pivot;

	pivot = partition(a, l, h);

	while (order < pivot + 1) {
		if (order < pivot + 1) {
			pivot = partition(a, l, pivot - 1);
		}
		else if(order > pivot + 1) {
			pivot = partition(a, pivot + 1, h);
		}
	}

	return a[pivot];
}

int main(void) {
	int i, num, order, result;
	int* list;

	printf("Enter the number of numbers: ");
	scanf("%d", &num);
	printf("몇 번재로 작은 수? ");
	scanf("%d", &order);

	list = (int*)malloc(sizeof(int) * num);

	srand(time(NULL));
	for (i = 0; i < num; i++) {
		list[i] = rand() % 100;
		printf("%d ", list[i]);
	}
	
	result = findSmallest(order, list, 0, num - 1);

	printf("\n%d번째 작은 수는 %d\n", order, result);

	free(list);
}