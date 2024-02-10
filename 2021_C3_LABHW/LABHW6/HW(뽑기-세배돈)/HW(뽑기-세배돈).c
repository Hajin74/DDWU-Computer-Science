#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pick(int money, int n, int *items, int *bucket, int bucketSize, int k) {
	int i, j, lastIndex, smallest, item;
	int sum;

	if (k == 0) {
		sum = 0;
		for (i = 0; i < bucketSize; i++) {
			sum += (bucket[i] * items[i]);
		}

		if (sum == money) {
			for (i = 0; i < bucketSize; i++) {
				for (j = 0; j < bucket[i]; j++) {
					printf("%d ", items[i]);
				}
			}
			printf("\n");
			return;
		}
		return;
	}

	lastIndex = bucketSize - k - 1;

	smallest = 0;

	for (item = smallest; item <= n; item++) {
		bucket[lastIndex + 1] = item;
		pick(money, n, items, bucket, bucketSize, k - 1);
	}
}

int main(void) {
	int n ;
	int money;
	int items[3] = { 10000, 5000, 1000 };
	int bucket[3];

	scanf("%d", &money);

	n = money / 1000;

	pick(money, n, items, bucket, 3, 3);
}