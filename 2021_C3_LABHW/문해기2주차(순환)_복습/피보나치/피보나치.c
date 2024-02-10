#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int f(int n) {
	if (n == 1)
		return 0;
	if (n == 2)
		return 1;
	return f(n - 1) + f(n - 2);
}

int main(void) {
	int num = 1;

	printf("%d", f(num));
}