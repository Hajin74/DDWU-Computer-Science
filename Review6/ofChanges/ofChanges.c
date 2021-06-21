#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int count = 0;

void pick(int* items, int itemSize, int* bucket, int bucketSize, int k, int money) {
	int i, lastIndex, smallest, item, sum;

	lastIndex = bucketSize - k - 1;

	sum = 0;
	for (i = 0; i <= lastIndex; i++) {
		sum += items[bucket[i]];
	}

	if (sum == money) {
		count++;

		return;
	}
	
	if (sum > money) {
		return;
	}

	if (k == bucketSize)
		smallest = 0;
	else
		smallest = bucket[lastIndex];

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		pick(items, itemSize, bucket, bucketSize, k - 1, money);
	}
}

int main(void) {
	int money, result, bucketSize;
	int items[] = { 10, 50, 100, 500 };
	int* bucket;

	scanf("%d", &money);
	bucketSize = money / 10;
	bucket = (int*)malloc(sizeof(int) * bucketSize);

	pick(items, 4, bucket, bucketSize, bucketSize, money);
	printf("%d\n", count);

	free(bucket);
}