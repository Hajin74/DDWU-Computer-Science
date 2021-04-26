#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int partition(int bucket[], int p, int r) {
	int i = p - 1, j = p, temp;

	while (j < r) {
		if (bucket[j] < bucket[r]) {
			temp = bucket[j];
			bucket[j] = bucket[i + 1];
			bucket[i + 1] = temp;
			i++;
		}
		j++;
	}
	temp = bucket[j];
	bucket[j] = bucket[i + 1];
	bucket[i + 1] = temp;

	return i + 1;
}

void quickSort(int bucket[], int p, int r) {
	int pivot;

	if (p < r) {
		pivot = partition(bucket, p, r);
		quickSort(bucket, p, pivot - 1);
		quickSort(bucket, pivot + 1, r);
	}
}

int main(void) {
	int bucket[] = { 3, 5, 1, 10, 7, 6, 8 };
	int pivot;
	int i;

	quickSort(bucket, 0, 6);

	for (i = 0; i < 7; i++)
		printf("%d ", bucket[i]);
}