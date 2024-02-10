#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int found = 0;

void pick(int *items, int itemSize, int *bucket, int bucketSize, int k, int num) {
	int i, lastIndex, smallest, item, sum;

	if (k == 0) { // �� ���� num�� ��ġ�ϴ� ���� �ִ��� �˻�
		sum = 0;
		for (i = 0; i < bucketSize; i++) {
			sum += (items[bucket[i]] * (i + 1));
		}

		if (sum == num) { // ���ϴ� ������ ã���� �����Ͽ� ���
			found = 1;
			for (i = 0; i < bucketSize; i++) {
				if (items[bucket[i]] == 1) { // +
					printf("+%d ", items[bucket[i]] * (i + 1));
				}
				else { // -
					printf("%d ", items[bucket[i]] * (i + 1));
				}
			}
			printf("\n");
		}

		return;
	}

	lastIndex = bucketSize - k - 1;
	smallest = 0;

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		pick(items, itemSize, bucket, bucketSize, k - 1, num);
	}
}

int main(void) {
	int i, n, count = 1;
	int items[] = { +1, -1 };
	int* bucket;

	scanf("%d", &n);
	bucket = (int*)malloc(sizeof(int) * n);

	while (found == 0) { // �ִ� 1 ~ n������ ũ���� �迭�� �̾ƺ�
		pick(items, 2, bucket, count, count, n);
		count++;
	}

	free(bucket);
}