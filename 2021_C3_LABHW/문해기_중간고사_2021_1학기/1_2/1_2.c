#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

int countCarry(char str1[], char str2[]) {
	int s1, s2;
	int i;
	int n1, n2;
	int lastCarry = 0;
	int totalCarry = 0;

	for (i = 0; str1[i] != '\0'; i++);
	s1 = i;

	for (i = 0; str2[i] != '\0'; i++);
	s2 = i;

	if (!((0 <= (str1[s1 - 1] - 48) && 9 >= (str1[s1 - 1] - 48)) && (0 <= (str2[s2 - 1] - 48) && 9 >= (str2[s2 - 1] - 48)))) {
		return totalCarry;
	}

	while (s1 > 0 || s2 > 0) {
		if ((str1[s1 - 1] - 48) % 10 + (str2[s2 - 1] - 48) % 10 + lastCarry >= 10) {
			lastCarry = 1;
			totalCarry++;
		}
		else {
			lastCarry = 0;
		}

		s1--;
		s2--;
	}

	return totalCarry;
}

int main(void) {
	char str1[101];
	char str2[101];
	int result;

	scanf("%s", str1);
	scanf("%s", str2);
	
	result = countCarry(str1, str2);
	printf("%d", result);
}