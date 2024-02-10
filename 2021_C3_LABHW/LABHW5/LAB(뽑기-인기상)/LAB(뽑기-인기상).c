#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void pick(int n, int *bucket, int bucketSize, int k) {
	int i, lastIndex, smallest, item;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++) {
			if (bucket[i] == 0)
				printf("%10s ", "공유");
			else if (bucket[i] == 1)
				printf("%10s ", "김수현");
			else if (bucket[i] == 2)
				printf("%10s ", "송중기");
			else if (bucket[i] == 3)
				printf("%10s ", "지성");
			else
				printf("%10s ", "현빈");
		}
		printf("\n");
		return ;
	}

	lastIndex = bucketSize - k - 1;

	if (k == bucketSize)
		smallest = 0;
	else
		smallest = bucket[lastIndex] + 1;

	for (item = smallest; item < n; item++) {
		bucket[lastIndex + 1] = item;
		pick(n, bucket, bucketSize, k - 1);
	}
}

int main(void) {
	int n = 5;
	int num;
	int *bucket;

	printf("인기상 몇 명? : ");
	scanf("%d", &num);
	
	bucket = malloc(sizeof(int) * num);

	pick(n, bucket, num, num);
}