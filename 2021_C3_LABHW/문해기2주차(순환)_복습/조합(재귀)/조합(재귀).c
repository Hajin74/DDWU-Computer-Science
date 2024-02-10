#pragma warning(disable: 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int num = 0;

void pick(int n, int *picked, int m, int toPick) {
	int smallest, lastIndex, i;

	if (toPick == 0) { // 뽑을게 없으면 출력
		//num++;
		for (i = 0; i < m; i++)
			printf("%d ", picked[i]);
		printf("\n");

		return; // 중요
	}

	lastIndex = m - toPick - 1;

	if (toPick == m)
		smallest = 0;
	else
		smallest = picked[lastIndex] + 1;

	for (i = smallest; i < n; i++) {
		picked[lastIndex + 1] = i; // 가장 작은 수 담고
		pick(n, picked, m, toPick - 1); // 나머지 뽑아야 할 수 재귀호출
	}

	//return;
}

int main(void) {
	int picked[4];
	
	pick(7, picked, 4, 4);
	//printf("%d\n", num);
}