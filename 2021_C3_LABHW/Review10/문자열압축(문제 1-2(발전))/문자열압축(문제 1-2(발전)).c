#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void compress(char* s, char* cs) {
	int i, j, size, length, count = 1, isOver10 = 0, num;
	char* os = s, * ocs = cs;
	char now[500], next[500];

	for (i = 0; s[i] != '\0'; i++);
	size = i;

	i = 0;
	while (i < size) {
		strncpy(now, s, 2); // 원하는 개수만큼 문자 자르기
		now[2] = '\0';
		strncpy(next, s + 2, 2);
		next[2] = '\0';

		if (strcmp(now, next) == 0) { // 같다면 계속 카운트 올리기
			count++;
			s += 2;
		}
		else {
			while (count >= 10) {
				isOver10 = 1;
				*cs = count / 10 + '0';
				cs++;
				count %= 10;
			}

			if (count > 1 || isOver10 == 1) {
				*cs = count + '0';
				cs++;
				isOver10 = 0;
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