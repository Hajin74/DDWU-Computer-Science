#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 10 // 추후에 10으로 바꾸어서 진행한다
void display(char b[][BOARD_SIZE])
{
    char ch;
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
int winCheck(char b[][BOARD_SIZE], int r, int c) {
    int i, j, result = 1;

    for (i = 0; i < BOARD_SIZE; i++) {
        if (b[r][i] == b[r][c]) {
            for (j = i; j < i + 5; j++) {
                if (b[r][j] != b[r][c]) {
                    result = 0;
                    return 0;
                }
            }


            if (b[r][j] == b[r][c]) {
                result = 0;
                //return 0;
            }

            if (result == 1)
                return 1;
        }
    }
}

void main()
{
    char board[BOARD_SIZE][BOARD_SIZE];
    char turn1 = 'X';
    char turn2 = 'O';
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
        printf("Player %c(행 열):", turn1);
        scanf_s("%d %d", &r, &c);

        if (board[r][c] == ' ')
            board[r][c] = turn1;
        else {
            while (board[r][c] != ' ') {
                printf("Player %c(행 열):", turn1);
                scanf_s("%d %d", &r, &c);
            }
            board[r][c] = turn1;
        }

        display(board);
        count++;

        if (winCheck(board, r, c)) {
            printf("Player X wins!");
            break;
        }

        if (count == BOARD_SIZE * BOARD_SIZE + 1)
            break;

        printf("Player %c(행 열):", turn2);
        scanf_s("%d %d", &r, &c);

        if (board[r][c] == ' ')
            board[r][c] = turn2;
        else {
            while (board[r][c] != ' ') {
                printf("Player %c(행 열):", turn2);
                scanf_s("%d %d", &r, &c);
            }
            board[r][c] = turn2;
        }

        display(board);
        count++;

        if (winCheck(board, r, c)) {
            printf("Player O wins!");
            break;
        }

    } while (count <= BOARD_SIZE * BOARD_SIZE);

    if (winCheck(board, r, c) == 0)
        printf("Nobody wins!");

}