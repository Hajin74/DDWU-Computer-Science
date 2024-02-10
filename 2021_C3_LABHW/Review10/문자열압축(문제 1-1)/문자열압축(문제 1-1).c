#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void compress(char *s, char *cs) {
	int i, j, size, count = 1, index = 0;
	char now, next;

	for (i = 0; s[i] != '\0'; i++);
	size = i;

	for (i = 0; i < size; i++) {
		now = s[i];
		next = s[i + 1];

		if (now == next) {
			count++;
		}
		else {
			if (count > 1) {
				cs[index++] = count + '0';
			}
			cs[index++] = now;
			count = 1;
		}
	}
	cs[index] = '\0';

	printf("%s\n", cs);
	printf("%d\n", index);
}

int main(void) {
	int i, j;
	char s[1000], cs[1000];

	scanf("%s", s);

	compress(s, cs);
}