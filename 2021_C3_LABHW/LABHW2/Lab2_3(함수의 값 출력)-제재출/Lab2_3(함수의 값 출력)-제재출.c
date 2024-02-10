#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int h(int n) {
	int i;
	int sum;

	if (n == 0 || n == 1)
		return 1;
	else {
		sum = 0;
		for (i = 0; i < n; i++) {
			sum +=  h(i) * h(n - 1 - i);
		}
		return sum;
	}
}

int main(void) {
	int num;

	scanf("%d", &num);

	printf("%d\n", h(num));
}