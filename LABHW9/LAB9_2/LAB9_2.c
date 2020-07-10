// 20200988 컴퓨터학과 유하진
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int num1, num2;
	int answer, yourAnswer;
	char ch;

	srand(time(NULL));

	do
	{
		num1 = rand() % 100;
		num2 = rand() % 100;

		printf("%d + %d = ", num1, num2);
		scanf_s("%d", &yourAnswer);

		answer = num1 + num2;

		if (answer == yourAnswer)
			printf("Your answer is right. \n");
		else
		{
			printf("Your answer is wrong. \n");
			printf("%d is the right answer\n", answer);
		}

		while (getchar() != 'n');
		printf("Do you want to play again?(y/n)");
		scanf_s("%c", &ch);
	} while (ch == 'y');

	return 0;
}