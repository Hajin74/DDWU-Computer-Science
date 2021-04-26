#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(int *item, int itemSize, int *bucket, int bucketSize, int k) {
	int i, lastIndex, smallest;
	int total = 0;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++) {
			if (bucket[i] == 1) {
				printf("+");
				total += (i + 1);
			}
			else {
				printf("-");
				total += -1 * (i + 1);
			}
			printf("%d", i + 1);
		}
		printf(" = %d\n", total);

		return;
	}

	lastIndex = bucketSize - k - 1;

	smallest = 0;

	for (i = smallest; i < itemSize; i++) {
		bucket[lastIndex + 1] = item[i];
		pick(item, itemSize, bucket, bucketSize, k - 1);
	}
}

int main(void) {
	int item[] = { 1, -1 };
	int* bucket;
	int num;

	scanf("%d", &num);

	bucket = (int*)malloc(sizeof(int) * num);

	pick(item, 2, bucket, num, num);
}
