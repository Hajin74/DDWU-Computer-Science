// 20200988 ��ǻ���а� ������
#include <stdio.h>
#define MAX_STRING 81

int main(void)
{
	char str[MAX_STRING];
	int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
	int i;

	printf("���ڿ� �Է� (���ڼ� %d ����) : ", MAX_STRING);
	scanf_s("%s", str, 81);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'A' || str[i] == 'a')
			countA++;
		else if (str[i] == 'E' || str[i] == 'e')
			countE++;
		else if (str[i] == 'I' || str[i] == 'i')
			countI++;
		else if (str[i] == 'O' || str[i] == 'o')
			countO++;
		else if (str[i] == 'U' || str[i] == 'u')
			countU++;
	}

	printf("a or A: %d��\n", countA);
	printf("e or E: %d��\n", countE);
	printf("i or I: %d��\n", countI);
	printf("o or O: %d��\n", countO);
	printf("u or U: %d��\n", countU);

	return 0;
}