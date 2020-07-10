// 20200988 컴퓨터학과 유하진
#include <stdio.h>

int main(void)
{
	char word[81], newWord[81];
	int i, length, j = 0;

	printf("Enter one word : ");
	scanf_s("%s", word, 81);

	for (i = 0; word[i] != '\0'; i++);
	length = i;

	for (i = length - 1; i >= 0; i--)
		newWord[j++] = word[i];
	newWord[j] = '\0';

	printf("The reversed word is %s\n", newWord);
}