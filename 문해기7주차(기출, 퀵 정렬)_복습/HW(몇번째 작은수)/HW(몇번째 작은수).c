#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findNum(int* A, int p, int r, int order) {
	int loc;

	loc = partition(A, p, r);

	while (loc + 1 != order) {
		if (loc + 1 > order)
			loc = partition(A, p, loc - 1);
		else if (order > loc + 1)
			loc = partition(A, loc + 1, r);
	}

	return A[loc];
}

int partition(int* A, int p, int r) {
	int i = p - 1, j = p;
	int temp;

	while (j < r) {
		if (A[j] < A[r]) {
			temp = A[j];
			A[j] = A[i + 1];
			A[i + 1] = temp;
			i++;
		}
		j++;
	}
	temp = A[j];
	A[j] = A[i + 1];
	A[i + 1] = temp;

	return i + 1;
}

int main(void) {
	int i;
	int num, order;
	int* sp;
	int result;

	srand(time(NULL));

	printf("Enter the number of numbers: ");
	scanf("%d", &num);
	printf("몇번째로 작은 수 : ");
	scanf("%d", &order);

	sp = (int*)malloc(sizeof(int) * num);

	for (i = 0; i < num; i++) {
		sp[i] = rand() % 100;
		printf("%d ", sp[i]);
	}
	printf("\n");

	result = findNum(sp, 0, num - 1, order);
	printf("%d번째 작은 수는 %d\n", order, result);

	free(sp);
}