// 20200988 컴과 유하진
#include <stdio.h>
int pow(int a, int b);

int main(void)
{
	int x = 5, i;
	
	for (i = 0; i <= 10; i++)
		printf("%d ^ %d == %d\n", x, i, pow(x, i));
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