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
			printf("%5d ", x[i][j]);
		}
		printf("\n");
	}
}

void multipleMatrix(int** a, int** b, int **x, int aRow, int aCol, int bRow, int bCol) {
	int i, j, k;

	for (i = 0; i < aRow; i++) {
		for (j = 0; j < bCol; j++) {
			for (k = 0; k < aCol; k++) {
				x[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}

void transposedMatrix(int** a, int** y, int r, int c) {
	int i, j, k;

	for (i = 0; i < c; i++) {
		for (j = 0; j < r; j++) {
			y[i][j] = a[j][i];
		}
	}
}

int main(void) {
	int** A, ** C, ** X, **Y;
	int aRow, aCol, cRow, cCol, xRow, xCol;
	int i, j;

	// 행렬 동적할당
	printf("Enter 행렬 A의 행과 열의 개수: ");
	scanf("%d %d", &aRow, &aCol);

	A = (int**)malloc(sizeof(int*) * aRow);
	for (i = 0; i < aRow; i++) {
		A[i] = (int*)malloc(sizeof(int) * aCol);
	}

	printf("Enter 행렬 C의 행과 열의 개수: (C의 행은 4이어야)");
	scanf("%d %d", &cRow, &cCol);

	C = (int**)malloc(sizeof(int*) * cRow);
	for (i = 0; i < cRow; i++) {
		C[i] = (int*)malloc(sizeof(int) * cCol);
	}

	X = (int**)malloc(sizeof(int*) * aRow);
	for (i = 0; i < aRow; i++) {
		X[i] = (int*)malloc(sizeof(int) * cCol);
	}

	// A, B 입력, X 초기화
	printf("\n%d * %d 행렬 A 입력:\n", aRow, aCol);
	readMatrix(A, aRow, aCol);
	printf("\n%d * %d 행렬 C 입력:\n", cRow, cCol);
	readMatrix(C, cRow, cCol);

	for (i = 0; i < aRow; i++) {
		for (j = 0; j < cCol; j++) {
			X[i][j] = 0;
		}
	}

	// 행렬곱
	printf("\n행렬곱:\n");
	multipleMatrix(A, C, X, aRow, aCol, cRow, cCol);
	printMatrix(X, aRow, cCol);
	

	// 전치행렬
	printf("\n전치행렬:\n");
	Y = (int**)malloc(sizeof(int*) * aCol);
	for (i = 0; i < aCol; i++) {
		Y[i] = (int*)malloc(sizeof(int) * aRow);
	}
	transposedMatrix(A, Y, aRow, aCol);
	printMatrix(Y, aCol, aRow);
}