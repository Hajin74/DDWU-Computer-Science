// 20200988 ��ǻ���а� ������
#include <stdio.h> 
int calculatePoint(char s[]);

int main(void)
{
	char str[20];

	printf("�ܾ �Է��ϼ���(��ĭ����):"); 
	scanf_s("%s", str, 20);

	printf("������ %d\n", calculatePoint(str));
}

int calculatePoint(char s[])
{
	int i, sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			sum += s[i] - 64;
		else if (s[i] >= 'a' && s[i] <= 'z')
			sum += s[i] - 96;
	}
	return sum;
}