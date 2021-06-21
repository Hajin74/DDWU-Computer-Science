#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int matrixPath_memo(int** m, int r, int c, int i, int j, int** M, int **bp) {
	int a, b;

	if (i == 0 && j == 0) {
		bp[i][j] = -1;
		return m[i][j];
	}
	else if (i == 0) {
		if (M[i][j - 1] == 0) {
			M[i][j - 1] = matrixPath_memo(m, r, c, i, j - 1, M, bp);
		}
		bp[i][j] = 1;
		
		return M[i][j - 1] + m[i][j];
	}
	else if (j == 0) {
		if (M[i - 1][j] == 0) {
			M[i - 1][j] = matrixPath_memo(m, r, c, i - 1, j, M, bp);
		}
		bp[i][j] = 2;

		return M[i - 1][j] + m[i][j];
	}
	else {
		a = matrixPath_memo(m, r, c, i, j - 1, M, bp);
		M[i][j - 1] = a;
		b = matrixPath_memo(m, r, c, i - 1, j, M, bp);
		M[i - 1][j] = b;

		if (a <= b) {
			bp[i][j] = 1;

			return a + m[i][j];
		}
		else {
			bp[i][j] = 2;

			return b + m[i][j];
		}
	}
}

void findShortestMath(int i, int j, int** bp) {
	if (bp[i][j] == -1) {
		printf("<%d %d> ", i, j);

		return;
	}
	else if (bp[i][j] == 1) {
		findShortestMath(i, j - 1, bp);
		printf("<%d %d> ", i, j);

		return;
	}
	else if (bp[i][j] == 2) {
		findShortestMath(i - 1, j, bp);
		printf("<%d %d> ", i, j);

		return;
	}
}

int main(void) {
	int** m, ** M, **bp; // m 보드판 / M 메모 / bp 길, 1 = left, 2 = up, -1 = start
	int i, j, r, c;

	scanf("%d %d", &r, &c);

	m = (int**)malloc(sizeof(int*) * r);
	M = (int**)malloc(sizeof(int*) * r);
	bp = (int**)malloc(sizeof(int*) * r);
	for (i = 0; i < r; i++) {
		m[i] = (int*)malloc(sizeof(int) * c);
		M[i] = (int*)malloc(sizeof(int) * c);
		bp[i] = (int*)malloc(sizeof(int) * c);
	}

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &m[i][j]); // 보드판 입력
			M[i][j] = 0; // 메모 초기화
			bp[i][j] = 0;
		}
	}

	printf("%d\n", matrixPath_memo(m, r, c, r - 1, c - 1, M, bp));

	// Memo보기
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// bp보기
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%d ", bp[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	findShortestMath(r - 1, c - 1, bp);
}