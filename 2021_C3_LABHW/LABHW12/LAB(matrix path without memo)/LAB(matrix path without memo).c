#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int matrixPath(int** m, int r, int c, int i, int j) {
	int a, b;
	
	if (i == 0 && j == 0) {
		return m[i][j];
	}
	// i == 0 || j == 0 �̸� �ִܰŸ� ��찡 �ϳ� �ۿ� ����
	else if (i == 0) {
		return matrixPath(m, r, c, 0, j - 1) + m[i][j];
	}
	else if (j == 0) {
		return matrixPath(m, r, c, i - 1, 0) + m[i][j];
	}
	else {
		a = matrixPath(m, r, c, i - 1, j);
		b = matrixPath(m, r, c, i, j - 1);

		// �� ���� ���� ������
		return ((a < b) ? a : b) + m[i][j];
	}
}

int main(void) {
	int** m; // ��
	int i, j, r, c;

	scanf("%d %d", &r, &c);

	m = (int**)malloc(sizeof(int) * c);
	for (i = 0; i < r; i++) {
		m[i] = (int*)malloc(sizeof(int) * c);
	}

	// ������ �Է�
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &m[i][j]);
		}
	}

	printf("%d\n", matrixPath(m, r, c, r - 1, c - 1));
}