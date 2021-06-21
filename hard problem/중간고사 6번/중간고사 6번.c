#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int pick(int* items, int n, int* bucket, int m, int k, int total) {
	int lastIndex, i, j, lastSelect, ret = 0;

	if (k == 0) {
		unsigned long number = 0;
		int sum = 0;

		for (i = 0; i < m; i++) {
			sum = sum + items[bucket[i]];
			number = number * 10 + items[bucket[i]];
		}

		if (number % (total - sum) == 0) {
			printf("%ld %d\n", number, (total - sum));
			return 1;
		}
		return 0;
	}

	lastIndex = m - k - 1;
	lastSelect = 0;

	for (i = 0; i < n; i++) {
		int flag = 0;

		for (j = 0; j <= lastIndex; j++) {
			if (bucket[j] == i) {
				flag = 1;
				break;
			}
		}

		if (flag == 0) {
			if (items[i] != lastSelect) {
				lastSelect = items[i];

				bucket[lastIndex + 1] = i;
				ret = ret + pick(items, n, bucket, m, k - 1, total);
			}
		}
	}

	return ret;
}

int main(void) {
	int* items, * bucket, n, m, i, j, total;

	scanf("%d", &n);
	items = (int*)malloc(sizeof(int) * n);
	m = n - 1;
	bucket = (int*)malloc(sizeof(int) * m);

	for (i = 0; i < n; i++) {
		scanf("%d", &items[i]);
	}

	// Á¤·Ä
	for (i = 0; i < m; i++) {
		int max = items[0];
		int max_idx = 0;

		for (j = 1; j < m; j++) {
			if (max < items[j]) {
				max_idx = j;
				max = items[j];
			}
		}

		items[max_idx] = items[m - i];
		items[m - i] = max;
	}

	total = 0;
	for (i = 0; i < n; i++) {
		total = total + items[i];
	}

	printf("%d\n", pick(items, n, bucket, m, m, total));
}
