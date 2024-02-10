// 20200988 컴퓨터학과 유하진
#include <stdio.h>
#define MAX_STRING 81
#define BOOL int
#define TRUE 1
#define FALSE 0
BOOL isPalindrome(char str[]);

int main(void)
{
	char str[MAX_STRING];

	printf("* Palindrome 체크 \n\n");
	printf("문자열 입력(문자수 %d 이하) : ", MAX_STRING);
	scanf_s("%s", str, 81);

	if (isPalindrome(str))
		printf("\"%s\" is a Palindrome\n\n", str);
	else
		printf("\"%s\" isn't a Palindrome\n\n", str);

	return 0;
}

BOOL isPalindrome(char str[])
{
	int length, i;
	int isSame = 1;

	for (i = 0; str[i] != '\0'; i++);
	length = i;

	for (i = 0; i <= (length - 1) / 2; i++)
	{
		if (str[i] != str[length - 1 - i])
		{
			isSame = 0;
			break;
		}
	}

	if (isSame == 0)
		return FALSE;
	else
		return TRUE;
}

/*
int main(void)
{
	char str[MAX_STRING];

	printf("* Palindrome 체크\n\n");
	printf("문자열 입력(문자수 %d 이하): ", MAX_STRING);
	scanf("%s", str);

	if (isPalindrome(str))
		printf("\"%s\" is a Palindrome\n\n", str);
	else
		printf("\"%s\" isn't a Palindrome\n\n", str);

	return 0;
}


BOOL isPalindrome(char s[])
{
	int i, length;

	for(i = 0; s[i] != '\0'; i++);
	length = i;

	for(i = 0; i < length / 2; i++)
	{
		if(s[i] != s[length - i - 1])
			return FALSE;
	}
	return TRUE;
}
*/