#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(int items[], int itemSize, int *bucket, int bucketSize, int k) {
	int i, lastIndex, smallest, item, sum;

	if (k == 0) {
		sum = 0;
		for (i = 0; i < bucketSize; i++) {
			if (items[bucket[i]] == 1)
				printf("+");

			sum += items[bucket[i]] * (i + 1);
			printf("%d", items[bucket[i]] * (i + 1));
		}
		printf("=%d\n", sum);

		return;
	}

	lastIndex = bucketSize - k - 1;
	smallest = 0;

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		pick(items, itemSize, bucket, bucketSize, k - 1);
		
	}
}

int main(void) {
	int bucketSize;
	int* bucket;
	int items[] = { 1, -1 };

	scanf("%d", &bucketSize);
	bucket = (int*)malloc(sizeof(int) * bucketSize);

	pick(items, 2, bucket, bucketSize, bucketSize);

	free(bucket);
}