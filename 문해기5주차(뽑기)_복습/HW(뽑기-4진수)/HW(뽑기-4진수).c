#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(int itemSize, int* bucket, int bucketSize, int toPick) {
	int i, smallest, lastIndex, item;

	if (toPick == 0) {
		for (i = 0; i < bucketSize; i++)
			printf("%d ", bucket[i]);
		printf("\n");

		return;
	}

	lastIndex = bucketSize - toPick - 1;
	smallest = 0;

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		pick(itemSize, bucket, bucketSize, toPick - 1);
	}
}

int main(void) {
	int* bucket, num;

	printf("ют╥б: ");
	scanf("%d", &num);

	bucket = (int*)malloc(sizeof(int) * num);

	pick(4, bucket, num, num);

	free(bucket);
}