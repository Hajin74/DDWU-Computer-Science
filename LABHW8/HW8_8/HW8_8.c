// 20200988 유하진
#include <stdio.h>

int main(void)
{
	int number;
	int answer = 0;
	printf("Enter a number: ");
	scanf_s("%d", &number);

	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
			answer = 1;
	}

	if (answer == 1)
		printf("소수가 아니다");
	else
		printf("소수이다");
}