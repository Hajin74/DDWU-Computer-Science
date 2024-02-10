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

void makeCode(char c[], int d) {
	int i;

	for (i = 0; i < 26 - d; i++) {
		c[i] = 'A' + d + i;
	}

	for (i = 0; i < d; i++) {
		c[26 - d + i] = 'A' + i;
	}
	c[26] = '\0';
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

void decode(char code[], char encodedSentence[], char decodedSentence[]) {
	int i;

	for (i = 0; encodedSentence[i] != '\0'; i++) {
		if (encodedSentence[i] == ' ') {
			decodedSentence[i] = ' ';
		}
		else {
			if (encodedSentence[i] - code[0] < 0) {
				decodedSentence[i] = 'Z' + (encodedSentence[i] - code[0] + 1);
			}
			else {
				decodedSentence[i] = 'A' + encodedSentence[i] - code[0];
			}
		}
	}
	decodedSentence[i] = '\0';
}

int main(void)
{
	char code[27]; // code[0]부터 'A'의 암호화문자를 넣음
	int distance;
	char sentence[80];
	char encodedSentence[80];
	char decodedSentence[80];

	printf("Enter a distance for encoding:");
	scanf("%d", &distance);

	makeCode(code, distance);
	printCode(code);

	while (getchar() != '\n'); // 버퍼 비움
	printf("Enter a sentence to encode:");
	fgets(sentence, sizeof(sentence), stdin);

	encode(code, sentence, encodedSentence);
	printf("original sentence:\t");
	puts(sentence);

	printf("encoded sentence:\t");
	puts(encodedSentence);

	decode(code, encodedSentence, decodedSentence);
	printf("decoded sentence:\t");
	puts(decodedSentence);
	/*
	*/
}