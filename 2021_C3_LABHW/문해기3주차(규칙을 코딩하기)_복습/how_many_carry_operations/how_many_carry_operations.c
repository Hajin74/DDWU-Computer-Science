#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int countCarry(int n1, int n2) {
	int lastCarry = 0;
	int totalCarry = 0;

	while (n1 > 0 || n2 > 0) {
		if (n1 % 10 + n2 % 10 + lastCarry >= 10) {
			lastCarry = 1;
			totalCarry++;
		}
		else
			lastCarry = 0;

		n1 /= 10;
		n2 /= 10;
	}

	return totalCarry;
}

int main(void) {
	int n1, n2;
	int carry;

	scanf("%d %d", &n1, &n2);

	carry = countCarry(n1, n2);
	printf("%d\n", carry);
}