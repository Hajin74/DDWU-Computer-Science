// 20200988 유하진
#include <stdio.h>

int main(void)
{
	int num;
	int result = 1;
	int i = 0;

	printf("Enter a number: ");
	scanf_s("%d", &num);

	while (i < num)
	{
		result *= (i + 1);
		i++;
	}

	printf("%d의 Factorial 값은 %d이다.\n", num, result);
	return 0;
}