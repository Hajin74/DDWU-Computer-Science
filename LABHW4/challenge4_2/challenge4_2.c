// 20200988 컴퓨터학과 유하진
#include <stdio.h>
int gcd(int x, int y);

int main(void)
{
	int a, b, big, small;
	printf("Enter two numbers: ");
	scanf_s("%d %d", &a, &b);
	if (a < b)
	{
		big = b;
		small = a;
	}
	else
	{
		big = a;
		small = b;
	}
	printf("%d와 % d의 최대공약수는 % d\n", a, b, gcd(big, small));
}

int gcd(int x, int y)
{
	if (y== 0)
		return 0;
	else if (y == 1)
		return 1;
	else
	{
		if (x % y == 0)
			return y;
		else
			gcd(y, x % y);
		
	}

}

/*
#include <stdio.h>
int gcd(int x, int y);

int main(void)
{
	int a, b, big, small;

	printf("Enter two numbers: ");
	scanf_s("%d %d", &a, &b);

	if (a < b)
	{
		big = b;
		small = a;
	}
	else
	{
		big = a;
		small = b;
	}

	printf("%d와 % d의 최대공약수는 % d\n", a, b, gcd(big, small));
}

int gcd(int x, int y)
{
	int temp;

	if (y == 0)
		return x;
	else {
		temp = x;
		x = y;
		y = temp % y;
		return gcd(x, y);
	}
}
*/
