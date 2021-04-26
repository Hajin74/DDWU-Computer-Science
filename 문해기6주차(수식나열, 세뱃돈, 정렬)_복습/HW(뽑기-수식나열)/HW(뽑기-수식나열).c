#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(int items[], int itemSize, int* bucket, int bucketSize, int toPick) {
	int i, lastIndex, smallest, item, total;

	if (toPick == 0) {
		total = 0;
		for (i = 0; i < bucketSize; i++) {
			if (bucket[i] == 0) 
				printf("+%d", (i + 1));
			else 
				printf("-%d", (i + 1));

			total += items[bucket[i]] * (i + 1);
		}
		printf(" = %d\n", total);

		return;
	}

	lastIndex = bucketSize - toPick - 1;
	smallest = 0;

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		pick(items, itemSize, bucket, bucketSize, toPick - 1);
	}
}


int main(void) {
	int items[] = { 1, -1 };
	int* bucket;
	int num;

	printf("ют╥б: ");
	scanf("%d", &num);

	bucket = (int*)malloc(sizeof(int) * num);

	pick(items, 2, bucket, num, num);

	free(bucket);
}