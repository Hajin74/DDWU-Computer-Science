#include <stdio.h>

int main(void)
{
	int num, i;
	int sum = 0;

	i = 1;
	while (i <= 5)
	{
		do
		{
			printf("0���� ū ���� �Է�(%d��°) : ", i);
			scanf_s("%d", &num);
		} while (num <= 0);
		
		sum += num;
		i++;
	}

	printf("�Էµ� ���� �� �� : %d\n", sum);
}