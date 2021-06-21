#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void fibo_memo(int** m, int n) {
	int i, j;

	if (n == 0 || n == 1) {
		return;
	}
	else {
		if (m[n - 1][0] == 0 && m[n - 1][1] == 0 && m[n - 2][0] == 0 && m[n - 2][1] == 0) {
			fibo_memo(m, n - 1);
			fibo_memo(m, n - 2);
		}
		else if (m[n - 1][0] == 0 && m[n - 1][1] == 0) {
			fibo_memo(m, n - 1);
		}
		
		m[n][0] = m[n - 1][0] + m[n - 2][0];
		m[n][1] = m[n - 2][0] + m[n - 2][1];

		return;
	}
}

int main(void) {
	int n, ** memo;
	int i, j;

	// memo 동적할당
	scanf("%d", &n);
	memo = (int**)malloc(sizeof(int*) * (n + 1)); 
	for (i = 0; i <= n; i++) {
		memo[i] = (int*)malloc(sizeof(int) * 2);
	}

	// memo 초기화
	for (i = 1; i <= n; i++) {
		for (j = 0; j <= 1; j++) {
			memo[i][j] = 0;
		}
	}

	memo[0][0] = 0;
	memo[0][1] = 1;
	memo[1][0] = 1;
	memo[1][1] = 0;

	fibo_memo(memo, n);
	printf("%d %d\n", memo[n][0], memo[n][1]);

	// memo 해제
	for (i = 1; i <= n; i++) {
		free(memo[i]);
	}
	free(memo);
}