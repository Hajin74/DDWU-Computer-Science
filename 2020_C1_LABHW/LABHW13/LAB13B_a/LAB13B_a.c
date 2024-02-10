// 20200988 컴퓨터학과 유하진
#include <stdio.h>

int main(void)
{
	char word[11];
	int i;

	printf("Enter a word(<= 10 chars) :");
	scanf_s("%s", word, 11);

	for (i = 0; word[i] != '\0'; i++);
	
	for (i = 0; word[i] != '\0'; i++)
	{
		if(i % 2 == 0)
			printf("%c", word[i]);
	}

}