// 20200988 À¯ÇÏÁø
#include <stdio.h>

int main(void) {
	char operator;
	int first, second;
	int result;

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

	printf("%d %c %d = %d \n", first, operator, second, result);
}