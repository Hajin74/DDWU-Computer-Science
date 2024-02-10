#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int count = 0;

void pick(int cutline, int* items, int itemSize, int* bucket, int bucketSize, int toPick) {
	int i, lastIndex, smallest, item, total;

	if (toPick == 0) {
		total = 0;
		for (i = 0; i < bucketSize; i++)
			total += items[bucket[i]];

		if (total >= cutline) {
			/*
			for (i = 0; i < bucketSize; i++)
				printf("%d ", items[bucket[i]]);
			printf("\n");
			*/
			count++;
		}

		return;
	}

	lastIndex = bucketSize - toPick - 1;

	if (toPick == bucketSize)
		smallest = 0;
	else
		smallest = bucket[lastIndex] + 1;

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		pick(cutline, items, itemSize, bucket, bucketSize, toPick - 1);
	}
}

int main(void) {
	int i, n, m, cutline;
	int* items;
	int* bucket;

	scanf("%d", &n);
	items = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
		scanf("%d", &items[i]);

	scanf("%d", &m);
	bucket = (int*)malloc(sizeof(int) * m);

	scanf("%d", &cutline);

	pick(cutline, items, n, bucket, m, m);
	printf("%d\n", count);

	free(items);
	free(bucket);
}