// ��ǻ���а� 20200988 ������
#include <stdio.h>

int main(void)
{
	int gradeTable[5][4] = { {10, 15, 20, 0}, {30, 35, 20, 0}, {60, 65, 20, 0}, {90, 95, 20, 0}, {0, 0, 0, 0} }; 
	int i, j;
	int sum1 = 0, sum2 = 0;
	
	printf("a)\n"); 
	for (i = 0; i < 5; i++) 
	{ 
		for (j = 0; j < 4; j++) 
			printf("%4d", gradeTable[i][j]); 
		printf("\n"); 
	}

	printf("b)\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (i != 4 && j != 3) // �� �л��� ���� ���ϱ�
				sum1 += gradeTable[i][j];
			if (i != 4 && j == 3) // �� �л��� ���� �迭�� �ֱ�
			{
				gradeTable[i][j] = sum1;
				sum1 = 0;
			}
		}
	}

	for (j = 0; j < 3; j++) // ���� ���� ���ϱ�
	{
		for (i = 0; i < 4; i++)
			sum2 += gradeTable[i][j];		
		gradeTable[i][j] = sum2; // ���� ���� �迭�� �ֱ�
		sum2 = 0;
	}
	
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%4d", gradeTable[i][j]);
		printf("\n");
	}
}