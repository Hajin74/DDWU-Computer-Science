// 20200988 컴퓨터학과 유하진
#include <stdio.h>

int main(void)
{
	int incomes[12] = {11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66};
	int income, i, day;
	int flag = 0;

	printf("탐색할 수입은?");
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
		printf("수입 %d을 갖는 첫번째 달은 %d월 입니다\n", income, day);
	else
		printf("수입 %d을 갖는 달은 없습니다\n", income);

	return 0;
}

/*
int main(void)
{
	int incomes[12] = {11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66};
	int searchKey, i;

	printf("탐색할 수입은? ");
	scanf("%d", &searchKey);

	for(i = 0; i < 12; i++)
	{
		if(searchKey == incomes[i])
			break;
	}

	if(i == 12)
		printf("수입 %d을 갖는 달은 없습니다\n", searchKey);
	else
		printf("수입 %d을 갖는 첫 번째 달은 %d월입니다.\n", incomes[i], i + 1);
}
*/