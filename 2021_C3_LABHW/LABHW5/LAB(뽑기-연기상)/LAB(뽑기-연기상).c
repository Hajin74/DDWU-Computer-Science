#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(int n, int *bucket, int bucketSize, int k) {
	int i, lastIndex, smallest, item;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++) {
			if (bucket[i] == 0)
				printf("%10s ", "����");
			else if (bucket[i] == 1)
				printf("%10s ", "�����");
			else if (bucket[i] == 2)
				printf("%10s ", "���߱�");
			else if (bucket[i] == 3)
				printf("%10s ", "����");
			else
				printf("%10s ", "����");
		}
		printf("\n");
		return;
	}

	lastIndex = bucketSize - k - 1;
	smallest = 0;

	for (item = smallest; item < n; item++) {
		int chosen = 0;

		for (i = 0; i <= lastIndex; i++) {
			if (bucket[i] == item) {
				chosen = 1;
				break;
			}
		}

		if (chosen == 0) {
			bucket[lastIndex + 1] = item;
			pick(n, bucket, bucketSize, k - 1);
		}
	}
}

int main(void) {
	int i;
	int num;
	int* bucket;

	printf("���� ������? ");
	scanf("%d", &num);

	bucket = malloc(sizeof(int) * num);

	for (i = 1; i <= num; i++)
		printf("%9s %d", "��", i);
	printf("\n");

	pick(5, bucket, num, num);
}