// 20200988 ��ǻ���а� ������
#include <stdio.h>

int main(void)
{
	int number;

	printf("Enter a number(���) :");
	scanf_s("%d", &number);

	while (number < 0)
	{
		printf("Enter a number(���) :");
		scanf_s("%d", &number);
	}
	printf("�Էµ� ����� %d\n", number);
}

/*
int number;

	while(1)
	{
		printf("Enter a number ��� : ");
		scanf("%d", &number);

		if(number > 0)
			break;
	}

	printf("�Էµ� ����� %d ", number);
*/