#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void printList(int* a, int p, int r) {
	int i;

	for (i = p; i <= r; i++) {
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

int main(void) {
	int list1[] = { 0, 20, 55, 66, 10, 40, 88, 77, 30, 49 };
	int list2[] = { 0, 20, 10, 40, 30, 49, 88, 77, 55, 66 };
	int loc;

	printList(list1, 0, 9);
	loc = partition(list1, 0, 9);
	printList(list1, 0, 9);
	printf("%d\n", loc);

	printList(list2, 6, 9);
	loc = partition(list2, 6, 9);
	printList(list2, 6, 9);
	printf("%d\n", loc);
}