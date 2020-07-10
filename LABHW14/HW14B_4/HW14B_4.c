// 20200988 컴퓨터학과 유하진
#include <stdio.h> 
int calculatePoint(char s[]);

int main(void)
{
	char str[20];

	printf("단어를 입력하세요(빈칸없이):"); 
	scanf_s("%s", str, 20);

	printf("점수는 %d\n", calculatePoint(str));
}

int calculatePoint(char s[])
{
	int i, sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			sum += s[i] - 64;
		else if (s[i] >= 'a' && s[i] <= 'z')
			sum += s[i] - 96;
	}
	return sum;
}