#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <time.h>

void reverse(char src_s[], char s[]) {
	int i, size;

	for (i = 0; src_s[i] != '\0'; i++);
	size = i;

	for (i = 0; i < size; i++) {
		s[i] = src_s[size - 1 - i];
	}
	s[size] = '\0';
}

int main(void)
{
	char src_s[101];
	char s[101];

	scanf("%s", src_s);

	reverse(src_s, s);

	printf("%s\n", s);
}