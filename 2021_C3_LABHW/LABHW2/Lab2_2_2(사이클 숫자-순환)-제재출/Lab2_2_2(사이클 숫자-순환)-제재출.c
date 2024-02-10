#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int length = 0;

int get_cycle_number(int n) {
	printf("%d ", n);
	length++;

	if (n == 1) {
		return 1;
	}
	else {
		if (n % 2 == 0) {
			n /= 2;
			get_cycle_number(n);
		}
		else {
			n = n * 3 + 1;
			get_cycle_number(n);
		}
	}
}

int main(void) {
	int num;

	scanf("%d", &num);

	get_cycle_number(num);
	printf("\n%d\n", length);

}