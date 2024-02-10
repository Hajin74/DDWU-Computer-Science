// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#define BOARD_SIZE 10
#include <stdio.h>

int winCheck(char b[][BOARD_SIZE + 1], int r, int c) // 이 함수만 제출
{
	// 작성
	int lc = c, rc = c; //수평
	int ur = r, dr = r; //수직
	int tempr = r, tempc = c;
	int rowCount = 1, colCount = 1, diaCount1 = 1, diaCount2 = 1;

	// 수평
	while (1) {
		if (b[r][lc - 1] == b[r][c]) { // 왼쪽 판별
			rowCount++;
			lc--;
		}

		if (b[r][rc + 1] == b[r][c]) { // 오른쪽 판별
			rowCount++;
			rc++;
		}

		if (b[r][lc - 1] != b[r][c] && b[r][rc + 1] != b[r][c])
			break;
	}

	if (rowCount == 5) // 수평판별
		return 1;


	// 수직
	while (1) {
		if (b[ur - 1][c] == b[r][c]) { // 위쪽 판별
			colCount++;
			ur--;
		}

		if (b[dr + 1][c] == b[r][c]) { // 아래쪽 판별
			colCount++;
			dr++;
		}

		if (b[ur - 1][c] != b[r][c] && b[dr + 1][c] != b[r][c])
			break;
	}

	if (colCount == 5) // 수직 판별
		return 1;


	// 감소하는 대각선
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

	if (diaCount1 == 5) // 대각선 판별
		return 1;

	// 증가하는 대각선
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

	if (diaCount2 == 5) // 대각선 판별
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

	// (A)말들이 이미 놓인 판으로 입력
	for (i = 0; i < BOARD_SIZE; i++)
		scanf("%s", board[i]); // 판의 행부분을 한꺼번에 입력 받는다

	display(board); // 보드판의 말이 놓인 것을 보려면 주석 취소
	for (i = 0; i < 2; i++) { // 이미 말들이 놓인 판에 X, O 말을 한 번씩 놓고 
						 // 대각선, 역대각선에 있는 자신의 말의 수를 출력한다
		//printf("Player %c(행 열):", turn);
		scanf("%d %d", &r, &c);

		//if(board[r][c] != '-') continue; // 이미 말이 놓인 자리

		board[r][c] = turn;
		//display(board); // 보드판의 말이 놓인 것을 보려면 주석 취소

		printf("%d\n", winCheck(board, r, c));
		turn = (turn == 'X' ? 'O' : 'X');
	}
}
