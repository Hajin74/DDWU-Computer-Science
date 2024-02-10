#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int partition(int A[], int p, int r) { // partition�Լ� , �ش��Ǻ��� �� ��° �ִ� �� �� �� ����, �ش��Ǻ� ���� �´� ���� ��, ��� ū ��
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

void quickSort(int *list, int p, int r) {
	int q;

	if (p < r) {
		q = partition(list, p, r);
		quickSort(list, p, q - 1);
		quickSort(list, q + 1, r);
	}
}

int main(void) {
	int n, * list, i;

	srand(time(NULL));

	scanf("%d", &n);

	list = (int*)malloc(sizeof(int) * n);
	if (list == NULL) {
		printf("�޸𸮰� �Ҵ���� �ʾҽ��ϴ�.");
	}

	for (i = 0; i < n; i++) {
		list[i] = rand() % 101;
		printf("%d ", list[i]);
	}
	printf("\n");

	quickSort(list, 0, n - 1);

	for(i = 0; i < n; i++)
		printf("%d ", list[i]);

	free(list);
}