#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(int n, int* bucket, int bucketSize, int k) {
	int i, lastIndex, smallest, item;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++)
			printf("%d", bucket[i]);
		printf("\n");
		return;
	}

	lastIndex = bucketSize - k - 1;
	smallest = 0;

	for (item = smallest; item < n; item++) {
		bucket[lastIndex + 1] = item;
		pick(n, bucket, bucketSize, k - 1);
	}
}

int main(void) {
	int num;
	int* bucket;

	printf("ют╥б: ");
	scanf_s("%d", &num);

	bucket = malloc(sizeof(int) * num);

	pick(4, bucket, num, num);
}