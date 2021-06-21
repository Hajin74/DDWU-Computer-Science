#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int flag = 0;

void pick(int items[], int itemSize, int *bucket, int bucketSize, int k, int num) {
	int i, lastIndex, smallest, item;
	int total;

	if (k == 0) {
		total = 0;

		for (i = 0; i < bucketSize; i++)
			total += items[bucket[i]] * (i + 1);

		if (total == num) {
			if (flag == 0) {
				flag = 1;
				for (i = 0; i < bucketSize; i++) {
					if (bucket[i] == 0)
						printf("+");
					else if (bucket[i] == 1)
						printf("-");
					printf("%d", i + 1);
				}
				printf("\n");
			}
		}

		return;
	}

	lastIndex = bucketSize - k - 1;
	smallest = 0;

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		if (flag == 0)
			pick(items, itemSize, bucket, bucketSize, k - 1, num);
	}
}

int main(void) {
	int i, count = 1;
	int n;
	int items[] = { 1, -1 };
	int* bucket;

	scanf("%d", &n);

	while (flag == 0) {
		bucket = (int*)malloc(sizeof(int) * count);
		pick(items, 2, bucket, count, count, n);
		count++;

		free(bucket);
		//break;
	}

	return 0;
}