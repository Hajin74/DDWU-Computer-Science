#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int count = 0;

void pick(int key, int items[], int itemSize, int *bucket, int bucketSize, int toPick) {
	int i, lastIndex, smallest, item, total;

	if (toPick == 0) {
		total = 0;
		for (i = 0; i < bucketSize; i++)
			total += bucket[i] * (i + 1);

		if (total == key)
			count++;

		return ;
	}

	lastIndex = bucketSize - toPick - 1;
	smallest = 0;

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = items[item];
		pick(key, items, itemSize, bucket, bucketSize, toPick - 1);
	}
}

int main(void) {
	int items[2] = { 1, -1 };
	int* bucket;
	int n, i, result;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		bucket = (int*)malloc(sizeof(int) * i);
		pick(n, items, 2, bucket, i, i);
		free(bucket);
	}

	printf("%d", count);
}