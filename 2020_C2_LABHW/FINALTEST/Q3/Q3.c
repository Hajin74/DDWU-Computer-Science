// 20200988 컴퓨터학과 유하진
#include <stdio.h>
int cal_odd_digit(int num);

int cal_odd_digit(int num)
{
	int digit, odd_count = 0;

	while (num >= 10)
	{
		digit = num % 10;
		num = num / 10;
		if (digit % 2 != 0)
			odd_count += digit;
	}

	if (num % 2 != 0)
		odd_count += num;

	return odd_count;
}

int main(void)
{
	int n;

	scanf_s("%d", &n);
	n *= 3;

	printf("%d\n", cal_odd_digit(n));
}