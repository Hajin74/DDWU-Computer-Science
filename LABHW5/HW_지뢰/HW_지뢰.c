// 컴퓨터학과 20200988 유하진
#include <stdio.h>
#define X_VALUE 5
#define Y_VALUE 5 

void readBombInfo(char grid[][Y_VALUE + 1]) {
	int i;

	printf("Input Grid\n");
	for (i = 0; i < X_VALUE; i++)
		scanf_s("%s", grid[i], sizeof(grid[i])); 
}

void countBomb(char grid[][Y_VALUE + 1], int numOfBombs[][Y_VALUE]) {
	int i, j, w, h; // w : 지뢰 주변 가로길이 h : 지뢰 주변 세로길이

	for (i = 0; i < X_VALUE; i++) {
		for (j = 0; j < Y_VALUE; j++) {
			if (grid[i][j] == '*') {				
				for (w = -1; w <= 1; w++) {
					for (h = -1; h <= 1; h++) {
						if ((0 <= (i + w) && 4 >= (i + w)) && (0 <= (j + h) && 4 >= (j + h)))
							numOfBombs[i + w][j + h]++;
					}
				}
			} //if
		} //j
	} //i
}

void display_numOfBombs(char grid[][Y_VALUE + 1], int numOfBombs[][Y_VALUE]) {
	int i, j;

	printf("\n");
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

