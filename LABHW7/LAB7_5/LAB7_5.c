//20200988 유하진
#include <stdio.h>

int main(void) 
{
	int num, i;
	int sum = 0;
	int total = 1;

	printf("Enter a number :");
	scanf_s("%d", &num);
	
	i = 1;
	while (i <= num)
	{
		sum += 3;
		total *= 3;
		i++;
	}

	printf("3을 %d번 더한 값은 %d이다.\n", num, sum);
	printf("3을 %d번 곱한 값은 %d이다.\n", num, total);

	return 0;
}