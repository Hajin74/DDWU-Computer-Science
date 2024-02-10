// 컴퓨터학과 20200988 유하진
#include <stdio.h>

int mergeString(char c[], char a[], char b[]) {
	char alpha = 'A';
	int i, index = 0;

	while (alpha <= 'Z') {
		for (i = 0; a[i] != '\0'; i++) {
			if (a[i] == alpha)
				c[index++] = a[i];
		}
		for (i = 0; b[i] != '\0'; i++) {
			if (b[i] == alpha)
				c[index++] = b[i];
		}
		alpha++;
	}

	c[index] = '\0';
}

int main(void) {
	char word1[10], word2[10];
	char mergedWord[20];

	scanf_s("%s", word1, sizeof(word1));
	scanf_s("%s", word2, sizeof(word2));

	mergeString(mergedWord, word1, word2);
	
	printf("%s\n", mergedWord);
}