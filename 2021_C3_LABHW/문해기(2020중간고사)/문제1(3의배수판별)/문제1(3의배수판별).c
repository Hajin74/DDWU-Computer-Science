#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void isTriple(char n[]) {
	int num, i, total = 0;
	int size;

	for (i = 0; n[i] != '\0'; i++);
	size = i;

	for (i = 0; i < size; i++) {
		num = n[i] - '0';
		total += num;
	}

	if (total % 3 == 0)
		printf("yes");
	else
		printf("no");
}

int main(void) {
	char n[1001];

	scanf("%s", n);

	isTriple(n);
}