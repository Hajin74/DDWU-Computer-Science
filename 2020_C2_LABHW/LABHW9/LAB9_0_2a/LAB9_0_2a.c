// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> //����ó�� �Լ� ����� ����

void main()
{
	char c;

	printf("Enter characters(^Z for exit):\n");
	
	while ((c = getchar()) != EOF) { // �� ���ھ� �޴���
		if (islower(c))
			c = toupper(c);
		else if (isupper(c))
			c = tolower(c);

		putchar(c);
	}
	
	return 0;
}