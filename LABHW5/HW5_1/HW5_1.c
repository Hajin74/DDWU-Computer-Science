// HW5_1 20200988 유하진 컴퓨터학과 20학번
#include <stdio.h>

int main(void) 
{
	char ch;

	printf("Enter an upper letter(A-Y) : ");
	scanf_s("%c", &ch);
	printf("Character given is %c(%d)\n", ch, ch);
	printf("The next character is %c(%d)\n", ch + 1, ch + 1);
	printf("The lower case letter is %c(%d)\n", ch + 32, ch + 32);
}