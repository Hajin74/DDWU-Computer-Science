// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#define BOARD_SIZE 10 // ���Ŀ� 10���� �ٲپ �����Ѵ�
#include <stdio.h>

void display(char b[][BOARD_SIZE]) // ������ �׸���
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

int winCheck(char b[][BOARD_SIZE], int r, int c, char player) { // �ش��ϴ� �÷��̾ �Ű������� ������
	int lc = c, rc = c; //����
	int ur = r, dr = r; //����
	int tempr = r, tempc = c;
	int rowCount = 1, colCount = 1, diaCount1 = 1, diaCount2 = 1;

	// ����
	while (1) {
		if (b[r][lc - 1] == player) { // ���� �Ǻ�
			rowCount++;
			lc--;
		}

		if (b[r][rc + 1] == player) { // ������ �Ǻ�
			rowCount++;
			rc++;
		}

		if (b[r][lc - 1] != player && b[r][rc + 1] != player)
			break;
	}

	if (rowCount == 5) // �����Ǻ�
		return 1;


	// ����
	while (1) {
		if (b[ur - 1][c] == player) { // ���� �Ǻ�
			colCount++;
			ur--;
		}

		if (b[dr + 1][c] == player) { // �Ʒ��� �Ǻ�
			colCount++;
			dr++;
		}

		if (b[ur - 1][c] != player && b[dr + 1][c] != player)
			break;
	}

	if (colCount == 5) // ���� �Ǻ�
		return 1;


	// �����ϴ� �밢��
	while (b[r - 1][c - 1] == player && c >= 0 && r >= 0) {
		diaCount1++;
		r--;
		c--;
	}

	r = tempr;
	c = tempc;

	while (b[r + 1][c + 1] == player && c <= BOARD_SIZE && r <= BOARD_SIZE) {
		diaCount1++;
		r++;
		c++;
	}

	r = tempr;
	c = tempc;

	if (diaCount1 == 5) // �밢�� �Ǻ�
		return 1;

	// �����ϴ� �밢��
	while (b[r - 1][c + 1] == player && c >= 0 && r >= 0) {
		diaCount2++;
		r--;
		c++;
	}

	r = tempr;
	c = tempc;

	while (b[r + 1][c - 1] == player && c <= BOARD_SIZE && r <= BOARD_SIZE) {
		diaCount2++;
		r++;
		c--;
	}

	if (diaCount2 == 5) // �밢�� �Ǻ�
		return 1;

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

/*
int winCheck(char b[][BOARD_SIZE], int r, int c) {
   int i, check=0;

   for (i = 0; i < BOARD_SIZE; i++) {
	  if (b[r][i] == b[r][c])
		 check++;
	  else
		 check = 0;

	  if (check == 5)
		 if (b[r][i + 1] != b[r][c])
			return 1;
   }
}
*/