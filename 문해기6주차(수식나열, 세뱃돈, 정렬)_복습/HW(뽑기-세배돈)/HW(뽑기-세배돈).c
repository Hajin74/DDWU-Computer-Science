#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(int money, int items[], int itemSize, int* bucket, int bucketSize, int toPick) {
	int i, lastIndex, smallest, item, total = 0;

	lastIndex = bucketSize - toPick - 1;

	for (i = 0; i <= lastIndex; i++)
		total += items[bucket[i]];

	if (total == money) {
		for (i = 0; i <= lastIndex; i++)
			printf("%d ", items[bucket[i]]);
		printf("\n");

		return;
	}

	if (total > money)
		return;

	if (toPick == bucketSize) 
		smallest = 0;
	else
		smallest = bucket[lastIndex];

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		pick(money, items, itemSize, bucket, bucketSize, toPick - 1);
	}
}

int main(void) {
	int items[] = { 1000, 5000, 10000 };
	int* bucket;
	int money, num;

	printf("ют╥б: ");
	scanf("%d", &money);

	num = money / 1000;
	bucket = (int*)malloc(sizeof(int) * num);

	pick(money, items, 3, bucket, num, num);

	free(bucket);
}