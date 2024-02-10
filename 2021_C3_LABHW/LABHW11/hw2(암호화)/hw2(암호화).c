#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

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

void printCode(char code[]) {
	int i;

	printf("-------------------------------------------------------------\n");
	printf("alphabet:\t");
	for (i = 0; i < 26; i++) {
		printf("%c", i + 'A');
	}
	printf("\n");

	printf("encoded:\t%s\n", code);
	printf("-------------------------------------------------------------\n");
}

void remove_duplicated_char(char* word) {
	int i, j;
	int isSame;

	for (i = 1; word[i] != '\0'; i++) {
		isSame = 0;
		for (j = 0; j < i; j++) {
			if (word[i] == word[j]) {
				isSame = 1;
				break;
			}
		}

		if (isSame == 1) {
			for (j = i + 1; word[j] != '\0'; j++) {
				word[j - 1] = word[j];
			}
			word[j - 1] = '\0';
			i--;
		}
	}
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