#pragma warning(disable: 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_cycle_number(int n) {
	static int length = 0;

	printf("%d ", n);
	length++;

	if (n == 1)
		return 1;
	else {
		if (n % 2 == 0)
			get_cycle_number(n / 2);
		else
			get_cycle_number(n * 3 + 1);
	}

	return length;
}

int main(void) {
	int n;
	int length;

	scanf("%d", &n);

	length = get_cycle_number(n);
	printf("\n±æÀÌ´Â %d\n", length);
}