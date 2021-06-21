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

void matrixAdd(int** a, int** b, int** x, int r, int c) {
	int i, j;

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			x[i][j] = a[i][j] + b[i][j];
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

int main(void) {
	int** A, ** B;
	int** X; // a+ b
	int aRow, aCol;
	int i, j, r, c;

	printf("행렬 a의 행과 열의 개수: ");
	scanf("%d %d", &aRow, &aCol);

	A = (int**)malloc(sizeof(int*) * aRow);
	B = (int**)malloc(sizeof(int*) * aRow);
	X = (int**)malloc(sizeof(int*) * aRow);
	for (i = 0; i < aRow; i++) {
		A[i] = (int*)malloc(sizeof(int) * aCol);
		B[i] = (int*)malloc(sizeof(int) * aCol);
		X[i] = (int*)malloc(sizeof(int) * aCol);
	}

	printf("헹렬 에이 입력:");
	for (i = 0; i < aRow; i++) {
		for (j = 0; j < aCol; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	printf("헹렬 B 입력:");
	for (i = 0; i < aRow; i++) {
		for (j = 0; j < aCol; j++) {
			scanf("%d", &B[i][j]);
		}
	}
	

	matrixAdd(A, B, X, aRow, aCol);
	printf("행렬합: \n");
	printMatrix(X, aRow, aCol);
	printf("\n");
}