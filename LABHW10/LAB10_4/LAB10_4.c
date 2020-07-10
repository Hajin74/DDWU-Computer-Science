// 20200988 컴과 유하진
#include <stdio.h>
void printSum1ToN(int a);

int main(void)
{
	int n;

	printf("Enter a number : ");
	scanf_s("%d", &n);

	printSum1ToN(n);
	return 0;
}

void printSum1ToN(int a)
{
	int sum = 0;
	int i;
	
	for (i = 1; i <= a; i++)
	{
		sum += i;
	}

	printf("1~%d의 합 : %d", a, sum);
	return;
}