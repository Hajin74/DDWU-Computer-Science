// 20200988 ������
#include <stdio.h>

int main(void)
{
	int number;
	int answer = 0;
	printf("Enter a number: ");
	scanf_s("%d", &number);

	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
			answer = 1;
	}

	if (answer == 1)
		printf("�Ҽ��� �ƴϴ�");
	else
		printf("�Ҽ��̴�");
}