// 컴퓨터학과 20200988 유하진
#include <stdio.h>

int main(void)
{
	int table[9][9];
	int i, j, num;

	printf("--구구단 표는 다음과 같습니다.\n");
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 9; j++)
		{
			table[i][j] = (i + 2) * (j + 1);
			printf("%4d", table[i][j]);
		}
		printf("\n");
	}

	printf("--원하는 구구단은? ");
	scanf_s("%d", &num);

	for (j = 0; j < 9; j++)
		printf("%4d", table[num - 2][j]);
}