#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(int* item, int itemSize, int* bucket, int bucketSize, int k, int money) {
	int i, lastIndex, smallest;
	int sum = 0;

	lastIndex = bucketSize - k - 1;

	for (i = 0; i <= lastIndex; i++) {
		sum += item[bucket[i]];
	}

	if (sum == money) {
		for (i = 0; i <= lastIndex; i++) {
			printf("%d ", item[bucket[i]]);
		}
		printf("\n");
		return;
	}

	if (sum > money)
		return;

	if (k == bucketSize)
		smallest = 0;
	else
		smallest = bucket[lastIndex];

	for (i = smallest; i < itemSize; i++) {
		bucket[lastIndex + 1] = i;
		pick(item, itemSize, bucket, bucketSize, k - 1, money);
	}

	return;
}

int main(void) {
	int item[] = { 1000, 5000, 10000 };
	int* bucket;
	int money;
	int n;

	scanf("%d", &money);
	n = money / 1000;
	bucket = (int*)malloc(sizeof(int) * n);

	pick(item, 3, bucket, n, n, money);
}