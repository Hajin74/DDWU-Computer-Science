// 컴퓨터학과 20200988 유하진
#include <stdio.h>
void makeArr(int array[4][4]);
void printArr(int array[4][4]);
void turnArr(int array1[4][4], int array2[4][4]);

int main(void) {
	int arr1[4][4], arr2[4][4];

	makeArr(arr1); 
	printArr(arr1);
	turnArr(arr1, arr2);
	printArr(arr2);
}

void makeArr(int array[4][4]) {
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			array[i][j] = i * 4 + j + 1;
		}
	}
}

void printArr(int array[4][4]) {
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d", array[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void turnArr(int array1[4][4], int array2[4][4]) {
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			array2[i][j] = array1[4 - j - 1][i];
		}
	}
}