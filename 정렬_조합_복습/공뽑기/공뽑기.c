#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(char items[], int itemSize, int bucket[], int bucketSize, int toPick) {
	int i, lastIndex, smallest, item;

	if (toPick == 0) {
		for (i = 0; i < bucketSize; i++)
			printf("%c ", items[bucket[i]]);
		printf("\n");

		return;
	}

	lastIndex = bucketSize - toPick - 1;

	if (toPick == bucketSize)
		smallest = 0;
	else
		smallest = bucket[lastIndex] + 1;

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		pick(items, itemSize, bucket, bucketSize, toPick - 1);
	}
}

int main(void) {
	char items[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G' };
	int bucket[3];

	pick(items, 7, bucket, 3, 3);
}