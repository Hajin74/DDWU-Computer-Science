// 20200988 ��ǻ���а� ������
#include <stdio.h>

int main(void)
{
	int score;
	int total = 0;

	while (1)
	{
		printf("Enter a score(-1 for exit): ");
		scanf_s("%d", &score);

		if (score == -1)
			break;

		total += score;
	}

	printf("The total is %d\n", total);
}