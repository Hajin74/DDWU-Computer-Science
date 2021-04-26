#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(int n, int* bucket, int bucketSize, int k) {
	int i, lastIndex, smallest, item, sum = 0;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++) {
			if (bucket[i] == 0) {
				printf("+ %d ", i + 1);
				sum += i + 1;
			}
			else {
				printf("- %d ", i + 1);
				sum -= i + 1;
			}
		}
		printf("= %d\n", sum);
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
	int* bucket;
	int num;

	scanf("%d", &num);

	bucket = (int*)malloc(sizeof(int) * num);

	pick(2, bucket, num, num);
}

