// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>

int main(void) {
	char str[81];
	char ch;
	int i;
	int times = 0;

	printf("Enter a String: ");
	scanf("%s", str);

	printf("Enter a character: ");
	scanf(" %c", &ch); // ���������� %c�տ� ������ �� ���ۿ� ������ Enter�� �����ϰ� ��.

	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == ch)
			times++;
	}

	printf("'%c' is appeared %d times\n", ch, times);
}