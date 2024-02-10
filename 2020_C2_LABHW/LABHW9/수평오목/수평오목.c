// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#define BOARD_SIZE 10 // ���Ŀ� 10���� �ٲپ �����Ѵ�
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

		printf("Player %c(�� ��):", turn);
		scanf("%d %d", &r, &c);

		while (board[r][c] != ' ') { // �̹� ä���� �ڸ��̸�, �� �ڸ��� ���� ������ ���� �Է¹޴´�.
			printf("Player %c(�� ��):", turn);
			scanf("%d %d", &r, &c);
		}

		board[r][c] = turn; // �Է¹��� ���� ���´�.
		display(board); // ���带 �����ش�.

		if (winCheck(board, r, c, turn) == 1) {
			printf("Player %c wins!\n", turn);
			break;
		}

		count++;

	} while (count <= BOARD_SIZE * BOARD_SIZE);
}