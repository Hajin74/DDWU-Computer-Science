#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int count = 0;

void pick(int items[], int itemSize, int *invest, int* bucket, int bucketSize, int k) {
	int i, lastIndex, smallest, item;
	int total = 0;

	if (k == 0) {
		total = 0;
		for (i = 0; i < bucketSize; i++) {
			total += (invest[i] * items[bucket[i]]);
		}

		if (total == 0) {
			count++;

			return;
		}
		return;
	}

	lastIndex = bucketSize - k - 1;
	smallest = 0;

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		pick(items, itemSize, invest, bucket, bucketSize, k - 1);
	}
}

int main(void)
{
	int items[] = { -1, 0, 1 };
	int* invest; // 투자금액
	int investNum; // 학생 수, 투자금액 수
	int* bucket;
	int i;

	scanf("%d", &investNum); // 학생수
	invest = (int*)malloc(sizeof(int) * investNum); 

	for (i = 0; i < investNum; i++)
		scanf("%d", &invest[i]);

	bucket = (int*)malloc(sizeof(int) * investNum);

	pick(items, 3, invest, bucket, investNum, investNum);
	printf("%d", count);
	
	free(bucket);
	free(invest);
}