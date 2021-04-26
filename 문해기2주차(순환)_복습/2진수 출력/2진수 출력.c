#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void binary(int x) {
	if (x > 0) {
		binary(x / 2);
		printf("%d ", x % 2);
	}
}

int main(void) {
	binary(8);

	return 0;
}