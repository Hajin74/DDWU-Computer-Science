#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int matrixPath(int** m, int r, int c, int i, int j, int **M) {
	int a, b;
	
	if (i == 0 && j == 0) {
		return m[i][j];
	}
	else if (i == 0) {
		if (M[i][j - 1] == 0) {
			M[i][j - 1] = matrixPath(m, r, c, i, j - 1, M);
		}

		return M[i][j - 1] + m[i][j];
	}
	else if (j == 0) {
		if (M[i - 1][j] == 0) {
			M[i - 1][j] = matrixPath(m, r, c, i - 1, j, M);
		}

		return M[i - 1][j] + m[i][j];
	}
	else {
		a = matrixPath(m, r, c, i - 1, j, M);
		b = matrixPath(m, r, c, i, j - 1, M);

		if (a <= b)
			return a + m[i][j];
		else
			return b + m[i][j];
	}
}

int main(void) {
	int** m, **memo;
	int i, j, r, c;

	r = c = 4;
	m = (int**)malloc(sizeof(int*) * r);
	memo = (int**)malloc(sizeof(int*) * r);
	for (i = 0; i < r; i++) {
		m[i] = (int*)malloc(sizeof(int) * c);
		memo[i] = (int*)malloc(sizeof(int) * c);
	}

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &m[i][j]);
			memo[i][j] = 0;
		}
	}

	printf("%d\n", matrixPath(m, r, c, 3, 3, memo));

	for (i = 0; i < r; i++) {
		free(m[i]);
	}
	free(m);
}