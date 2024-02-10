#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int distance = 10000000000;

void makeTeam(int *items, int itemSize, int *bucket, int bucketSize, int k, int totalSum) {
	int i, lastIndex, smallest, item, selectedSum = 0, unSelectedSum = 0;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++) {
			selectedSum += items[bucket[i]];
		}
		unSelectedSum = totalSum - selectedSum;

		if (selectedSum > unSelectedSum) {
			if (selectedSum - unSelectedSum < distance) {
				distance = selectedSum - unSelectedSum;
			}
		}
		else {
			if (unSelectedSum - selectedSum < distance) {
				distance = unSelectedSum - selectedSum;
			}
		}

		return;
	}

	lastIndex = bucketSize - k - 1;

	if (k == bucketSize) {
		smallest = 0;
	}
	else {
		smallest = bucket[lastIndex] + 1;
	}

	for (item = smallest; item < itemSize; item++) {
		bucket[lastIndex + 1] = item;
		makeTeam(items, itemSize, bucket, bucketSize, k - 1, totalSum);
	}	
}

int main(void) {
	int num, sum = 0, i;
	int* skillPoint, *bucket;

	scanf("%d", &num);

	// ���� �ɷ�ġ �Է¹ޱ� & bucket ������ ���ϱ�
	skillPoint = (int*)malloc(sizeof(int) * num);
	bucket = (int*)malloc(sizeof(int) * (num / 2));
	for (i = 0; i < num; i++) {
		scanf("%d", &skillPoint[i]);
		sum += skillPoint[i];
	}

	// �� �����ϱ�
	makeTeam(skillPoint, num, bucket, num / 2, num / 2, sum);

	// �ɷ�ġ ���� �ּڰ�
	printf("%d\n", distance);

	// �迭 ��ȯ
	free(skillPoint);
	free(bucket);
}