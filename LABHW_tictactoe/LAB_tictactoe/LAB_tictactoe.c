// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3
#pragma warning(disable : 6031)
#include <stdio.h>

void display(char b[][3]) {
	int i, j;

	printf("    0 1 2\n");
	printf("    ------\n");

	for (i = 0; i < SIZE; i++) {
		printf("%d |", i);
		for (j = 0; j < SIZE; j++) {
			printf(" %c", b[i][j]);
		}
		printf("\n");
	}
}

int main(void) {
	int i, j;
	int r, c; // 행 열
	int count = 0; // 보드판 다 채웠는지 확인용
	char turn;
	char board[SIZE][SIZE];
	
	for (i = 0; i < SIZE; i++) // 우선 모든 보드판을 비워둠
		for (j = 0; j < SIZE; j++)
			board[i][j] = ' ';

	display(board);

	do {
		if (count % 2 == 0)
			turn = 'X';
		else 
			turn = 'O';

		printf("Player %c (행 열): ", turn);
		scanf("%d %d", &r, &c);

		if (board[r][c] == ' ') {
			board[r][c] = turn;
			count++;
		}

		display(board);

	} while (count < SIZE * SIZE); // 보드판 다 채울때까지 반복
}