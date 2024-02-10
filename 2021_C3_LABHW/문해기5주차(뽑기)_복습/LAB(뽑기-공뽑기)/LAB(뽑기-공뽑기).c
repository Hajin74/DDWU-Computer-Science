#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int count = 0;

void pickBall(char *items, int itemSize, int *bucket, int bucketSize, int k) {
	int i, lastIndex, smallest, item;

	if (k == 0) {
		count++;
		for (i = 0; i < bucketSize; i++)
			printf("%c ", items[bucket[i]]);
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
		pickBall(items, itemSize, bucket, bucketSize, k - 1);
	}
}

int main(void) {
	char items[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G' };
	int bucket[3];

	pickBall(items, 7, bucket, 3, 3);
	printf("%d\n", count);
}