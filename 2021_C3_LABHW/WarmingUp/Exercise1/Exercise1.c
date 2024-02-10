// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>

int main(void) {
	int n, i;
	int num = 1;

	printf("Enter a number: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		num *= 2;
	}

	printf("%d\n", num);

	return 0;
}