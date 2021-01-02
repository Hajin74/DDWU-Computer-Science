// 20200988 컴퓨터학과 유하진
#include <stdio.h>
int get_cycle_number(int n);

int main(void)
{
	int num;

	scanf_s("%d", &num);
	get_cycle_number(num);
}

int get_cycle_number(int n)
{
	int i, idx = 1;

	printf("%d ", n);
	while (n > 1)
	{
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;

		printf("%d ", n);
		idx++;
	}

	return idx;
}