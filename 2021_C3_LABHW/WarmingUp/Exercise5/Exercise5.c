// 20200988 컴퓨터학과 유하진
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
	scanf(" %c", &ch); // 형식지정자 %c앞에 공백을 둬 버퍼에 남겨진 Enter를 무시하게 함.

	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == ch)
			times++;
	}

	printf("'%c' is appeared %d times\n", ch, times);
}