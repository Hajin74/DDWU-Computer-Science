// 20200988 ��ǻ���а� ������
#include <stdio.h>

int main(void)
{
	int incomes[12] = {11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66};
	int income, i, day;
	int flag = 0;

	printf("Ž���� ������?");
	scanf_s("%d", &income);

	for (i = 0; i < 12; i++)
	{
		if (incomes[i] == income)
		{
			day = i + 1;
			flag = 1;
			break;
		}
	}

	if (flag == 1)
		printf("���� %d�� ���� ù��° ���� %d�� �Դϴ�\n", income, day);
	else
		printf("���� %d�� ���� ���� �����ϴ�\n", income);

	return 0;
}

/*
int main(void)
{
	int incomes[12] = {11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66};
	int searchKey, i;

	printf("Ž���� ������? ");
	scanf("%d", &searchKey);

	for(i = 0; i < 12; i++)
	{
		if(searchKey == incomes[i])
			break;
	}

	if(i == 12)
		printf("���� %d�� ���� ���� �����ϴ�\n", searchKey);
	else
		printf("���� %d�� ���� ù ��° ���� %d���Դϴ�.\n", incomes[i], i + 1);
}
*/