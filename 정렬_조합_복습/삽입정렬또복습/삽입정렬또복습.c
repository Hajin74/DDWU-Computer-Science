#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void insertionSort(int bucket[], int n) {
	int i, j, k, temp;

	for (i = 1; i < n; i++) {
		for (j = 0; j < i; j++) {
			if (bucket[j] > bucket[i])
				break;
		}
		temp = bucket[i];
		for (k = i; k > j; k--)
			bucket[k] = bucket[k - 1];
		bucket[j] = temp;
	}
}

int main(void) {
	int bucket[] = { 3, 5, 1, 10, 7, 6, 8 };
	int pivot;
	int i;

	insertionSort(bucket, 7);

	for (i = 0; i < 7; i++)
		printf("%d ", bucket[i]);
}