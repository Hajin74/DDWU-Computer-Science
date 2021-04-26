#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void insertion(int arr[], int size, int num) {
	int i, j;

	for (i = 0; i < size; i++) {
		if (num < arr[i])
			break;
	}

	for (j = size - 1; j > i; j--) 
		arr[j] = arr[j - 1];

	arr[i] = num;

	return;
}

int main(void) {
	int i, n, n2;
	int* arr;

	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * (n + 1));

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &n2);
	arr[n] = n2;

	insertion(arr, n + 1, n2);

	for (i = 0; i < n + 1; i++)
		printf("%d ", arr[i]);

	free(arr);
}