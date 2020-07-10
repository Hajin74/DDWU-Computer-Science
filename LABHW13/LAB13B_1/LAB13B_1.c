// 20200988 컴퓨터학과 유하진
#include <stdio.h>

int main(void)
{
	char str[80];
	int i, length;

	printf("Enter a string : ");
	scanf_s("%s", str, 80);

	for (i = 0; str[i] != '\0'; i++);
	length = i;

	for (i = length - 1; i >= 0; i--)
		printf("%c\n", str[i]);
}