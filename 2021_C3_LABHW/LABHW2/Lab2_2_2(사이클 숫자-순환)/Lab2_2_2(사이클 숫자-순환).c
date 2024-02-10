#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum = 1;

int get_cycle_number(int n) {
	printf("%d ", n);

	if (n == 1)
		return 1;
	else {
		sum++;
		if (n % 2 == 0)
			get_cycle_number(n / 2);
		else
			get_cycle_number(n * 3 + 1);
	}
}

int main(void) {
	int num = 22;

	get_cycle_number(num);
	printf("\n±æÀÌ´Â %d\n", sum);
}