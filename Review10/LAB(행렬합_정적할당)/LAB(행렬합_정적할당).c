#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a[3][4] = { {90, 85, 95, 100}, {75, 95, 80, 90}, {90, 80, 70, 60} };

	printf("%d\n", a);
	printf("%d\n", a + 0);
	printf("%d\n", *(*(a + 0) + 1));
}