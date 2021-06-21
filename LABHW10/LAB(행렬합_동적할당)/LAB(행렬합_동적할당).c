#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void readMatrix(int **a, int r, int c) {
	int i, j;

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &a[i][j]);
		}
	}
}

void matrixAdd(int **a, int **b, int **x, int r, int c) {
	int i, j;

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			x[i][j] = a[i][j] + b[i][j];
		}
	}
}

void printMatrix(int **x, int r, int c) {
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
	int** X; // A + B
	int r, c;
	int i, j;

	printf("Enter 행렬 A의 행과 열의 개수: ");
	scanf("%d %d", &r, &c);

	A = (int**)malloc(sizeof(int*) * r);
	B = (int**)malloc(sizeof(int*) * r);
	X = (int**)malloc(sizeof(int*) * r);
	for (i = 0; i < r; i++) {
		A[i] = (int*)malloc(sizeof(int) * c);
		B[i] = (int*)malloc(sizeof(int) * c);
		X[i] = (int*)malloc(sizeof(int) * c);
	}

	// A, B 입력받기
	readMatrix(A, r, c);
	readMatrix(B, r, c);

	// X 초기화
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			X[i][j] = 0;
		}
	}

	matrixAdd(A, B, X, r, c);

	printf("행렬합:\n");
	printMatrix(X, r, c);
	printf("\n");

	for (i = 0; i < r; i++) {
		free(A[i]);
		free(B[i]);
		free(X[i]);
	}
	free(A);
	free(B);
	free(X);
}