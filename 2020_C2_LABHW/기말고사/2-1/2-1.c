// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int strToNum(char* s) // �� �Լ��� ����
{ //s = &str[0]
	int i, flag = 1, num;
	int length = strlen(s);
	char *ss = s;

	for (i = 0; i < length; i++) {
		if (isalpha(*s)) {
			flag = 0;
			return flag;
		}
		
		s++;
	}
	
	if (flag == 1) {
		num = atoi(ss);
		return num;
	}
}

int main(void) // main�� ����
{
	char str[50];

	scanf("%s", str);
	printf("%d\n", strToNum(str));
}

