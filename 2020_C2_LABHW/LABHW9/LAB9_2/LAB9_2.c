// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // LAB9_2a
#include <string.h>

int main(void)
{
	char str2[5];

	printf("���ڿ��� �Է��ϼ���:");
	fgets(str2, sizeof(str2), stdin);

	printf("�Է��� ���ڿ��� %s\n", str2);
	printf("���ڿ��� ũ��� %d\n", strlen(str2));
}

/*
char str1[5];

	printf("���ڿ��� �Է��ϼ���:");
	gets(str1);

	printf("�Է��� ���ڿ��� %s\n", str1);
	printf("���ڿ��� ũ��� %d\n", strlen(str1));
*/