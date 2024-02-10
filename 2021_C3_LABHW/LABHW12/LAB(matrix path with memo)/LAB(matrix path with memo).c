#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int matrixPath_memo(int** m, int r, int c, int i, int j, int** M) {
	int a, b;

	if (i == 0 && j == 0) {
		return m[0][0];
	}
	else if (i == 0) {
		if (M[i][j - 1] == 0) {
			M[i][j - 1] = matrixPath_memo(m, r, c, i, j - 1, M);
		}

		return M[i][j - 1] + m[i][j];
	}
	else if (j == 0) {
		if (M[i - 1][j] == 0) {
			M[i - 1][j] = matrixPath_memo(m, r, c, i - 1, j, M);
		}

		return M[i - 1][j] + m[i][j];
	}
	else {
		a = matrixPath_memo(m, r, c, i - 1, j, M);
		b = matrixPath_memo(m, r, c, i, j - 1, M);

		return ((a < b) ? a : b) + m[i][j];
	}
}

int main(void) {
	int** m, ** M; // m 보드판 / M 메모
	int i, j, r, c;

	scanf("%d %d", &r, &c);

	m = (int**)malloc(sizeof(int*) * r);
	M = (int**)malloc(sizeof(int*) * r);
	for (i = 0; i < r; i++) {
		m[i] = (int*)malloc(sizeof(int) * c);
		M[i] = (int*)malloc(sizeof(int) * c);
	}

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &m[i][j]); // 보드판 입력
			M[i][j] = 0; // 메모 초기화
		}
	}

	printf("%d\n", matrixPath_memo(m, r, c, r - 1, c - 1, M));
}