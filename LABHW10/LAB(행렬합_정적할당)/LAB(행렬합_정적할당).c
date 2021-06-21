#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void readMatrix(int a[][3]) {
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
		}
	}
}

void matrixAdd(int a[][3], int b[][3], int x[][3]) {
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			x[i][j] = a[i][j] + b[i][j];
		}
	}
}

void printMatrix(int a[][3]) {
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int main(void) {
	int a[3][3], b[3][3], x[3][3];

	printf("<3 * 3> 행렬 A입력:\n");
	readMatrix(a);
	//printMatrix(a);

	printf("<3 * 3> 행렬 B입력:\n");
	readMatrix(b);
	//printMatrix(a);

	printf("행렬합:\n");
	matrixAdd(a, b, x);
	printMatrix(x);
}