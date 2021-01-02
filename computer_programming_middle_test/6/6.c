// 20200988 컴퓨터학과 유하진, 5번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mergeStringOneByOne(char c[], char a[], char b[]) // 이 함수만 작성
{
	int asize, bsize, csize = 0;
	int i, j;

	for (i = 0; a[i] != '\0'; i++);
	asize = i;

	for (i = 0; b[i] != '\0'; i++);
	bsize = i;

	if (asize >= bsize) {
		for (i = 0; i < bsize; i++) {
			c[csize++] = a[i];
			c[csize++] = b[i];
		}

		for (j = bsize; j < asize; j++) {
			c[csize++] = a[j];
		}

		c[csize] = '\0';
	}
	else {
		for (i = 0; i < asize; i++) {
			c[csize++] = a[i];
			c[csize++] = b[i];
		}

		for (j = asize; j < bsize; j++) {
			c[csize++] = b[j];
		}

		c[csize] = '\0';
	}
}

int main(void) // 변경하지 말라
{
	char word1[10];
	char word2[10];
	char mergedWord[20];

	scanf("%s", word1);
	scanf("%s", word2);

	mergeStringOneByOne(mergedWord, word1, word2);
	printf("%s\n", mergedWord);
}