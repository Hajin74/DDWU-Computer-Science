#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int partition(int A[], int p, int r) {
	int i = p - 1;
	int j = p;
	int temp;

	while (j < r) {
		if (A[j] < A[r]) {
			temp = A[i + 1];
			A[i + 1] = A[j];
			A[j] = temp;
			i++;
		}
		j++;
	}

	temp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = temp;

	return (i + 1);
}

void printList(int A[], int s, int e) {
	int i;

	for (i = s; i <= e; i++)
		printf("%d ", A[i]);
	printf("\n");
}

int main(void) {
	int list[] = { 0, 20, 55, 66, 10, 40, 88, 77, 30, 49 };
	int list2[] = { 0, 20, 10, 40, 30, 49, 88, 77, 55, 66 };
	int loc;

	// test1
	printList(list, 0, 9);
	loc = partition(list, 0, 9);
	printList(list, 0, 9);
	printf("%d의 위치는 %d\n", 49, loc);
	printf("\n");

	// test2
	printList(list2, 6, 9);
	loc = partition(list2, 6, 9);
	printList(list2, 6, 9);
	printf("%d의 위치는 %d\n", 66, loc);
	printf("\n");

	// test3
	printList(list2, 0, 4);
	loc = partition(list2, 0, 4);
	printList(list2, 0, 4);
	printf("%d의 위치는 %d\n", 30, loc);
	printf("\n");

}