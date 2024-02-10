// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> //문자처리 함수 사용을 위해

void main()
{
	char c;

	printf("Enter characters(^Z for exit):\n");
	
	while ((c = getchar()) != EOF) { // 한 문자씩 받는중
		if (islower(c))
			c = toupper(c);
		else if (isupper(c))
			c = tolower(c);

		putchar(c);
	}
	
	return 0;
}