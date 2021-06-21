#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int length;

void compress(char* s, char* cs) {
	int i, count = 1, index = 0;
	char temp[2];

	temp[0] = s[0];
	temp[1] = s[1];

	for (i = 0; s[i] != '\0'; i += 2) {
		if (temp[0] == s[i + 2] && temp[1] == s[i + 3]) {
			count++;
			continue;
		}
		else {
			if (count != 1) {
				cs[index++] = count + 48;
			}

			cs[index++] = temp[0];
			cs[index++] = temp[1];
			count = 1;
			temp[0] = s[i + 2];

			if (s[i + 3] == '\0') {
				cs[index++] = s[i + 2];
				cs[index] = '\0';
				length = index;
				return;
			}
			else {
				temp[1] = s[i + 3];
			}
		}
	}
	cs[index] = '\0';
	length = index;
}

int main(void) {
	char s[1001], cs[1001];
	int i;

	scanf("%s", s);

	compress(s, cs);
	printf("%s\n", cs);
	printf("%d\n", length);
}