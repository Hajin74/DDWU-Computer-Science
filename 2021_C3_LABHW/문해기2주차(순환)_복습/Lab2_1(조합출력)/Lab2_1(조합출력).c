#pragma warning(disable: 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pick(int n, int size, int* picked, int toPick) {
	int smallest, lastIndex, i;

	if (toPick == 0) {
		for (i = 0; i < size; i++)
			printf("%d ", picked[i]);
		printf("\n");

		return;
	}

	lastIndex = size - toPick - 1;

	if (toPick == size) // 한 번도 안 뽑았다면 0부터 시작
		smallest = 0;
	else // 한 번이상 뽑았다면 lastIndex에 수보다 하나라도 큰 수여야 함
		smallest = picked[lastIndex] + 1;

	for (i = smallest; i < n; i++) {
		picked[lastIndex + 1] = i;
		pick(n, size, picked, toPick - 1);
	}
}

int main(void) {
	int picked[4];

	pick(7, 4, picked, 4);
}