#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int nowSum = 0, preSum = 0;
int count = 0;

void pick(int* items, int itemSize, int* bucket, int bucketSize, int k) {
	int i, lastIndex, smallest, item;

	if (k == 0) {
		nowSum = 0;
		for (i = 0; i < bucketSize; i++) {
			nowSum += items[bucket[i]];
		}
		if (nowSum > preSum) {
			count++;
			for (i = 0; i < bucketSize; i++) {
				printf("%d ", items[bucket[i]]);
			}
			printf("\n");
		}
		preSum = nowSum;

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
	int i, j;
	int pN, gN;
	int* items, *bucket;

	scanf("%d %d", &pN, &gN); // 지원자 수 입력

	items = (int*)malloc(sizeof(int) * pN);
	bucket = (int*)malloc(sizeof(int) * gN);

	for (i = 0; i < pN; i++) { // 지원자들 입력
		scanf("%d", &items[i]);
	}

	pick(items, pN, bucket, gN, gN);
	printf("%d\n", count);

	free(items);
	free(bucket);
}