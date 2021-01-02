// 컴퓨터학과 20200988 유하진
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

	printf("합은 %d\n", sumList(list, 10));

	printf("가장 큰 수는 %d\n", maxList(list, 10));

	printf("탐색할 값은? ");
	scanf_s("%d", &value);

	if (indexSearch(list, 10, value) == -1)
		printf("없다.\n");
	else 
		printf("%d번째에 있다.\n", indexSearch(list, 10, value));
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