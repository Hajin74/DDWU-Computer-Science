// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#define BOARD_SIZE 10
#include <stdio.h>

int winCheck(char b[][BOARD_SIZE + 1], int r, int c) // �� �Լ��� ����
{
	// �ۼ�
	int lc = c, rc = c; //����
	int ur = r, dr = r; //����
	int tempr = r, tempc = c;
	int rowCount = 1, colCount = 1, diaCount1 = 1, diaCount2 = 1;

	// ����
	while (1) {
		if (b[r][lc - 1] == b[r][c]) { // ���� �Ǻ�
			rowCount++;
			lc--;
		}

		if (b[r][rc + 1] == b[r][c]) { // ������ �Ǻ�
			rowCount++;
			rc++;
		}

		if (b[r][lc - 1] != b[r][c] && b[r][rc + 1] != b[r][c])
			break;
	}

	if (rowCount == 5) // �����Ǻ�
		return 1;


	// ����
	while (1) {
		if (b[ur - 1][c] == b[r][c]) { // ���� �Ǻ�
			colCount++;
			ur--;
		}

		if (b[dr + 1][c] == b[r][c]) { // �Ʒ��� �Ǻ�
			colCount++;
			dr++;
		}

		if (b[ur - 1][c] != b[r][c] && b[dr + 1][c] != b[r][c])
			break;
	}

	if (colCount == 5) // ���� �Ǻ�
		return 1;


	// �����ϴ� �밢��
	while (b[r - 1][c - 1] == b[r][c] && c >= 0 && r >= 0) {
		diaCount1++;
		r--;
		c--;
	}

	r = tempr;
	c = tempc;

	while (b[r + 1][c + 1] == b[r][c] && c <= BOARD_SIZE && r <= BOARD_SIZE) {
		diaCount1++;
		r++;
		c++;
	}

	r = tempr;
	c = tempc;

	if (diaCount1 == 5) // �밢�� �Ǻ�
		return 1;

	// �����ϴ� �밢��
	while (b[r - 1][c + 1] == b[r][c] && c >= 0 && r >= 0) {
		diaCount2++;
		r--;
		c++;
	}

	r = tempr;
	c = tempc;

	while (b[r + 1][c - 1] == b[r][c] && c <= BOARD_SIZE && r <= BOARD_SIZE) {
		diaCount2++;
		r++;
		c--;
	}

	if (diaCount2 == 5) // �밢�� �Ǻ�
		return 1;

	return 0;
}

void display(char b[][BOARD_SIZE + 1])
{
	int i, j;
	printf("     ");
	for (i = 0; i < BOARD_SIZE; i++)
		printf("%2d", i);
	printf("\n     ---------------------\n");
	for (i = 0; i < BOARD_SIZE; i++) {
		printf("%3d |", i);
		for (j = 0; j < BOARD_SIZE; j++)
			printf(" %c", b[i][j]);
		printf("\n");
	}
}

int main(void)
{
	char board[BOARD_SIZE][BOARD_SIZE + 1] = { ' ' };
	char turn = 'X';
	int r, c;
	int i;
	int lose;

	// (A)������ �̹� ���� ������ �Է�
	for (i = 0; i < BOARD_SIZE; i++)
		scanf("%s", board[i]); // ���� ��κ��� �Ѳ����� �Է� �޴´�

	display(board); // �������� ���� ���� ���� ������ �ּ� ���
	for (i = 0; i < 2; i++) { // �̹� ������ ���� �ǿ� X, O ���� �� ���� ���� 
						 // �밢��, ���밢���� �ִ� �ڽ��� ���� ���� ����Ѵ�
		//printf("Player %c(�� ��):", turn);
		scanf("%d %d", &r, &c);

		//if(board[r][c] != '-') continue; // �̹� ���� ���� �ڸ�

		board[r][c] = turn;
		//display(board); // �������� ���� ���� ���� ������ �ּ� ���

		printf("%d\n", winCheck(board, r, c));
		turn = (turn == 'X' ? 'O' : 'X');
	}
}
