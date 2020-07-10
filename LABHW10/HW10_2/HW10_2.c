// 20200988 컴과 유하진
#include <stdio.h>
void findNPrintBiggest(int a, int b, int c);

int main(void)
{
	int n1, n2, n3;

	printf("Enter three numbers: ");
	scanf_s("%d %d %d", &n1, &n2, &n3);

	findNPrintBiggest(n1, n2, n3);
	return 0;
}

void findNPrintBiggest(int a, int b, int c)
{
	int biggest;

	if (a >= b && a >= c)
		biggest = a;
	else if (b >= a && b >= c)
		biggest = b;
	else if (c >= a && c >= b)
		biggest = c;

	printf("The Biggest number is %d.\n", biggest);
	return;
}