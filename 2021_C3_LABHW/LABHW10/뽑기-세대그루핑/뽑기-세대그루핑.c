#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int count = 0;
int pri_total = 0, current_total = 0;

void pick(int *items, int itemSize, int *bucket, int bucketSize, int k) {
	int i, lastIndex, smallest, item;

	if (k == 0) {
		current_total = 0;
		for (i = 0; i < bucketSize; i++) {
			current_total = current_total * 100 + items[bucket[i]];
		}

		if (current_total > pri_total) {
			for (i = 0; i < bucketSize; i++) {
				printf("%d ", items[bucket[i]]);
			}
			printf("\n");
			count++;
			pri_total = current_total;
		}

		return;
	}

	lastIndex = bucketSize - k - 1;

	if (k == bucketSize) {
		smallest = 0;
	}
	else {
		smallest = bucket[lastIndex] + 1;
	}

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		pick(items, itemSize, bucket, bucketSize, k - 1);
	}
}

int main(void) {
	int n, m, i;
	int* items, * bucket;

	scanf("%d %d", &n, &m);
	items = (int*)malloc(sizeof(int) * n);
	bucket = (int*)malloc(sizeof(int) * m);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &items[i]);
	}

	pick(items, n, bucket, m, m);
	printf("%d\n", count);

	free(items);
	free(bucket);
}