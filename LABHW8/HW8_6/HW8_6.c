// 20200988 ������
#include <stdio.h>

int main(void)
{
	int number;
	long long total = 1;
	printf("Enter a number :");
	scanf_s("%d", &number);

	for (int i = 1; i <= number; i++)
	{
		total *= i;
		printf("%d! = %lli\n", i, total); // %lli : long long ������ 10������ �����
	}
}