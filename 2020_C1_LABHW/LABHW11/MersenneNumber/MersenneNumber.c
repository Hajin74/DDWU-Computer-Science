// 20200988 컴과 유하진
#include <stdio.h>

int twoToThePower(int n)
{
	int i, sum = 2;

	for (i = 1; i < n; i++)
	{
		sum *= 2;
	}

	return sum;
}

int isPrime(int x)
{
	int i, num = x - 1;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			return 0;
	}

	return 1;
}

int main(void)
{
	int num;
	int power, prime;
	int i;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	for (i = 2; i <= num; i++)
	{
		power = twoToThePower(i);
		prime = isPrime(power);

		if (prime == 1 && power - 1 != -1)
			printf("(2^%d - 1) = %d은 메르센 소수이다\n", i, power - 1);
	}
}

/* order 가 31부터 출력이 안됨.
int twoToThePower(int n)
{
	int i, sum = 2;

	for(i = 2; i <= n; i++)
		sum *= 2;

	isPrime(sum);
}

int isPrime(int x)
{
	int i, num = 1, flag = 1;
	int order;

	for(i = 2; i < (x - 1); i++)
	{
		if((x - 1) % i == 0)
		{
			flag = 0;
			break;
		}
	}

	order = x;
	while(order > 2)
	{
		order = order / 2;
		num++;
	}

	if(flag == 1)
	{
		if((x - 1) != -1)
			printf("(2 ^ %d - 1) = %d는 소수입니다.\n", num,  x - 1);
	}
}

int main(void)
{
	int number, i;

	printf("Enter a number : ");
	scanf("%d", &number);

	for(i = 2; i <= number; i++)
		twoToThePower(i);
}
*/

/* 이게 맞는 코드
int twoToThePower(int n)
{
	int i, sum = 2;

	for(i = 2; i <= n; i++)
		sum *= 2;

	return sum;
}

int isPrime(int x)
{
	int i, flag = 1;

	for(i = 2; i < (x - 1); i++)
	{
		if((x - 1) % i == 0)
		{
			flag = 0;
			break;
		}
	}

	return flag;
}

int main(void)
{
	int number, i, power, prime;

	printf("Enter a number : ");
	scanf("%d", &number);

	for(i = 2; i <= number; i++)
	{
		power = twoToThePower(i);
		prime = isPrime(power);

		if((prime == 1) && (power - 1) != -1)
			printf("(2^%d - 1) = %d은 메르센 소수이다.\n", i, power - 1);
	}
}
*/

/*
int twoToThePower(int n)
{
	int i, sum = 2;

	for(i = 1; i < n; i++)
	{
		sum *= 2;
	}

	return sum;
}

int isPrime(int x)
{
	int i, num = x - 1;

	for(i = 2; i < num; i++)
	{
		if(num % i == 0)
			return 0;
	}

	return 1;
}

int main(void)
{
	int num;
	int power, prime;
	int i;

	printf("Enter a number : ");
	scanf("%d", &num);

	for(i = 2; i <= num; i++)
	{
		power = twoToThePower(i);
		prime = isPrime(power);

		if(prime == 1 && power - 1 != -1)
			printf("(2^%d - 1) = %d은 메르센 소수이다\n", i, power - 1);
	}
}
*/

/*
int twoToThePower(int n)
{
	int i, sum = 2;

	for (i = 2; i <= n; i++)
	{
		sum *= 2;
	}

	isPrime(sum, n);
}


int isPrime(int x, int o) // 매개변수를 1개로 해야됨
{
	int sum = x - 1;
	int i;
	int prime = 1;

	for (i = 2; i < sum; i++)
	{
		if (sum % i == 0)
		{
			prime = 0;
			break;
		}
	}

	if (prime == 1 && sum > 0)
		printf("(%d ^ %d - 1 )= %d 은 메르센 소수이다.\n", 2, o, sum);

}

int main(void)
{
	int number, i;

	printf("Enter a number : ");
	scanf_s("%d", &number);

	for (i = 2; i <= number; i++)
	{
		twoToThePower(i);
	}
}
*/

