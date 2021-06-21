#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int count = 0;

void pick(int items[], int itemSize, int* bucket, int bucketSize, int k) {
	int i, j, lastIndex, smallest, item;
	int chosen = 0;
	int unChosenNum;
	int total = 0;

	if (k == 0) {
		for (i = 0; i < itemSize; i++) {
			chosen = 0;
			for (j = 0; j < bucketSize; j++) {
				if (items[i] == items[bucket[j]])
					chosen = 1;
			}

			if (chosen == 0) {
				unChosenNum = items[i];
			}
		}

		total = 0;
		for (i = 0; i < bucketSize; i++) {
			total = total * 10 + items[bucket[i]];
		}

		if (total % unChosenNum == 0) {
			count++;

			return;
		}

		return;
	}

	lastIndex = bucketSize - k - 1;

	smallest = 0;

	for (item = smallest; item < itemSize; item++) {
		chosen = 0;
		for (i = 0; i <= lastIndex; i++) { // 현재까지 집어넣은 item들을 검사해서 뽑혔는지 안뽑혔는지 검사
			if (bucket[i] == item)
				chosen = 1;
		}

		if (chosen == 0) { // 안 뽑힌 item만 bucket에 집어넣음
			bucket[lastIndex + 1] = item;
			pick(items, itemSize, bucket, bucketSize, k - 1);
		}
	}
}

int main(void) {
	int i, n;
	int* items;
	int* bucket;

	scanf("%d", &n);
	items = (int*)malloc(sizeof(int) * n);
	bucket = (int*)malloc(sizeof(int) * (n - 1));

	for (i = 0; i < n; i++) {
		scanf("%d", &items[i]);
	}

	pick(items, n, bucket, n - 1, n - 1);
	printf("%d", count);

	free(items);
	free(bucket);
}