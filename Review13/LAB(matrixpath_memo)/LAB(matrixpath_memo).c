#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int matrixpath_memo(int** m, int r, int c, int i, int j, int** M) {
	int a, b;

	if (i == 0 && j == 0) {
		return m[i][j];
	}
	else if (i == 0) {
		if (M[i][j - 1] == 0) {
			M[i][j - 1] = matrixpath_memo(m, r, c, i, j - 1, M);
		}
		return M[i][j - 1] + m[i][j];
	}
	else if (j == 0) {
		if (M[i - 1][j] == 0) {
			M[i - 1][j] = matrixpath_memo(m, r, c, i - 1, j, M);
		}
	}
	else {
		a = matrixpath_memo(m, r, c, i - 1, j, M);
		b = matrixpath_memo(m, r, c, i, j - 1, M);

		if (a <= b) {
			return a + m[i][j];
		}
		else {
			return b + m[i][j];
		}
	}
}

int main(void) {
	int** board, ** memo;
	int i, j, r, c;

	r = c = 4;

	board = (int**)malloc(sizeof(int*) * r);
	memo = (int**)malloc(sizeof(int*) * r);
	for (i = 0; i < r; i++) {
		board[i] = (int*)malloc(sizeof(int) * c);
		memo[i] = (int*)malloc(sizeof(int) * c);
	}

	printf("보드판을 입력하세요");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &board[i][j]);
			memo[i][j] = 0;
		}
	}

	printf("%d\n", matrixpath_memo(board, r, c, 3, 3, memo));

	for (i = 0; i < r; i++) {
		free(board[i]);
		free(memo[i]);
	}
	free(board);
	free(memo);
}