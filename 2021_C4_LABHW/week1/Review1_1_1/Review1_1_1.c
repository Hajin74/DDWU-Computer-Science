#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse_string(char* str, int s, int e) {
	char temp;

	if ((s + e) / 2 == s) {
		return;
	}
	else {
		temp = str[s];
		str[s] = str[e - s];
		str[e - s] = temp;
		s++;
		reverse_string(str, s, e);
	}
}

int main(void) {
	char str[100];

	printf("Enter any string: ");
	scanf("%s", str);

	reverse_string(str, 0, strlen(str) - 1);
	printf("\nReversed String is: %s", str);

	return 0;
}