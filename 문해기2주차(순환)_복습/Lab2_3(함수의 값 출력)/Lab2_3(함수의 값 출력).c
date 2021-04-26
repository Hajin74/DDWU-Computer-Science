#pragma warning(disable: 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int h(int n) {
	int i;
	int result;

	if (n == 1 || n == 0)
		return 1;
	else {
		result = 0;
		for (i = 0; i < n; i++) {
			result += h(i) * h(n - i - 1);
		}
		return result;
	}
}

int main(void) {
	int num;
	int result;

	scanf("%d", &num);

	result = h(num);
	printf("%d\n", result);
}