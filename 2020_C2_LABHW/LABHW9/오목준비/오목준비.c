// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#define BOARD_SIZE 3 // ���Ŀ� 10���� �ٲپ �����Ѵ�
#include <stdio.h>

void display(char b[][BOARD_SIZE])
{
	char ch;
	int i, j;

	printf("     ");
	for (i = 0; i < BOARD_SIZE; i++)
		printf("%2d", i);

	printf("\n ---------------------\n");
	for (i = 0; i < BOARD_SIZE; i++) {
		printf("%3d |", i);
		for (j = 0; j < BOARD_SIZE; j++)
			printf(" %c", b[i][j]);
		printf("\n");
	}
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

		while (board[r][c] != ' ') {
			printf("Player %c(�� ��):", turn);
			scanf("%d %d", &r, &c);
		}

		board[r][c] = turn;
		display(board);
		count++;

	} while (count <= BOARD_SIZE * BOARD_SIZE);
}