#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#define BOARD_SIZE 3 // 추후에 10으로 바꾸어서 진행한다
#include <stdio.h>

void display(char b[][3]) {
	char ch;
	int i, j;

	printf("    0 1 2\n");
	printf("   ------\n");
	for (i = 0; i < 3; i++) {
		printf("%d |", i);
		for (j = 0; j < 3; j++)
			printf(" %c", b[i][j]);
		printf("\n");
	}
}

int winCheck(char b[][3], int r, int c, char turn) {
	int i, j;
	int rowWin = 1, colWin = 1, diaWin1 = 1, diaWin2 = 1;

	for (j = 0; j < 3; j++) { // 수평
		if (b[r][j] != turn) {
			rowWin = 0;
			break;
		}
	}

	for (i = 0; i < 3; i++) { // 수직
		if (b[i][c] != turn) {
			colWin = 0;
			break;
		}
	}

	if ((r == 0 && c == 2) || (r == 1 && c == 1) || (r == 2 && c == 0)) { // 우상향 대각선
		for (i = 0; i < 3; i++) {
			if (b[i][2 - i] != turn) {
				diaWin1 = 0;
				break;
			}
		}
	}
	else {
		diaWin1 = 0;
	}

	if ((r == 0 && c == 0) || (r == 1 && c == 1) || (r == 2 && c == 2)) { // 우하향 대각선
		for (i = 0; i < 3; i++) {
			if (b[i][i] != turn) {
				diaWin2 = 0;
				break;
			}
		}
	}
	else {
		diaWin2 = 0;
	}

	if (rowWin == 1 || colWin == 1 || diaWin1 == 1 || diaWin2 == 1)
		return 1;
	return 0;
}

void main() {
	char board[3][3];
	char turn = 'X';
	int r, c;
	int i, j;
	int count;
	int win;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			board[i][j] = ' ';

	count = 1;
	display(board);

	do {
		printf("Player %c(행 열):", turn);
		scanf("%d %d", &r, &c);

		if (board[r][c] != ' ') 
			continue;

		count++;
		board[r][c] = turn;
		display(board);

		// 추가 작성
		if (winCheck(board, r, c, turn) == 1) {
			printf("Player %c wins!\n", turn);
			win = 1;
			break;
		}

		turn = (turn == 'X' ? 'O' : 'X'); // turn을 바꾼다, X로 시작
	} while (count <= 9);

	if (win == 0) {
		printf("Nobody wins!\n");
	}
}