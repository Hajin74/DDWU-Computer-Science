#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int simpleEncoding(int n, int* list) {
	int i, j, max = -1, sum;

	for (i = 0; i < n; i++) {
		sum = 1;
		for (j = 0; j < n; j++) {
			if (i == j) {
				sum *= (list[i] + 1);
			}
			else {
				sum *= list[j];
			}
		}

		if (sum > max)
			max = sum;
	}

	return max;
}

int main(void) {
	int i, n, * list, max;

	scanf("%d", &n);
	list = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		scanf("%d", &list[i]);

	max = simpleEncoding(n, list);
	printf("%d", max);

	free(list);
}