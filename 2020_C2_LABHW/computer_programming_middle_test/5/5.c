// 20200988 컴퓨터학과 유하진 , 4번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER 10

int main(void)
{
	int a[NUMBER], b[NUMBER] = { 0 };
	int i, j;

	for (i = 0; i < NUMBER; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < NUMBER; i++) {
		if (i == 0) {
			b[0] = a[1];
		}
		else if (i == 9) {
			b[9] = a[8];
		}
		else {
			b[i] = a[i - 1] + a[i + 1];
		}
	}

	for (i = 0; i < NUMBER; i++)
		printf("%d ", b[i]);
	printf("\n");
}