#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int four_bonacci(int n) {
	if (n <= 4)
		return 1;
	else {
		return four_bonacci(n - 1) + four_bonacci(n - 2) + four_bonacci(n - 3) + +four_bonacci(n - 4);
	}
}

int main(void) {
	int n;

	scanf("%d", &n);

	printf("%d\n", four_bonacci(n));
}