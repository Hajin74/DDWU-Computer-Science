#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int count = 0;
int pri_total = 0, current_total = 0;
int selected, unselected;

void pick(int* items, int itemSize, int* bucket, int bucketSize, int k) {
	int i, j, lastIndex, smallest, item, chosen;

	if (k == 0) {
		current_total = 0;
		for (i = 0; i < bucketSize; i++) {
			current_total = current_total * 10 + items[bucket[i]];
		}

		for (i = 0; i < itemSize; i++) {
			selected = 0;
			for (j = 0; j < bucketSize; j++) {
				if (i == bucket[j]) {
					selected = 1;
				}
			}

			if (selected == 0) {
				unselected = i;
			}
		}

		if (current_total > pri_total) {
			/*
			for (i = 0; i < bucketSize; i++) {
				printf("%d ", items[bucket[i]]);
			}
			printf("\n");
			printf("ÇÕ:%d\n", current_total);
			printf("¾È»ÌÈù°Å: %d\n", items[unselected]);
			*/
			
			if (current_total % items[unselected] == 0) {
				//printf("³ª´²Áü:%d\n", current_total);
				count++;
			}
			pri_total = current_total;
		}

		return;
	}

	lastIndex = bucketSize - k - 1;

	smallest = 0;

	for (item = smallest; item < itemSize; item++) {
		chosen = 0;
		for (i = 0; i <= lastIndex; i++) {
			if (bucket[i] == item) {
				chosen = 1;
				break;
			}
		}

		if (chosen == 0) {
			bucket[lastIndex + 1] = item;
			pick(items, itemSize, bucket, bucketSize, k - 1);
		}
	}
}

int main(void) {
	int i, n;
	int* items, * bucket;

	scanf("%d", &n);

	items = (int*)malloc(sizeof(int) * n);
	bucket = (int*)malloc(sizeof(int) * (n - 1));

	for (i = 0; i < n; i++) {
		scanf("%d", &items[i]);
	}

	pick(items, n, bucket, n - 1, n - 1);
	printf("%d\n", count);

	free(items);
	free(bucket);
}