#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#define X_VALUE 5
#define Y_VALUE 5

void readBombInfo(char grid[][Y_VALUE + 1]) {
	int i;

	printf("Input Grid\n");
	for (i = 0; i < X_VALUE; i++)
		scanf("%s", grid[i]);
}

void countBomb(char grid[][Y_VALUE + 1], int numOfBombs[][Y_VALUE]) {
	int i, j;
	int w, h;

	for (i = 0; i < X_VALUE; i++) {
		for (j = 0; j < Y_VALUE; j++) {
			if (grid[i][j] == '*') {
				// 여기에 지뢰의 개수를 세어 numOfBombs에 넣는 코드 작성 
				for (w = -1; w <= 1; w++) {
					for (h = -1; h <= 1; h++) {
						if ((0 <= (i + h) && 4 >= (i + h)) && (0 <= (j + w) && 4 >= (j + w)))
							numOfBombs[i + h][j + w]++;
					}
				}
			}
		}
	}
}

void display_numOfBombs(char grid[][Y_VALUE + 1], int numOfBombs[][Y_VALUE]) {
	int i, j;

	for (i = 0; i < X_VALUE; i++) {
		for (j = 0; j < Y_VALUE; j++)
			if (grid[i][j] == '*')
				printf("*");
			else
				printf("%d", numOfBombs[i][j]);
		printf("\n");
	}
}

int main(void) {
	char grid[X_VALUE][Y_VALUE + 1]; 
	int numOfBombs[X_VALUE][Y_VALUE] = { 0 }; 

	readBombInfo(grid);
	countBomb(grid, numOfBombs);
	display_numOfBombs(grid, numOfBombs);
}