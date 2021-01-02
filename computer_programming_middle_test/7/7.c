// 20200988 컴퓨터학과 유하진, 6번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_word_in_word(char w1[], int start, char w2[]) {
	int i;

	for (i = 0; w2[i] != '\0'; i++) {
		if (w2[i] != w1[start + i])
			return 0;
	}

	return start + i;
}

int main(void)
{
	char s1[30], s2[30], s3[30];
	int i, j, size = 0;

	scanf("%s", s1);
	scanf("%s", s2);

	for (i = 0; s1[i] != '\0'; i++) {
		if (is_word_in_word(s1, i, s2) == 0) {
			s3[size++] = s1[i];
		}
		else {
			i = is_word_in_word(s1, i, s2);
			break;
		}
	}

	for (j = i; s1[j] != '\0'; j++) {
		s3[size++] = s1[j];
	}

	s3[size] = '\0';

	for (i = 0; i < size; i++) {
		s1[i] = s3[i];
	}
	s1[i] = '\0';

	printf("%s\n", s1); // 변경하지 말라
}