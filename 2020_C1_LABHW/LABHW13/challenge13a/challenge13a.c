// 20200988 ��ǻ���а� ������
#include <stdio.h>

int main(void)
{
	char word1[81], word2[81];
	int i, j;
	int isSame = 1;

	printf("Enter the first word : ");
	scanf_s("%s", word1, 81);
	printf("Enter the second word : ");
	scanf_s("%s", word2, 81);

	for (i = 0; word1[i] != '\0'; i++)
	{
		if (word1[i] != word2[i])
		{
			isSame = 0;
			break;
		}
	}

	if (isSame == 0)
		printf("�� �ܾ�� �ٸ���\n");
	else 
		printf("�� �ܾ�� ����\n");

	return 0;
}

/*
int main(void)
{
	char word1[81], word2[81];
	int length1, length2;
	int i;

	printf("Enter the first word : ");
	scanf("%s", word1);
	printf("Enter the second word : ");
	scanf("%s", word2);

	for(i = 0; word1[i] != '\0'; i++);
	length1 = i;

	for(i = 0; word2[i] != '\0'; i++);
	length2 = i;

	if(length1 == length2)
	{
		for(i = 0; i < length1; i++)
		{
			if(word1[i] != word2[i])
				break;
		}
	}

	if(i == length1)
		printf("�� �ܾ�� ����\n");
	else
		printf("�� �ܾ�� �ٸ���\n");

	return 0;
}
*/