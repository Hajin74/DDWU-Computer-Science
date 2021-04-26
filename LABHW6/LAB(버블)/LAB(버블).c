#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *arr, int n) {
	int i, j, temp;

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			temp = arr[j];
			if (arr[j] > arr[j + 1]) {
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main(void) {
	int n, i;
	int* arr;

	srand(time(NULL));

	scanf("%d", &n);

	arr = (int*)malloc(sizeof(int) * n);
	if (!arr) {
		printf("메모리를 할당할 수 없습니다.");
		return 0;
	}

	for (i = 0; i < n; i++) {
		*(arr + i) = rand() % 1000;
		printf("%d ", *(arr + i));
	}

	bubbleSort(arr, n);

	printf("\n정렬된 후:\n");
	for (i = 0; i < n; i++)
		printf("%d ", *(arr + i));

	free(arr);
}