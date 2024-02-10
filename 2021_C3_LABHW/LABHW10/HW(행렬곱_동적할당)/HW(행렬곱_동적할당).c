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

	// ��� �����Ҵ�
	printf("Enter ��� A�� ��� ���� ����: ");
	scanf("%d %d", &aRow, &aCol);

	A = (int**)malloc(sizeof(int*) * aRow);
	for (i = 0; i < aRow; i++) {
		A[i] = (int*)malloc(sizeof(int) * aCol);
	}

	printf("Enter ��� C�� ��� ���� ����: (C�� ���� 4�̾��)");
	scanf("%d %d", &cRow, &cCol);

	C = (int**)malloc(sizeof(int*) * cRow);
	for (i = 0; i < cRow; i++) {
		C[i] = (int*)malloc(sizeof(int) * cCol);
	}

	X = (int**)malloc(sizeof(int*) * aRow);
	for (i = 0; i < aRow; i++) {
		X[i] = (int*)malloc(sizeof(int) * cCol);
	}

	// A, B �Է�, X �ʱ�ȭ
	printf("\n%d * %d ��� A �Է�:\n", aRow, aCol);
	readMatrix(A, aRow, aCol);
	printf("\n%d * %d ��� C �Է�:\n", cRow, cCol);
	readMatrix(C, cRow, cCol);

	for (i = 0; i < aRow; i++) {
		for (j = 0; j < cCol; j++) {
			X[i][j] = 0;
		}
	}

	// ��İ�
	printf("\n��İ�:\n");
	multipleMatrix(A, C, X, aRow, aCol, cRow, cCol);
	printMatrix(X, aRow, cCol);
	

	// ��ġ���
	printf("\n��ġ���:\n");
	Y = (int**)malloc(sizeof(int*) * aCol);
	for (i = 0; i < aCol; i++) {
		Y[i] = (int*)malloc(sizeof(int) * aRow);
	}
	transposedMatrix(A, Y, aRow, aCol);
	printMatrix(Y, aCol, aRow);
}