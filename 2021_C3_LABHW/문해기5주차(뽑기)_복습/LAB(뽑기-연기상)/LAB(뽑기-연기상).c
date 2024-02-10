#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int count = 0;

void pick(char items[][10], int itemSize, int* picked, int pickSize, int toPick) {
	int i, lastIndex, smallest, item;
	int chosen;

	if (toPick == 0) {
		count++;
		for (i = 0; i < pickSize; i++)
			printf("%s ", items[picked[i]]);
		printf("\n");

		return;
	}

	lastIndex = pickSize - toPick - 1;

	smallest = 0;

	for (item = smallest; item < itemSize; item++) {
		chosen = 0;
		for (i = 0; i <= lastIndex; i++) {
			if (item == picked[i])
				chosen = 1;
		}
		
		if (chosen == 0) {
			picked[lastIndex + 1] = item;
			pick(items, itemSize, picked, pickSize, toPick - 1);
		}
	}
}

int main(void) {
	char items[][10] = { "공유", "김수현", "송중기", "지성", "현빈" };
	int* picked;
	int num;

	printf("상의 종류는? ");
	scanf("%d", &num);

	picked = (int*)malloc(sizeof(int) * num);

	pick(items, 5, picked, num, num);
	printf("경우의 수 : %d\n", count);

	free(picked);
}