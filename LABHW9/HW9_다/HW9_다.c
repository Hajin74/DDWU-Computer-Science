// 20200988 컴과 유하진
#include <stdio.h>
int cycleNb(int num);

int main(void)
{
	int n;

	printf("Enter a number : ");
	scanf_s("%d", &n);

	printf("\n길이는 %d\n", cycleNb(n));
}

int cycleNb(int num)
{
	int length = 0;

	while (num != 1)
	{
		printf("%d ", num);
		length++;

		if (num % 2 == 0)
			num = num / 2;
		else if (num % 2 == 1)
			num = num * 3 + 1;
	}

	printf("1");
	length++;

	return length;
}