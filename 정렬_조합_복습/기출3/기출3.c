#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int count = 0;

void pick(int key, int items[], int itemSize, int* bucket, int bucketSize, int k) {
	int i, lastIndex, smallest, item;
	int total;

	if (k == 0) {
		total = 0;
		for (i = 0; i < bucketSize; i++) {
			/*
			if (bucket[i] == 0)
				printf("+%d", (i + 1));
			else if (bucket[i] == 1)
				printf("-%d", (i + 1));
			*/
			
			total += items[bucket[i]] * (i + 1);
		}
		//printf(" = %d\n", total);

		if (total == key)
			count++;

		return;
	}

	lastIndex = bucketSize - k - 1;

	smallest = 0;

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		pick(key, items, itemSize, bucket, bucketSize, k - 1);
	}
}

int main(void) {
	int i, n;
	int items[] = { 1, -1 };
	int* bucket;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		bucket = (int*)malloc(sizeof(int) * i);
		pick(n, items, 2, bucket, i, i);
		free(bucket);
	}

	printf("%d\n", count);

}