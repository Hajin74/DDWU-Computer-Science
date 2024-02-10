// ��ǻ���а� 20200988 ������
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int initTable(int arr[][5], int rowSize);
int totalTable(int arr[][5], int rowSize);
int printTable(int arr[][5], int rowSize);

int main(void)
{
	int table[3][5];
	int i, j;
	int total = 0;

	srand(time(NULL));

	initTable(table, 3);
	printf("�߻��� ������ ����� %d�Դϴ�\n", totalTable(table, 3) / 15);
	printTable(table, 3); // ȣ��

	return 0;
}

int initTable(int arr[][5], int rowSize)
{
	int i, j;

	for (i = 0; i < rowSize; i++)
	{
		for (j = 0; j < 5; j++)
			arr[i][j] = rand() % 100;
	}
}

int totalTable(int arr[][5], int rowSize)
{
	int i, j, sum = 0;

	for (i = 0; i < rowSize; i++)
	{
		for (j = 0; j < 5; j++)
			sum += arr[i][j];
	}

	return sum;
}

int printTable(int arr[][5], int rowSize)
{
	int i, j;

	for (i = 0; i < rowSize; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%5d", arr[i][j]);
		printf("\n");
	}
}