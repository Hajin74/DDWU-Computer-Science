#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int count = 0;

void pick(int key, int *items, int itemSize, int *bucket, int bucketSize, int k) {
	int i, lastIndex, smallest;
	int total = 0;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++) {
			if (bucket[i] == 1) {
				//printf("+");
				total += (i + 1);
			}
			else {
				//printf("-");
				total += -1 * (i + 1);
			}
			//printf("%d", i + 1);
		}
		//printf(" = %d\n", total);

		if (total == key)
			count++;

		return;
	}

	lastIndex = bucketSize - k - 1;

	smallest = 0;

	for (i = smallest; i < itemSize; i++) {
		bucket[lastIndex + 1] = items[i];
		pick(key, items, itemSize, bucket, bucketSize, k - 1);
	}
}

int main(void) {
	int i, n;
	int* bucket;
	int items[] = { 1, -1 };

	scanf("%d", &n);
	

	for (i = 1; i <= n; i++) {
		bucket = (int*)malloc(sizeof(int) * i);
		pick(n, items, 2, bucket, i, i);
		free(bucket);
	}
	printf("%d\n", count);
}