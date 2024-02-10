#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_cycle_number(int n) {
	int sum = 1;

	while (n > 1) {
		printf("%d ", n);
		sum++;

		if (n % 2 == 0)
			n = n / 2;
		else
			n = n * 3 + 1;
	}
	printf("1\n");
	printf("±æÀÌ´Â %d", sum);
}

int main(void) {
	int num = 22;

	get_cycle_number(num);
}