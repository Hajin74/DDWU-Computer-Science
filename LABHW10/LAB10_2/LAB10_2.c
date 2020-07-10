// 20200988 컴과 유하진
#include <stdio.h>
void findNPrintBig(int n1, int n2);

int main(void)
{
	int num1, num2;
	printf("Enter two numbers: ");
	scanf_s("%d %d", &num1, &num2);
	findNPrintBig(num1, num2);
	return 0;
}

void findNPrintBig(int n1, int n2)
{
	int big;

	if (n1 > n2)
		big = n1;
	else
		big = n2;

	printf("Big number is %d.\n", big);
	return;
}