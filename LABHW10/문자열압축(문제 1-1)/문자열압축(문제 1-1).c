#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int compress(char* s, char* cs) {
	int i, count = 1, index = 0;
	char temp = s[0];

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i + 1] == temp) {
			count++;
			continue;
		}
		else {
			if (count != 1) {
				cs[index++] = count + 48;
			}
			cs[index++] = temp;
			count = 1;
			temp = s[i + 1];
		}
	}
	cs[index] = '\0';

	return index;
}

int main(void) {
	char s[1001], cs[1001];
	int i;
	int length;

	scanf("%s", s);
	length = compress(s, cs);
	printf("%s\n", cs);
	printf("%d", length);
}