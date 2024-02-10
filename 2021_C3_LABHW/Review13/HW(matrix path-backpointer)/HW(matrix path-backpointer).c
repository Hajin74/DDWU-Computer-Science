#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int matrixpath_memo(int** m, int r, int c, int i, int j, int** M, int** bp) {
	int a, b;

	if (i == 0 && j == 0) {
		M[i][j] = 0;
		bp[i][j] = 0; // 시작점

		return m[i][j];
	}
	else if (i == 0) {
		if (M[i][j - 1] == 0) {
			M[i][j - 1] = matrixpath_memo(m, r, c, i, j - 1, M, bp);
		}
		bp[i][j] = 1;

		return M[i][j - 1] + m[i][j];
	}
	else if (j == 0) {
		if (M[i - 1][j] == 0) {
			M[i - 1][j] = matrixpath_memo(m, r, c, i - 1, j, M, bp);
		}
		bp[i][j] = 2;

		return M[i - 1][j] + m[i][j];
	}
	else {
		a = matrixpath_memo(m, r, c, i - 1, j, M, bp);
		M[i - 1][j] = a;
		b = matrixpath_memo(m, r, c, i, j - 1, M, bp);
		M[i][j - 1] = b;

		if (a <= b) {
			bp[i][j] = 2;
			return a + m[i][j];
		}
		else {
			bp[i][j] = 1;
			return b + m[i][j];
		}
	}

}

void findShortestMath(int r, int c, int i, int j, int** bp) {
	if (bp[i][j] == 0) {
		printf("<%d %d> ", i, j);
	}
	
	if (bp[i][j] == 1) {
		findShortestMath(r, c, i, j - 1, bp);
		printf("<%d %d> ", i, j);
	}
	else if (bp[i][j] == 2) {
		findShortestMath(r, c, i - 1, j, bp);
		printf("<%d %d> ", i, j);
	}

	return;
}

int main(void) {
	int** board, ** memo, ** backpointer;
	int i, j, r, c;

	r = c = 4;

	board = (int**)malloc(sizeof(int*) * r);
	memo = (int**)malloc(sizeof(int*) * r);
	backpointer = (int**)malloc(sizeof(int*) * r);
	for (i = 0; i < r; i++) {
		board[i] = (int*)malloc(sizeof(int) * c);
		memo[i] = (int*)malloc(sizeof(int) * c);
		backpointer[i] = (int*)malloc(sizeof(int) * c);
	}

	printf("보드판을 입력하세요\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &board[i][j]);
			memo[i][j] = 0;
			backpointer[i][j] = 0;
		}
	}

	printf("%d\n", matrixpath_memo(board, r, c, 3, 3, memo, backpointer));

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%d ", memo[i][j]);
		}
		printf("\n");
	}

	printf("\n최소점들을 더한 판\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%d ", memo[i][j]);
		}
		printf("\n");
	}

	printf("\n길\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%d ", backpointer[i][j]);
		}
		printf("\n");
	}

	printf("\n길ㅋㅋㅋ\n");
	findShortestMath(3, 3, 3, 3, backpointer);

	for (i = 0; i < r; i++) {
		free(board[i]);
		free(memo[i]);
		free(backpointer[i]);
	}
	free(board);
	free(memo);
	free(backpointer);
}