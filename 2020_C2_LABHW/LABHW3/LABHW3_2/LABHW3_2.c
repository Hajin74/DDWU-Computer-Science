// ��ǻ���а� 20200988 ������
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		arr[i] = rand() % 100;
	return;
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void printMinMax(int arr[], int size)
{
	// �ּҰ�, �ִ밪�� ã�Ƽ� �ε����� �Բ� ����ϵ��� �����϶�
	int i, min = 100, max = -1, min_index = -1, max_index = -1;

	for(i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			min_index = i;
		}
		if (arr[i] > max)
		{
			max = arr[i];
			max_index = i;
		}
	}

	printf("�ִ밪 : �ε��� = %d, �� = %d\n", max_index, max);
	printf("�ּҰ� : �ε��� = %d, �� = %d\n", min_index, min);
}

int main(void) // �������� ����
{
	int a[10];

	//srand(time(NULL));

	srand(100); // �������� �³� ���� ���ؼ� seed�� 100���� ����

	initArray(a, 10);
	printArray(a, 10);
	printMinMax(a, 10);

	return 0;
}