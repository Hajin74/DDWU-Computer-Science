#include <stdio.h>

int main(void)
{
	int firstNumber, secondNumber;

	printf("Enter the first number : ");
	scanf_s("%d", &firstNumber);
	printf("Enter the second number : ");
	scanf_s("%d", &secondNumber);

	printf("%d + %d = %d\n", firstNumber, secondNumber, firstNumber + secondNumber);
	printf("%d - %d = %d\n", firstNumber, secondNumber, firstNumber - secondNumber);
	printf("%d * %d = %d\n", firstNumber, secondNumber, firstNumber * secondNumber);
	printf("%d / %d = %d\n", firstNumber, secondNumber, firstNumber / secondNumber);
}