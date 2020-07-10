#include <stdio.h>

int is_word_in_word(char w1[], int start, char w2[])
{
	int i, j = 0;

	for (i = 0; w2[i] != '\0'; i++)
	{
		if (w1[start++] != w2[i])
			return 0;
	}

	return 1;

}

int main(void)
{
	char s1[20], s2[20];
	int i, j;

	scanf_s("%s", s1, 20);
	scanf_s("%s", s2, 20);

	for (i = 0; s1[i] != '\0'; i++)
		printf("%d", is_word_in_word(s1, i, s2));
}