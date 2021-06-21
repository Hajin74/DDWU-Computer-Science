#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void compress(char* s, char* cs) {
	int i, j, count = 1, isOver10 = 0, length, size;
	char* os = s, * ocs = cs;
	char now[500], next[500];

	for (i = 0; s[i] != '\0'; i++);
	size = i;
	length = size;

	i = 0;
	for (j = 1; j <= size / 2; j++) {
		while (i < size) {
			strncpy(now, s, j);
			now[j] = '\0';
			strncpy(next, s + j, j);
			next[j] = '\0';

			if (strcmp(now, next) == 0) {
				count++;
			}
			else {
				while (count >= 10) {
					isOver10 = 1;
					*cs = count / 10 + '0';
					cs++;
					count /= 10;
				}

				if (count > 1 || isOver10 == 1) {
					*cs = count + '0';
					cs++;
					isOver10 = 0;
				}

				strncpy(cs, now, j);
				cs += j;
				count = 1;
			}
			s += j;
			i += j;
		}
		*cs = '\0';

		s = os;
		cs = ocs;

		for (i = 0; cs[i] != '\0'; i++);

		if (length > i) {
			length = i;
		}
	}

	printf("%s\n", cs);
	printf("%d\n", length);
}

int main(void) {
	int i, j;
	char s[1000], cs[1000];

	scanf("%s", s);

	compress(s, cs);
}