// 20200988 ������
#include <stdio.h>

int main(void)
{
	int number;
	int answer;
	int score = 0;

	printf("�� ���� �����Ͻðڽ��ϱ�? : ");
	scanf_s("%d", &number);

	for (int i = 1; i <= 9; i++)
	{ 
		printf("%d * %d = ", number, i);
		scanf_s("%d", &answer);

		if (answer == number * i)
			score++;
	}

	printf("%d���� �����ܿ��� %d���� �¾ҽ��ϴ�.", number, score);
}