#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void readMatrix(int** a, int r, int c) {
	int i, j;

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &a[i][j]);
		}
	}
}

void printMatrix(int** x, int r, int c) {
	int i, j;

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
}

void multipleMatrix(int** x, int** a, int** b, int aRow, int aCol, int bRow, int bCol) {
	int i, j, k;

	for (i = 0; i < aRow; i++) {
		for (j = 0; j < bCol; j++) {
			x[i][j] = 0;
			for (k = 0; k < aCol; k++) {
				x[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}

void transposedMatrix(int** a, int **c, int aRow, int aCol) {
	int i, j;

	for (i = 0; i < aCol; i++) {
		for (j = 0; j < aRow; j++) {
			c[i][j] = a[j][i];
		}
	}
}

int main(void) {
	int aRow, aCol, bRow, bCol, xRow, xCol;
	int** a, ** b, ** x, **c;
	int i, j;

	printf("행렬 a 행, 열: ");
	scanf("%d %d", &aRow, &aCol);
	a = (int**)malloc(sizeof(int*) * aRow);
	for (i = 0; i < aRow; i++) {
		a[i] = (int*)malloc(sizeof(int) * aCol);
	}
	c = (int**)malloc(sizeof(int*) * aCol);
	for (i = 0; i < aCol; i++) {
		c[i] = (int*)malloc(sizeof(int) * aRow);
	}

	printf("행렬 b 행, 열: ");
	scanf("%d %d", &bRow, &bCol);
	b = (int**)malloc(sizeof(int*) * bRow);
	for (i = 0; i < bRow; i++) {
		b[i] = (int*)malloc(sizeof(int) * bCol);
	}

	printf("%d %d 행렬 a 입력: ", aRow, aCol);
	readMatrix(a, aRow, aCol);

	printf("%d %d 행렬 b 입력: ", bRow, bCol);
	readMatrix(b, bRow, bCol);

	x = (int**)malloc(sizeof(int*) * aRow);
	for (i = 0; i < aRow; i++) {
		x[i] = (int*)malloc(sizeof(int) * bCol);
	}

	multipleMatrix(x, a, b, aRow, aCol, bRow, bCol);

	printf("행렬곱\n");
	printMatrix(x, aRow, bCol);

	printf("전치행렬");
	transposedMatrix(a, c, aRow, aCol);
	printMatrix(c, aCol, aRow);

	for (i = 0; i < aRow; i++) {
		free(a[i]);
	}
	free(a);

	for (i = 0; i < bRow; i++) {
		free(b[i]);
	}
	free(b);

	for (i = 0; i < aRow; i++) {
		free(x[i]);
	}
	free(x);

	for (i = 0; i < aCol; i++) {
		free(c[i]);
	}
	free(c);
}