// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void) {
	char c;

	printf("Enter characters(^Z for exit):\n");
	while ((c = fgetc(stdin)) != EOF) {
		if (islower(c))
			c = toupper(c);
		else if (isupper(c))
			c = tolower(c);

		fputc(c, stdout);
	}

	return 0;
}