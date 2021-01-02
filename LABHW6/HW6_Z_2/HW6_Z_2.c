// 컴퓨터학과 20200988 유하진
#include <stdio.h>

int is_word_in_word(char w1[], int start, char w2[]) {
	int i;

	for (i = 0; w2[i] != '\0'; i++) {
		if (w2[i] != w1[start + i])
			return 0;
	}

	return 1;
}

int main(void) {
	char s1[20], s2[20];
	int i;

	scanf_s("%s", s1, sizeof(s1));
	scanf_s("%s", s2, sizeof(s2));

	for (i = 0; s1[i] != '\0'; i++)
		printf("%d", is_word_in_word(s1, i, s2));
}