#pragma warning(disable: 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_cycle_number(int n) {
	int length = 1;

	while (n > 1) {
		printf("%d ", n);
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
		
		length++;
	}
	printf("%d\n", n);

	return length;
}

int main(void) {
	int n;
	int length;

	scanf("%d", &n);

	length = get_cycle_number(n);
	printf("±æÀÌ´Â %d\n", length);
}