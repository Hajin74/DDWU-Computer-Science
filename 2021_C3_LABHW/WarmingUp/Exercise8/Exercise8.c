// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>

void input(char arr[]) {
	printf("Enter your name: ");
	scanf("%s", arr);
}

void reverse(char arr[]) {
	int i;
	int size;

	for (i = 0; arr[i] != '\0'; i++);
	size = i;

	printf("Reverse: ");
	for (i = size - 1; i >= 0; i--)
		printf("%c", arr[i]);
	printf("\n");
}

int main(void) {
	char name[81];

	input(name);
	reverse(name);
}