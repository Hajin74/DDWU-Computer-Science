#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void merge(int A[], int p, int q, int r) {
	int i = p, j = q + 1, k = p;
	int temp[10] = { 0 };

	while (i <= q && j <= r) {
		if (A[i] <= A[j]) {
			temp[k] = A[i];
			i++;
		}
		else {
			temp[k] = A[j];
			j++;
		}
		k++;
	}

	while (i <= q) {
		temp[k++] = A[i++];
	}

	while (j <= r) {
		temp[k++] = A[j++];
	}

	for (i = p; i <= r; i++)
		A[i] = temp[i];
}

void printList(int A[], int s, int e) {
	int i;

	for (i = s; i <= e; i++)
		printf("%d ", A[i]);
	printf("\n");
}

int main(void) {
	int list1[] = { 10, 20, 30, 70, 80, 11, 33, 44, 55, 66 };
	int list2[] = { 10, 20, 30, 70, 80, 11, 33, 44, 55, 66 };

	// test #1
	printList(list1, 0, 9);
	merge(list1, 0, 4, 9);
	printList(list1, 0, 9);

	// test #2
	printList(list2, 2, 7);
	merge(list2, 2, 4, 7);
	printList(list2, 2, 7);
}