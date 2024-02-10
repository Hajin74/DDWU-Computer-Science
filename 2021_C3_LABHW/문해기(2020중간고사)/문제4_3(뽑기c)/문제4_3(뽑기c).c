#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int count = 0;

void pick(int target, int* money, int moneySize, int* bucket, int bucketSize, int toPick) {
	int i, lastIndex, smallest, item, total;

	lastIndex = bucketSize - toPick - 1;
	
	total = 0;
	for (i = 0; i <= lastIndex; i++) {
		total += money[bucket[i]];
	}

	if (total >= target) {
		/*
		for (i = 0; i <= lastIndex; i++)
			printf("%d ", money[bucket[i]]);
		printf("\n");
		*/
		count++;

		//return; // ���������������ν� total�� target�� �ѱ���� ��� bucket�� ������� �� �ְ���
	}

	if (toPick == bucketSize)
		smallest = 0;
	else
		smallest = bucket[lastIndex] + 1;

	for (item = smallest; item < moneySize; item++) {
		bucket[lastIndex + 1] = item;
		pick(target, money, moneySize, bucket, bucketSize, toPick - 1);
	}

	return;
}

int main(void) {
	int i, n, m, target;
	int* money;
	int* bucket;

	scanf("%d", &n);
	money = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
		scanf("%d", &money[i]);

	scanf("%d", &target);
	m = target / money[0]; // m�� ���� �����ڸ��� ���� �ʿ��� ���
	bucket = (int*)malloc(sizeof(int) * m); 

	pick(target, money, n, bucket, m, m);
	printf("%d\n", count);

	free(money);
	free(bucket);
}