#pragma warning(disable: 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int num = 0;

void pick(int n, int *picked, int m, int toPick) {
	int smallest, lastIndex, i;

	if (toPick == 0) { // ������ ������ ���
		//num++;
		for (i = 0; i < m; i++)
			printf("%d ", picked[i]);
		printf("\n");

		return; // �߿�
	}

	lastIndex = m - toPick - 1;

	if (toPick == m)
		smallest = 0;
	else
		smallest = picked[lastIndex] + 1;

	for (i = smallest; i < n; i++) {
		picked[lastIndex + 1] = i; // ���� ���� �� ���
		pick(n, picked, m, toPick - 1); // ������ �̾ƾ� �� �� ���ȣ��
	}

	//return;
}

int main(void) {
	int picked[4];
	
	pick(7, picked, 4, 4);
	//printf("%d\n", num);
}