// 20200988 ��ǻ���а� ������

#include <stdio.h>

int main(void)
{
	int num[5], i, total = 0, average;

	for (i = 0; i < 5; i++)
	{
		printf("Enter %dth number : ", i + 1);
		scanf_s("%d", &num[i]);
		total += num[i];
	}

	average = total / 5;
	printf("------------------------------------------\n");
	printf("������ %d\n", total);
	printf("����� %d\n", average);
	printf("------------------------------------------\n");

	for (i = 0; i < 5; i++)
		printf("array[%d] : %d\n", i, num[i]);

	return 0;
}