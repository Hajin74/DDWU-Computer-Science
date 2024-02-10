// 20200988 컴과 유하진
#include <stdio.h>
void print_divisor(int a);

int main(void)
{
	int number;
	printf("Enter a number : ");
	scanf_s("%d", &number);
	print_divisor(number);
	return 0;
}

void print_divisor(int a)
{
	int i;
	for (i = 1; i <= a; i++)
	{
		if (a % i == 0)
			printf("%d\n", i);
	}
	return;
}