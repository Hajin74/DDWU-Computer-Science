// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#define BOARD_SIZE 10 // 추후에 10으로 바꾸어서 진행한다
#include <stdio.h>

void display(char b[][BOARD_SIZE])
{
	char ch;
	int i, j;

	printf("     ");
	for (i = 0; i < BOARD_SIZE; i++)
		printf("%2d", i);

	printf("\n -----------------------------------\n");
	for (i = 0; i < BOARD_SIZE; i++) {
		printf("%3d |", i);
		for (j = 0; j < BOARD_SIZE; j++)
			printf(" %c", b[i][j]);
		printf("\n");
	}
}

int winCheck(char b[][BOARD_SIZE], int r, int c, char player) {
	int lc = c, rc = c, count = 1;

	while (1) {
		if (b[r][lc - 1] == player) {
			count++;
			lc--;
		}

		if (b[r][rc + 1] == player) {
			count++;
			rc++;
		}

		if(b[r][lc - 1] != player && b[r][rc + 1] != player)
			break;
	}

	if (count == 5)
		return 1;
	else
		return 0;
}

void main()
{
	char board[BOARD_SIZE][BOARD_SIZE];
	char turn = 'X';
	int r, c;
	int i, j;
	int count;

	for (i = 0; i < BOARD_SIZE; i++)
		for (j = 0; j < BOARD_SIZE; j++)
			board[i][j] = ' ';

	count = 1;
	display(board);

	do
	{
		if (count % 2 != 0)
			turn = 'X';
		else
			turn = 'O';

		printf("Player %c(행 열):", turn);
		scanf("%d %d", &r, &c);

		while (board[r][c] != ' ') { // 이미 채워진 자리이면, 빈 자리에 놓을 때까지 수를 입력받는다.
			printf("Player %c(행 열):", turn);
			scanf("%d %d", &r, &c);
		}

		board[r][c] = turn; // 입력받은 수를 놓는다.
		display(board); // 보드를 보여준다.

		if (winCheck(board, r, c, turn) == 1) {
			printf("Player %c wins!\n", turn);
			break;
		}

		count++;

	} while (count <= BOARD_SIZE * BOARD_SIZE);
}