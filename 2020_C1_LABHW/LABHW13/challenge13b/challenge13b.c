// 20200988 ��ǻ���а� ������
#include <stdio.h>

int main(void)
{
	char word[81];
	int i, j = 0;
	int number = 0 , sum = 0;

	printf("Enter a word :");
	scanf_s("%s", word, 81);

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= '0' && word[i] <= '9')
		{
			number = word[i] - '0'; // �ƽ�Ű�� �̿�

			for (j = i; word[j + 1] >= '0' && word[j + 1] <= '9'; j++) // ���� �迭�� �����̸�
			{
				number = number * 10 + (word[j + 1] - '0') ;
				i++;
			}
			sum += number;
		}
	}

	printf("���� ���� ���� ���� %d\n", sum);

	return 0;
}