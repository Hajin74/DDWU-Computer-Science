// 20200988 컴퓨터학과 유하진
#include <stdio.h>

int main(void)
{
	char word[81];
	int i, j = 0;
	int number = 0 , sum = 0;

	printf("Enter a word :");
	scanf_s("%s", word, 81);

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= '0' && word[i] <= '9')
		{
			number = word[i] - '0'; // 아스키값 이용

			for (j = i; word[j + 1] >= '0' && word[j + 1] <= '9'; j++) // 다음 배열이 숫자이면
			{
				number = number * 10 + (word[j + 1] - '0') ;
				i++;
			}
			sum += number;
		}
	}

	printf("글자 안의 수의 합은 %d\n", sum);

	return 0;
}