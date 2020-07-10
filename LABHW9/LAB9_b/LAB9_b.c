// 20200988 컴퓨터학과 유하진
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{	
	srand(time(NULL));
	int num1 = rand() % 100;
	int num2 = rand() % 100;
	int answer;

	printf("%d + %d = ", num1, num2);
	scanf_s("%d", &answer);

	if (answer == num1 + num2)
		printf("Your answer is right.\n");
	else
	{
		printf("Your answer is wrong.\n");
		printf("%d is the right answer.\n", num1 + num2);
	}
}