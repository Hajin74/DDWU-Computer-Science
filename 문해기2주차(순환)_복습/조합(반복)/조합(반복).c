#pragma warning(disable: 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, j, k, l;
	int n = 7;
	int num = 0;

	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			for (k = j + 1; k < n; k++) {
				for (l = k + 1; l < n; l++) {
					printf("%d %d %d %d\n", i, j, k, l);
					num++;
				}
			}
		}
	}

	printf("%d°³", num);
}