// 컴퓨터학과 20200988 유하진^^
#include <stdio.h>
void printMatrix(int a[][4], int size);
void turnMatrix(int a[][4], int b[][4], int size);
void makeMatrix(int a[][4], int size);

int main(void) {
	int arr1[4][4], arr2[4][4], arr3[4][4], arr4[4][4];
	int size = 4;

	makeMatrix(arr1, size);
	printMatrix(arr1, size);

	turnMatrix(arr1, arr2, size);
	printMatrix(arr2, size);

	turnMatrix(arr2, arr3, size);
	printMatrix(arr3, size);

	turnMatrix(arr3, arr4, size);
	printMatrix(arr4, size);

	turnMatrix(arr4, arr1, size);
	printMatrix(arr1, size);
}

void makeMatrix(int a[][4], int size) {
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			a[i][j] = i * 4 + j + 1;
		}
	}
}

void printMatrix(int a[][4], int size) {
	int i, j;

	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void turnMatrix(int a[][4], int b[][4], int size) {
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			b[i][j] = a[4 - j - 1][i];
		}
	}
}

/*
#include <stdio.h>
void make(int arr[][4], int size);
void print(int arr[][4], int size);
void rotate(int arr[][4], int varr[][4], int size);
void copy(int arr1[][4], int arr2[][4], int size);

int main(void) {
	int i;
	int a[4][4], va[4][4];

	make(a, 4);
	print(a, 4);

	for (i = 0; i < 4; i++) {
		rotate(a, va, 4);
		print(va, 4);
		copy(va, a, 4);
	}

}

void make(int arr[][4], int size) {
	int i, j;

	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++) {
			arr[i][j] = i * 4 + j + 1;
		}
	}
}

void print(int arr[][4], int size) {
	int i, j;

	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");
}

void rotate(int arr[][4], int varr[][4], int size) {
	int i, j;

	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++) {
			varr[i][j] = arr[4 - j - 1][i];
		}
	}
}

void copy(int arr1[][4], int arr2[][4], int size) {
	int i, j;

	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++) {
			arr2[i][j] = arr1[i][j];
		}
	}
}
*/