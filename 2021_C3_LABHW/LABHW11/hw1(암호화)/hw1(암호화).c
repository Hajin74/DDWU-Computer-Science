#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void makeCode(char code[], int d) {
	int index = 0, i;

	while (index < 26 - d) {
		code[index] = 'A' + d + index;
		index++;
	}

	i = 0;
	while (index < 26) {
		code[index] = 'A' + i;
		index++;
		i++;
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

void encode(char code[], char s[], char e[]) {
	int i = 0;

	while (s[i] != '\n') {
		if (s[i] == ' ') {
			e[i] = ' ';
		}
		else {
			e[i] = code[s[i] - 'A'];
		}
		i++;
	}

	e[i] = '\0';
}

void decode(char code[], char e[], char d[]) {
	int i = 0;

	while (e[i] != '\0') {
		if (e[i] == ' ') {
			d[i] = ' ';
		}
		else {
			if (e[i] - code[0] < 0) {
				d[i] = 'Z' + (e[i] - code[0] + 1);
			}
			else {
				d[i] = 'A' + e[i] - code[0];
			}
		}
		i++;
	}

	d[i] = '\0';
}

int main(void) {
	char code[27];
	int distance;
	char sentence[80];
	char encodedSentence[80];
	char decodedSentence[80];

	printf("Enter a distance for encoding: ");
	scanf("%d", &distance);

	makeCode(code, distance);
	printCode(code);

	while (getchar() != '\n'); // 버퍼 비우기
	printf("Enter a sentence to encode: ");
	fgets(sentence, sizeof(sentence), stdin);

	encode(code, sentence, encodedSentence);
	printf("original sentence:\t");
	puts(sentence);

	printf("encoded sentence:\t");
	puts(encodedSentence);

	decode(code, encodedSentence, decodedSentence);
	printf("decoded sentence:\t");
	puts(decodedSentence);
}