// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#define BOARD_SIZE 10 // 추후에 10으로 바꾸어서 진행한다
#include <stdio.h>

void display(char b[][BOARD_SIZE]) // 보드판 그리기
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

int winCheck(char b[][BOARD_SIZE], int r, int c, char player) { // 해당하는 플레이어를 매개변수로 가져옴
	int lc = c, rc = c; //수평
	int ur = r, dr = r; //수직
	int tempr = r, tempc = c;
	int rowCount = 1, colCount = 1, diaCount1 = 1, diaCount2 = 1;

	// 수평
	while (1) {
		if (b[r][lc - 1] == player) { // 왼쪽 판별
			rowCount++;
			lc--;
		}

		if (b[r][rc + 1] == player) { // 오른쪽 판별
			rowCount++;
			rc++;
		}

		if (b[r][lc - 1] != player && b[r][rc + 1] != player)
			break;
	}

	if (rowCount == 5) // 수평판별
		return 1;


	// 수직
	while (1) {
		if (b[ur - 1][c] == player) { // 위쪽 판별
			colCount++;
			ur--;
		}

		if (b[dr + 1][c] == player) { // 아래쪽 판별
			colCount++;
			dr++;
		}

		if (b[ur - 1][c] != player && b[dr + 1][c] != player)
			break;
	}

	if (colCount == 5) // 수직 판별
		return 1;


	// 감소하는 대각선
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

	if (diaCount1 == 5) // 대각선 판별
		return 1;

	// 증가하는 대각선
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

	if (diaCount2 == 5) // 대각선 판별
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