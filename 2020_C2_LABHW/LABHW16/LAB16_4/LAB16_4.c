// ��ǻ���а� 20200988 ������
#include <stdio.h>

int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j, total = 0, max, maxTotal = 0;
	double average;

	// ��, ��
	printf("�迭 test�� ������Ʈ�� ����մϴ�.\n\n");
	for (i = 0; i < 4; i++)
	{
		printf("%d��° row:", i + 1);
		for (j = 0; j < 3; j++)
		{
			printf("%4d", test[i][j]);
		}
		printf("\n");
	}

	// ��
	printf("\n��)\n");
	printf("�迭 test�� ������Ʈ�� ����մϴ�.\n\n");

	for (i = 0; i < 4; i++) // �Է�
		test[i][2] = -1;

	for (i = 0; i < 4; i++) // ���
	{
		printf("%d��° row:", i + 1);
		for (j = 0; j < 3; j++)
		{
			printf("%4d", test[i][j]);
		}
		printf("\n");
	}

	// ��
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
			total += test[i][j];
	}

	average = (double)total / 12;
	printf("\n��)\n");
	printf("Total is %d\n", total);
	printf("Average is %.2lf\n", average);
	
	// ��
	printf("\n��)\n");
	for (i = 0; i < 4; i++)
	{
		max = -1;
		printf("%d��° row������ �ִ�:", i + 1);
		for (j = 0; j < 3; j++)
		{
			if (max < test[i][j])
				max = test[i][j];
		}
		maxTotal += max;
		printf(" %d\n", max);
	}
	printf("�ִ��� ��: %d\n", maxTotal);
}