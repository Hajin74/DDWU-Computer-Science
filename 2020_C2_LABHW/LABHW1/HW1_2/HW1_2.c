// 20200988 ��ǻ���а� ������
#include <stdio.h>

int main(void)
{
	int i, change, num;
	int coins[4] = { 500, 100, 50, 10 };

	printf("Enter the amount of change : ");
	scanf_s("%d", &change);

	for (i = 0; i < 4; i++)
	{
		num = change / coins[i];
		printf("%d coin : %d\n", coins[i], num);
		change -= coins[i] * num;
	}

	return 0;
}