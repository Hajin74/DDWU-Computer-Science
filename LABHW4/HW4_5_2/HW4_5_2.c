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
	printf("%d ", n);

	if (n <= 1)
		return 0;
	else
	{
		if (n % 2 == 0)
			get_cycle_number(n / 2);
		else
			get_cycle_number(n * 3 + 1);
	}
}

/*
#include <stdio.h>
int get_cycle_number(int n);
static int l = 0;

int main(void) {
	int n;

	scanf_s("%d", &n);
	l = get_cycle_number(n);
	printf("\n%d", l);
}

int get_cycle_number(int n) {
	printf("%d  ", n);
	l++;

	if (n % 2 == 0) {
		n /= 2;
	}
	else if (n == 1) {
		return l;
	} else {
		n = n * 3 + 1;
	}

	get_cycle_number(n);

}
*/