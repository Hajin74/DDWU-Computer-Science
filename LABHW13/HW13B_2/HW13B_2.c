// 20200988 ��ǻ���а� ������
#include <stdio.h>

int main(void)
{
	char word[100];
	int i, sum = 0;

	printf("Enter one word : ");
	scanf_s("%s", word, 100);

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] > 48 && word[i] < 65)
			sum += word[i] - 48;
	}

	printf("�ȿ� �ִ� ���ڵ��� ���� %d\n", sum);
}