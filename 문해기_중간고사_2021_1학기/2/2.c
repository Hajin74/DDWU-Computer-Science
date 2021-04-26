#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

void multi(int n) {
	int i;

	if (n >= 10) {
		multi(n / 10);
		n = n % 10;
	}

	printf("%d ", n);
}

int main(void) {
	int n;
	int n2;

	scanf("%d", &n);
	n2 = n * 9;

	multi(n2);

}