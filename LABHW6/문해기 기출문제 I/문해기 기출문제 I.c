#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void multipleCheck(char str[], int size) {
	int i;
	int num;
	int total = 0;
	int arr[4];

	//2
	num = str[size - 1] - 48;
	
	if (num % 2 == 0)
		arr[0] = 1;
	else
		arr[0] = 0;

	//3
	for (i = 0; i < size; i++)
		total += str[i] - 48;

	if (total % 3 == 0)
		arr[1] = 1;
	else
		arr[1] = 0;

	//4
	num = (str[size - 2] - 48) * 10 + str[size - 1] - 48;

	if (num % 4 == 0)
		arr[2] = 1;
	else
		arr[2] = 0;

	//5
	num = str[size - 1] - 48;
	
	if (num == 5 || num == 0)
		arr[3] = 1;
	else
		arr[3] = 0;


	for (i = 0; i < 4; i++)
		printf("%d", arr[i]);
	
}

int main(void) {
	int i, size;
	char str[1001];

	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++);
	size = i;

	multipleCheck(str, size);
}