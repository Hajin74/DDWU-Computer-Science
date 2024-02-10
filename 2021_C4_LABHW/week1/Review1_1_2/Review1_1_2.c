#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse_string(char* str, int s, int e) {
	int i;
	char temp;

	for (i = s; i <= (s + e) / 2; i++) {
		temp = str[i];
		str[i] = str[e - i];
		str[e - i] = temp;
	}

	return;
}

int main(void) {
	char str[100];

	printf("Enter any string: ");
	scanf("%s", str);

	reverse_string(str, 0, strlen(str) - 1);
	printf("\nReversed String is: %s", str);

	return 0;
}