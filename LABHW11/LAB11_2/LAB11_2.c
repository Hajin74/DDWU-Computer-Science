// 20200988 컴과 유하진
#include <stdio.h>
int pow(int a, int b);

int main(void)
{
	int x, y;

	printf("Enter the number X : ");
	scanf_s("%d", &x);
	printf("Enter the number Y : ");
	scanf_s("%d", &y);

	printf("%d ^ %d == %d", x, y, pow(x, y));
}

int pow(int a, int b)
{
	int sum = 1;
	int i;

	if (b == 0)
		sum = 1;
	else
	{
		for (i = 1; i <= b; i++)
		{
			sum *= a;
		}
	}

	return sum;
}

	