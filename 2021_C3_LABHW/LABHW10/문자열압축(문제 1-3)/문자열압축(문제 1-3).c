#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void compressStr(char *s1, char *s2, int size) {
	int i, j, k, isOver10 = 0, count, length = size;
	char* temp1 = s1, *temp2 = s2;
	char now[500], next[500];

	for (i = 1; i <= size / 2; i++) { // 잘라질 수 있는 크기 1부터 ~ size/2 까지
		count = 1;

		for (j = 0; j <= size / i; j++) {
			strncpy(now, s1, i);
			now[i] = '\0';
			
			strncpy(next, s1 + i, i);
			next[i] = '\0';
			
			if (strcmp(now, next) == 0) {
				count++;
			}
			else {
				while (count >= 10) {
					isOver10 = 1;
					*s2 = (count / 10) + '0';
					s2++;
					count %= 10;
				}

				if (count > 1 || count == 0 || isOver10 == 1) {
					*s2 = count + '0';
					s2++;
					isOver10 = 0;
				}

				strncpy(s2, now, i);
				s2 = s2 + i;

				count = 1;
			}

			s1 = s1 + i;
		}
		*s2= '\0';

		s1 = temp1;
		s2 = temp2;

		// 문자열 길이
		for (k = 0; s2[k] != '\0'; k++);

		if (k < length) {
			length = k;
		}
	}

	printf("%d\n", length);
}

int main(void) {
	char str[1001], str2[1001];
	int i, size;

	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++);
	size = i;

	compressStr(str, str2, size);
}