// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void stringCopy(char* s1, const char* s2)// *s2�� �ٲ��������Ƿ� const�� ���ϼ�
{
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
}

char stringLength(char c[]) {
	int i;

	for (i = 0; c[i] != '\0'; i++);
	
	return i;
}

int main(void)
{
	char copied[500];
	char data1[] = "abcde";
	char data2[] = "ABCDEFGH";

	stringCopy(copied, data1);
	printf("ù��° ������ copied�� ���̿� ���� %d�� %s�̴�.\n", stringLength(copied), copied);
	stringCopy(copied, data2);
	printf("�ι�° ������ copied�� ���̿� ���� %d�� %s�̴�.\n", stringLength(copied), copied);
}