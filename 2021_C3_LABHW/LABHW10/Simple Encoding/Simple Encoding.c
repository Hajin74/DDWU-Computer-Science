#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void simpleEncoding(int *input, int *sum, int n) {
	int i, j;

	for (i = 0; i < n; i++) {
		sum[i] = 1;
		for (j = 0; j < n; j++) {
			if (i == j) {
				sum[i] *= (input[j] + 1);
			}
			else {
				sum[i] *= input[j];
			}
		}
	}
}

int main(void) {
	int i, n;
	int* input;
	int* sum;
	int max;

	scanf("%d", &n);
	input = (int*)malloc(sizeof(int) * n);
	sum = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) {
		scanf("%d", &input[i]);
	}

	// 1개 선택 후 모든 숫자들과 곱하기
	simpleEncoding(input, sum, n);

	max = sum[0];
	for (i = 0; i < n; i++) {
		if (sum[i] > max) {
			max = sum[i];
		}
	}
	printf("%d\n", max);

	free(input);
	free(sum);
}