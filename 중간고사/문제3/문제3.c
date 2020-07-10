// 20200988 À¯ÇÏÁø
#include <stdio.h>

int main(void)
{
	int num, i;
	int len = 1;

	scanf_s("%d", &num);

	while (num >= 10)
	{
		num = num / 10;
		len++;
	}

	printf("%d\n", len);
}