#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int comb(int n, int r, int** M) {
	if (r == 0 || r == n) {
		return 1;
	}
	else {
		if (M[n - 1][r - 1] == 0) {
			M[n - 1][r - 1] = comb(n - 1, r - 1, M);
		}

		if (M[n - 1][r] == 0) {
			M[n - 1][r] = comb(n - 1, r, M);
		}

		return M[n - 1][r - 1] + M[n - 1][r];
	}
}

int main(void) {
	int C, ** M;
	int n, r, i, j;

	scanf("%d %d", &n, &r);

	// 메모 동적할당
	M = (int**)malloc(sizeof(int*) * (n + 1));
	for (i = 1; i <= n; i++) {
		M[i] = (int*)malloc(sizeof(int) * (i + 1));
	}

	// 메모 초기화
	for (i = 1; i < n + 1; i++) {
		for (j = 0; j <= i; j++) {
			M[i][j] = 0;
		}
	}

	C = comb(n, r, M);
	printf("%d\n", C);

	return 0;
}