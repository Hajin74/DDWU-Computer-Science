// ��ǻ���а� 20200988 ������
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10 // ������ ��� ����
void selectionSort(int list[], int size);

int main(void)
{
	int arr[10];
	int i;

	srand(time(NULL));

	printf("�߻��� ���� :\t");
	for (i = 0; i < SIZE; i++) 
	{
		arr[i] = rand() % 100; // ���� �߻� ��Ű�� �迭�� ����
		printf("%2d ", arr[i]); // ���� ���
	}

	selectionSort(arr, SIZE);
}

void selectionSort(int list[], int size) // ���� ����
{
	int i, j, temp, minIndex;

	for (i = 0; i < size - 1; i++)
	{
		minIndex = i;
		
		for (j = i + 1; j < size; j++) // �ּڰ� ã��
		{
			if (list[j] < list[minIndex])
				minIndex = j;
		}

		temp = list[i]; // �ּڰ��� �迭 ù ���� ��ȯ
		list[i] = list[minIndex];
		list[minIndex] = temp;
	}

	printf("\n���� ��:\t"); // ���
	for (i = 0; i < size; i++)
		printf("%2d ", list[i]);
	printf("\n");
}