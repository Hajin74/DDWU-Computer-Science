#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#define UP 2
//#define LE 1

int matrixPath_memo(int** m, int r, int c, int i, int j, int** M, int** BP) {
	int a, b;

	if (i == 0 && j == 0) {
		return m[0][0];
	}
	else if (i == 0) {
		BP[i][j] = 1;
		if (M[0][j - 1] == 0) {
			M[0][j - 1] = matrixPath_memo(m, r, c, 0, j - 1, M, BP);
		}

		return M[0][j - 1] + m[i][j];
	}
	else if (j == 0) {
		BP[i][j] = 2;
		if (M[i - 1][0] == 0) {
			M[i - 1][0] = matrixPath_memo(m, r, c, i - 1, 0, M, BP);
		}

		return M[i - 1][0] + m[i][j];
	}
	else {
		a = matrixPath_memo(m, r, c, i - 1, j, M, BP);
		M[i - 1][j] = a;
		b = matrixPath_memo(m, r, c, i, j - 1, M, BP);
		M[i][j - 1] = b;

		if (a < b) {
			BP[i][j] = 2;

			return a + m[i][j];
		}
		else {
			BP[i][j] = 1;

			return b + m[i][j];
		}
	}
}

void findMatrixPath(int **BP, int i, int j) {

	if (BP[i][j] == 0) {
		printf("<%d %d> ", i, j);

		return;
	}
	else if (BP[i][j] == 2) {
		findMatrixPath(BP, i - 1, j);
	}
	else if (BP[i][j] == 1) {
		findMatrixPath(BP, i, j - 1);
	}
	printf("<%d %d> ", i, j);
}

int main(void) {
	int** m, ** M, ** BP; // m 보드, M 메모, BP 백포인터
	int i, j, r, c;

	r = c = 4;

	// 동적할당
	m = (int**)malloc(sizeof(int*) * r);
	M = (int**)malloc(sizeof(int*) * r);
	BP = (int**)malloc(sizeof(int*) * r);

	for (i = 0; i < r; i++) {
		m[i] = (int*)malloc(sizeof(int) * c);
		M[i] = (int*)malloc(sizeof(int) * c);
		BP[i] = (int*)malloc(sizeof(int) * c);
	}

	// 초기화
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &m[i][j]); // 보드 입력받기
			M[i][j] = 0; // 메모
			BP[i][j] = 0; // 백포인터 초기화
		}
	}

	printf("\n%d\n\n", matrixPath_memo(m, r, c, 3, 3, M, BP));

	// 메모 M 출력
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// backpointer BP 출력
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%d ", BP[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// path 출력
	findMatrixPath(BP, 3, 3);

	// 반환
	for (i = 0; i < r; i++) {
		free(m[i]);
		free(M[i]);
		free(BP[i]);
	}

	free(m);
	free(M);
	free(BP);
}

