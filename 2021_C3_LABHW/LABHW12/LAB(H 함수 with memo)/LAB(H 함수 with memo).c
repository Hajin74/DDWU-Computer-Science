#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int H(int n, int* M) {
	int i, sum;

	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		sum = 0;

		for (i = 0; i < n; i++) {
			if (M[n - (i + 1)] == 0) {
				M[n - (i + 1)] = H(n - (i + 1), M);
			}
			sum += H(i, M) * M[n - (i + 1)];
		}

		return sum;
	}
}

int main(void) {
	int n, i;
	int* M;

	printf("0���� ū ����: ");
	scanf("%d", &n);

	// �޸� �����Ҵ� �� �ʱ�ȭ
	M = (int*)malloc(sizeof(int) * (n + 1));
	for (i = 0; i <= n; i++) {
		M[i] = 0;
	}

	printf("����� %d\n", H(n, M));
}