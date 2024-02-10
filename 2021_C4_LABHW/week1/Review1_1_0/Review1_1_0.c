#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void print_reverse(char* str, int end) {
	if (end == 0) {
		printf("%c\n", str[end]);

		return;
	}
	else {
		printf("%c", str[end]);
		end--;
		print_reverse(str, end);
	}
}

int main(void) {
	char str[100];

	printf("Enter any string: ");
	scanf("%s", str);

	printf("Reversed String is: ");
	print_reverse(str, strlen(str) - 1);

	return 0;
}