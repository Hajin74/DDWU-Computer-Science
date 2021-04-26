#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int count = 0;

void pick(int money, int items[], int itemSize, int* bucket, int bucketSize, int toPick) {
	int i, lastIndex, smallest, item, sum;

	lastIndex = bucketSize - toPick - 1;
	
	sum = 0;
	for (i = 0; i <= lastIndex; i++)
		sum += items[bucket[i]];

	if (money == sum) {
		count++;
		/*
		for (i = 0; i <= lastIndex; i++)
			printf("%d ", items[bucket[i]]);
		printf("\n");
		*/

		return;
	}

	if (sum > money)
		return;

	if (toPick == bucketSize)
		smallest = 0;
	else
		smallest = bucket[lastIndex];

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		pick(money, items, itemSize, bucket, bucketSize, toPick - 1);
	}

	//return; // 이전에 조건들에 걸려서 무조건 return이 먼저 될 텐데 여기도 return을 넣어주는 이유가 뭘까?
}

int main(void) {
	int items[] = { 10, 50, 100, 500 };
	int* bucket;
	int money;
	int num;

	scanf("%d", &money);
	num = money / 10;
	bucket = (int*)malloc(sizeof(int) * num);
	
	pick(money, items, 4, bucket, num, num);
	printf("%d\n", count);
}