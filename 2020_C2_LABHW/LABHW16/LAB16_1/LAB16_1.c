// 컴퓨터학과 20200988 유하진
#include <stdio.h>

int main(void)
{
	int table[5][3] = { 0 };
	int i, j;
	int total = 0;

	// 가
	printf("가)\n"); 
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", table[i][j]);
		printf("\n");
	}
	
	// 나
	for (i = 0; i < 5; i++) // 값 배정
	{
		for (j = 0; j < 3; j++)
			table[i][j] = i + j;
	}

	printf("나)\n");
	i = 0, j = 0;
	while (i < 5)
	{
		while (j < 3)
			printf("%d ", table[i][j++]);
		printf("\n");
		j = 0;
		i++;
	}

	// 다
	printf("다)\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
			total += table[i][j];
	}
	printf("Total is %d\n", total);
}