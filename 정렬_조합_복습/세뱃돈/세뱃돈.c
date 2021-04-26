#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(int money, int items[], int itemSize, int* bucket, int bucketSize, int k) {
	int i, lastIndex, smallest, item, total = 0;

	lastIndex = bucketSize - k - 1; 

	for (i = 0; i <= lastIndex; i++)
		total += items[bucket[i]];

	if (total == money) {
		for (i = 0; i <= lastIndex; i++)
			printf("%d ", items[bucket[i]]);
		printf("\n");

		return;
	}

	if (total > money)
		return;

	if (k == bucketSize)
		smallest = 0;
	else
		smallest = bucket[lastIndex];

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		pick(money, items, itemSize, bucket, bucketSize, k - 1);
	}
}

int main(void) {
	int items[] = { 1000, 5000, 10000 };
	int* bucket;
	int money;
	int n;

	scanf("%d", &money);
	n = money / 10;
	bucket = (int*)malloc(sizeof(int) * n);

	pick(money, items, 3, bucket, n, n);

	free(bucket);
}