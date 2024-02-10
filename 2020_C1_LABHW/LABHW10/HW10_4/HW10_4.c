// 20200988 컴퓨터학과 유하진
#include <stdio.h>
void printSumMTon(num1, num2);

int main(void)
{
	int m, n;

	printf("Enter two numbers : ");
	scanf_s("%d %d", &m, &n);

	printSumMTon(m, n);
	return 0;
}

void printSumMTon(num1, num2)
{
	int i;
	int sum = 0;
	
	for (i = num1; i <= num2; i++)
		sum += i;
	

	printf("%d ~ %d의 합 : %d", num1, num2, sum);
	return;
}