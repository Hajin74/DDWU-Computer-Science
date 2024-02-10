#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(char items[][10], int itemSize, int* bucket, int bucketSize, int k) {
	int i, lastIndex, smallest, item, chosen;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++)
			printf("%10s", items[bucket[i]]);
		printf("\n");

		return;
	}

	lastIndex = bucketSize - k - 1;
	smallest = 0;

	for (item = smallest; item < itemSize; item++) {
		chosen = 0;

		for (i = 0; i <= lastIndex; i++) {
			if (item == bucket[i])
				chosen = 1;
		}

		if (chosen == 0) {
			bucket[lastIndex + 1] = item;
			pick(items, itemSize, bucket, bucketSize, k - 1);
		}
	}
}

int main(void) {
	int bucketSize;
	int* bucket;
	char items[][10] = { "공유", "김수현", "송중기", "지성", "현빈" };

	printf("상의 종류?");
	scanf("%d", &bucketSize);
	bucket = (int*)malloc(sizeof(int) * bucketSize);

	pick(items, 5, bucket, bucketSize, bucketSize);

	free(bucket);
}