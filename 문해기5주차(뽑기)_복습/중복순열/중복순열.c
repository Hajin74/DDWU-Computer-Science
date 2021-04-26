#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pick(int itemSize, int* bucket, int bucketSize, int k) {
	int i, lastIndex, smallest, item;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++)
			printf("%d ", bucket[i]);
		printf("\n");

		return; // 반환을 꼭 해줘서 무한호출을 막음
	}

	lastIndex = bucketSize - k - 1;
	smallest = 0;

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		pick(itemSize, bucket, bucketSize, k - 1);
	}
}

int main(void) {
	int n = 5;
	int bucket[3];

	pick(n, bucket, 3, 3);
}