#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, i, j, max;
	int* num, * result;

	scanf("%d", &n);
	num = (int*)malloc(sizeof(int) * n);
	result = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	for (i = 0; i < n; i++) {
		result[i] = 1;
		for (j = 0; j < n; j++) {
			if (i == j) {
				result[i] *= (num[i] + 1);
			}
			else {
				result[i] *= num[j];
			}
		}
	}

	max = -1;
	for (i = 0; i < n; i++) {
		if (result[i] > max) {
			max = result[i];
		}
	}

	printf("%d\n", max);

	free(num);
}