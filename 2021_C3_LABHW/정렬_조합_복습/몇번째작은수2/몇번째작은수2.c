#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int n1, int n2) {
	int temp;

	temp = a[n1];
	a[n1] = a[n2];
	a[n2] = temp;
}

int partition(int* a, int l, int h) {
	int i = l - 1, j = l, temp;

	while (j < h) {
		if (a[j] < a[h]) {
			swap(a, j, i + 1);
			i++;
		}
		j++;
	}
	swap(a, j, i + 1);

	return i + 1;
}

int findSmallest(int order, int* a, int l, int h) {
	if (l <= h) {
		int p;
		
		p = partition(a, l, h);

		if (p + 1 == order) 
			return a[p];
		else if (p + 1 < order) 
			return findSmallest(order, a, p + 1, h);
		else 
			return findSmallest(order, a, l, p - 1);
	}
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