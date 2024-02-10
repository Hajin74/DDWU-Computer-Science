// 20200988 컴퓨터학과 유하진 1_2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int printArray(int arr[][4], int size) // 변경하지 말라
{
	int i, j;

	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++)
			if (j < 3)
				printf("%d ", arr[i][j]);
			else
				printf("%d", arr[i][j]);
		printf("\n");
	}
}

void initArray(int a[][4], int size, int num) // 여기를 작성
{
	int i, j;

	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++) {
			a[i][j] = num * j + i;
		}
	}
}

void rotate(int a[][4], int b[][4], int size) {
	int i, j;

	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++) {
			b[i][j] = a[size - i - 1][4 - j - 1];
		}
	}
}

int main(void) // 변경하지 말라
{
	int i, j;
	int a[4][4], b[4][4];
	int n;

	scanf("%d", &n);

	initArray(a, 4, n);
	rotate(a, b, 4);
	printArray(b, 4);
}