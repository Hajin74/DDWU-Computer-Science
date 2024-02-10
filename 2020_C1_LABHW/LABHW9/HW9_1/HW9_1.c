// 20200988 컴퓨터학과 유하진
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int user_answer, right_answer;
	int num1, num2;
	int op;
	char ch;

	do
	{
		num1 = rand() % 100;
		num2 = rand() % 100;
		op = rand() % 4;

		switch (op)
		{
			case 0 :
				printf("%d + %d = ", num1, num2);
				scanf_s("%d", &user_answer);
				right_answer = num1 + num2;
				break;
			case 1 :
				printf("%d - %d = ", num1, num2);
				scanf_s("%d", &user_answer);
				right_answer = num1 - num2;
				break;
			case 2 :
				printf("%d * %d = ", num1, num2);
				scanf_s("%d", &user_answer);
				right_answer = num1 * num2;
				break;
			case 3 :
				printf("%d / %d = ", num1, num2);
				scanf_s("%d", &user_answer);
				right_answer = num1 / num2;
				break;
		}

		if (user_answer == right_answer)
			printf("Your answer is right.\n");
		else
		{
			printf("Your answer is wrong.\n");
			printf("%d is the right answer.\n", right_answer);
		}

		while (getchar() != '\n');

		printf("Do you want to play again? (y/n) ");
		scanf_s("%c", &ch);

	} while (ch == 'y');
}