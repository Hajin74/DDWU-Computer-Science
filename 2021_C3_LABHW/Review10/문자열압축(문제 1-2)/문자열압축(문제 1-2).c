#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void compress(char* s, char* cs) {
	int i, j, size, length, count = 1;
	char* os = s, * ocs = cs;
	char now[500], next[500];

	for (i = 0; s[i] != '\0'; i++);
	size = i;

	i = 0;
	while (i < size) {
		strncpy(now, s, 2);
		now[2] = '\0';
		strncpy(next, s + 2, 2);
		next[2] = '\0';

		if (strcmp(now, next) == 0) {
			count++;
			s += 2;
		}
		else {
			if (count > 1) {
				*cs = count + '0';
				cs++;
			}
			strncpy(cs, now, 2);
			cs += 2;
			count = 1;
			s += 2;
		}
		i += 2;
	}
	*cs = '\0';

	s = os;
	cs = ocs;

	for (i = 0; cs[i] != '\0'; i++);
	length = i;

	printf("%s\n", s);
	printf("%s\n", cs);
	printf("%d\n", length);
}

int main(void) {
	int i, j;
	char s[1000], cs[1000];

	scanf("%s", s);

	compress(s, cs);
}