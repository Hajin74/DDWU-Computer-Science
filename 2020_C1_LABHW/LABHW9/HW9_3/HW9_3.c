// 20200988 ��ǻ���а� ������
#include <stdio.h>

int main(void)
{
	int num, i;
	int total = 0;

	i = 1;
	while (i <= 5)
	{
		printf("0���� ū ���� �Է�(%d��°) :", i);
		scanf_s("%d", &num);

		while (num < 0)
		{	
			printf("�Է��� �߸��Ǿ����ϴ�. ");
			printf("0���� ū ���� �Է�(%d��°) :", i);
			scanf_s("%d", &num);
		}

		total += num;
		i++;
	}

	printf("�Էµ� ���� �� �� : %d\n", total);
}