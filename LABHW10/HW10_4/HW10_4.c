// 20200988 ��ǻ���а� ������
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
	

	printf("%d ~ %d�� �� : %d", num1, num2, sum);
	return;
}