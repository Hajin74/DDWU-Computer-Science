#include <stdio.h>

int cal_odd_digit(int num)
{
	int i;
	int sum = 0;

	while (num > 0)
	{
		if (num % 2 != 0)
		{
			sum += num % 10;
			num = num / 10;
		}
		else if (num % 2 == 0)
		{
			num = num / 10;
		}
	}
	
	return sum;
}

int main(void)
{
	int n;

	scanf_s("%d", &n);
	n *= 3;

	printf("%d\n", cal_odd_digit(n));
}