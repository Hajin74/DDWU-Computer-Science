#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printCode(char c[]) {
	int i;

	printf("-------------------------------------------------------\n");
	printf("alphabet:\t");
	for (i = 0; i < 26; i++) {
		printf("%c", 'A' + i);
	}
	printf("\n");

	printf("encoded:\t");
	for (i = 0; i < 26; i++) {
		printf("%c", c[i]);
	}
	printf("\n");
	printf("-------------------------------------------------------\n");
}

void remove_duplicated_char(char* word) {
	char newWord[27] = "";
	int i, j, index = 0, flag;

	for (i = 0; word[i] != '\0'; i++) {
		flag = 0;
		for (j = 0; newWord[j] != '\0'; j++) {
			if (newWord[j] == word[i]) {
				flag = 1;
			}
		}
		if (flag == 0) {
			newWord[index++] = word[i];
		}
	}
	newWord[index] = '\0';

	for (i = 0; newWord[i] != '\0'; i++) {
		word[i] = newWord[i];
	}
	word[i] = '\0';

}

void makeCode(char code[], int d, char key[]) {
	int index = d, i, j, isSame;

	for (i = 0; key[i] != '\0'; i++) {
		if (index == 26) {
			index = 0;
		}
		code[index] = key[i];
		index++;
	}

	for (i = 'A'; i <= 'Z'; i++) {
		isSame = 0;
		for (j = 0; key[j] != '\0'; j++) {
			if (i == key[j]) {
				isSame = 1;
			}
		}

		if (isSame == 0) {
			if (index == 26) {
				index = 0;
			}

			code[index++] = i;
		}
	}

	code[26] = '\0';
}

void encode(char c[], char s[], char encodedSentence[]) {
	int i;

	for (i = 0; s[i] != '\n'; i++) {
		if (s[i] == ' ') {
			encodedSentence[i] = ' ';
		}
		else {
			encodedSentence[i] = c[s[i] - 'A'];
		}
	}
	encodedSentence[i] = '\0';
}


int main(void) {
	char code[27];
	int distance;
	char key[30];

	printf("Enter a distance for encoding: ");
	scanf("%d", &distance);

	printf("Enter a word to use for encoding: ");
	scanf("%s", &key);

	remove_duplicated_char(key);
	makeCode(code, distance, key);
	printCode(code);
}