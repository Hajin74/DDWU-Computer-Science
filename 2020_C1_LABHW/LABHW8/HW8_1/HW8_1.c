// 20200988 유하진
#include <stdio.h>

int main(void)
{
	int number;
	int answer;
	int score = 0;

	printf("몇 단을 연습하시겠습니까? : ");
	scanf_s("%d", &number);

	for (int i = 1; i <= 9; i++)
	{ 
		printf("%d * %d = ", number, i);
		scanf_s("%d", &answer);

		if (answer == number * i)
			score++;
	}

	printf("%d단의 구구단에서 %d개를 맞았습니다.", number, score);
}