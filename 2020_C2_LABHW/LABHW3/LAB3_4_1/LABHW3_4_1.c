// ��ǻ���а� 20200988 ������
#include <stdio.h>
int printSet(int arr[], int size);

int main(void)
{
	int set[5];
	int element;
	int i = 0;

	while (i < 5)
	{
		printf("�������տ� �߰��� ���� : ");
		scanf_s("%d", &element);

		set[i++] = element;
		printSet(set, i);
	}
}

int printSet(int arr[], int size)
{
	int j;

	printf("{");
	for (j = 0; j < size; j++)
	{
		if(j == size - 1)
			printf(" %d ", arr[j]);
		else
			printf(" %d,", arr[j]);
	}
	printf("}\n");

}