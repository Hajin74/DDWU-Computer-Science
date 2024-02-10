// ��ǻ���а� 20200988 ������
#include <stdio.h>
int sumList(int arr[], int size);
int maxList(int arr[], int size);
int indexSearch(int arr[], int size, int key);

int main(void)
{
	int list[10] = { 10, 20, 30, 40, 50, 40, 30, 20, 10, 0 };
	int value;
	int keyIndex = -1;
	int i;

	printf("���� %d\n", sumList(list, 10));

	printf("���� ū ���� %d\n", maxList(list, 10));

	printf("Ž���� ����? ");
	scanf_s("%d", &value);

	if (indexSearch(list, 10, value) == -1)
		printf("����.\n");
	else 
		printf("%d��°�� �ִ�.\n", indexSearch(list, 10, value));
}

int sumList(int arr[], int size)
{
	int i, total = 0;
	for (i = 0; i < size; i++)
		total += arr[i];
	return total;
}

int maxList(int arr[], int size)
{
	int i, max = -1;

	for (i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	return max;
}

int indexSearch(int arr[], int size, int key)
{
	int i, index = -1;

	for (i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			index = i + 1;
			break;
		}
	}

	return index;
}