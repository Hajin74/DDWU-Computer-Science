#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pick(int itemSize, int* bucket, int bucketSize, int k) {
	int i, lastIndex, smallest, item;
	int chosen;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++)
			printf("%d ", bucket[i]);
		printf("\n");

		return;
	}

	lastIndex = bucketSize - k - 1;
	smallest = 0;

	for (item = smallest; item < itemSize; item++) {
		chosen = 0;
		for (i = 0; i <= lastIndex; i++) { // 현재까지 집어넣은 item들을 검사해서 뽑혔는지 안뽑혔는지 검사
			if (bucket[i] == item)
				chosen = 1;
		}

		if (chosen == 0) { // 안 뽑힌 item만 bucket에 집어넣음
			bucket[lastIndex + 1] = item;
			pick(itemSize, bucket, bucketSize, k - 1);
		}
	}
}

int main(void) {
	int n = 5;
	int bucket[3];

	pick(n, bucket, 3, 3);
}