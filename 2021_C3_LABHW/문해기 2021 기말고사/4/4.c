#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int count = 0;

void pick(int* items, int itemSize, int* bucket, int bucketSize, int k, int key) {
	int i, lastIndex, smallest, item, sum;

	lastIndex = bucketSize - k - 1;
	sum = 0;

	for (i = 0; i <= lastIndex; i++) {
		sum += items[bucket[i]];
	}

	if (key == sum) {
		for (i = 0; i <= lastIndex; i++) {
			printf("%d ", items[bucket[i]]);
		}
		printf("\n");
		count++;

		return;
	}

	if (sum > key)
		return;

	if (k == bucketSize)
		smallest = 0;
	else
		smallest = bucket[lastIndex];

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		pick(items, itemSize, bucket, bucketSize, k - 1, key);
	}
}

int main(void) {
	int i, n;
	int items[] = { 1, 2 }, itemSize = 2;
	int* bucket, bucketSize;

	scanf("%d", &n);
	bucket = (int*)malloc(sizeof(int) * n); // 모조리 1로 뽑는 최대길이
	bucketSize = n; // 최대길이

	pick(items, itemSize, bucket, bucketSize, bucketSize, n);
	printf("%d\n", count);

	free(bucket);
}