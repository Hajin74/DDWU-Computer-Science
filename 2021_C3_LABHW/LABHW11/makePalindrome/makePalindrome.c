#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, j, k, size, mid, flag;
	char str[1001];

	scanf("%s", &str);

	for (i = 0; str[i] != '\0'; i++);
	size = i;

	if (size == 1) {
		printf("%s\n", str);
		return;
	}

	for (i = size; i < size * 2; i++) {
		if (i % 2 == 0) { // Â¦¼ö
			mid = i / 2 - 1;
			flag = 0;

			for (j = 0; j <= mid; j++) {
				if (str[mid - j] == str[mid + (j + 1)]) {
					flag = 1;
					continue;
				}
				else if (str[mid + (j + 1)] == '\0' || flag == 1) {
					flag = 1;
					str[mid + (j + 1)] = str[mid - j];
				}
				else {
					break;
				}
			}

			if (flag == 1) {
				str[i] = '\0';
				printf("%s\n", str);
				break;
			}
		}
		else { // È¦¼ö
			mid = i / 2;
			flag = 0;

			for (j = 1; j <= mid; j++) {
				if (str[mid - j] == str[mid + j]) {
					flag = 1;
					continue;
				}
				else if (str[mid + j] == '\0'|| flag == 1) {
					flag = 1;
					str[mid + j] = str[mid - j];
				}
				else {
					break;
				}
			}
			
			if (flag == 1) {
				str[i] = '\0';
				printf("%s\n", str);
				break;
			}
		}
	}
}