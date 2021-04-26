#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(char items[][10], int itemSize, int* bucket, int bucketSize, int k) {
	int i, smallest, lastIndex, item;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++)
			printf("%s ", items[bucket[i]]);
		printf("\n");

		return;
	}

	lastIndex = bucketSize - k - 1;

	if (k == bucketSize)
		smallest = 0;
	else
		smallest = bucket[lastIndex] + 1;

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		pick(items, itemSize, bucket, bucketSize, k - 1);
	}
}

int main(void) {
	char items[][10] = {"공유", "김수현", "송중기", "지성", "현빈"};
	int *bucket;
	int num;

	printf("인기상 몇 명? ");
	scanf("%d", &num);

	bucket = (int*)malloc(sizeof(int) * num);

	pick(items, 5, bucket, num, num);

	free(bucket);
}