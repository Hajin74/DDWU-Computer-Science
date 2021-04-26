#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isAllOne(int n) {
	int result = 0;

	while (n > 0) {
		if (n % 10 != 1) {
			result = 0;
			break;
		}
		result++;
		n /= 10;
	}

	return result;
}

int main(void) {
	int i = 1, num, result = 0;

	scanf("%d", &num);

	do {
		result = isAllOne(num * i);

		if (result != 0)
			break;

		i++;

	} while (result == 0);
	
	printf("%d\n", result);
}