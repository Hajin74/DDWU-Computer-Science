#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int num = 0;

void pick(int* item, int itemSize, int* bucket, int bucketSize, int k, int money) {
	int i, lastIndex, smallest;
	int sum = 0;

	lastIndex = bucketSize - k - 1;

	for (i = 0; i <= lastIndex; i++) {
		sum += item[bucket[i]];
	}

	if (sum == money) {
		/*
		for (i = 0; i <= lastIndex; i++) {
			printf("%d ", item[bucket[i]]);
		}
		printf("\n");
		*/
		num++;
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
	int item[] = { 10, 50, 100, 500 };
	int* bucket;
	int money;
	int n;

	scanf("%d", &money);
	n = money / 10;
	bucket = (int*)malloc(sizeof(int) * n);

	pick(item, 4, bucket, n, n, money);
	printf("%d", num);
}