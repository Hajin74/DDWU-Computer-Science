#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int four_bonacci(int n) {
	int i;
	int result;

	if (n <= 4)
		return 1;
	else {
		result = 0;
		for (i = 1; i <= 4; i++) {
			result += four_bonacci(n - i);
		}
		return result;
	}
}

int main(void) {
	int n;
	int result;

	scanf("%d", &n);

	result = four_bonacci(n);
	printf("%d\n", result);
}