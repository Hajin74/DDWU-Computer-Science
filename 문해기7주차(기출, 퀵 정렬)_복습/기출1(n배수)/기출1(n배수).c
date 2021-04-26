#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void multiple(char str[], int *str2) {
	int i, size, num;

	for (i = 0; str[i] != '\0'; i++);
	size = i;

	// 2의 배수
	num = str[size - 1] - 48;
	if (num % 2 == 0)
		str2[0] = 1;
	else
		str2[0] = 0;

	// 3의 배수
	num = 0;
	for (i = 0; i < size; i++)
		num += str[i];

	if (num % 3 == 0)
		str2[1] = 1;
	else
		str2[1] = 0;

	// 4의 배수
	num = (str[size - 2] - 48) * 10 + str[size - 1] - 48;
	if (num % 4 == 0)
		str2[2] = 1;
	else
		str2[2] = 0;

	// 5의 배수
	num = str[size - 1] - 48;
	if (num == 0 || num == 5)
		str2[3] = 1;
	else
		str2[3] = 0;
}

int main(void) {
	char str[1001];
	int result[4];
	int i;

	scanf("%s", str);

	multiple(str, result);
	for (i = 0; i < 4; i++)
		printf("%d", result[i]);
}