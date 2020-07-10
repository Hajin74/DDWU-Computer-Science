// 20200988 À¯ÇÏÁø
#include <stdio.h>

int main(void)
{
	char operator;
	int first, second;
	int result;
	int answer;

	printf("Enter an operator: ");
	scanf_s("%c", &operator);
	printf("Enter an first operand: ");
	scanf_s("%d", &first);
	printf("Enter an second operand: ");
	scanf_s("%d", &second);

	switch (operator)
	{
	case '+':
		result = first + second;
		break;
	case '-':
		result = first - second;
		break;
	case '*':
		result = first * second;
		break;
	case '/':
		result = first / second;
		break;
	}

	printf("%d %c %d = ", first, operator, second);
	scanf_s("%d", &answer);

	if (result == answer)
		printf("Right answer\n");
	else
	{
		printf("Wrong!\n");
		printf("%d is the right anwser\n", result);
	}
	
}