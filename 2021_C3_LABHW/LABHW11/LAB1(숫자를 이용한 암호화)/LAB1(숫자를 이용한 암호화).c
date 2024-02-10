#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void init(char a[], int size) {
	int i;

	for (i = 0; i < 26; i++) {
		a[i] = i + 65;
	}
	a[26] = '\0';
}

void printArr(char arr[], int size) {
	int i;

	for (i = 0; i < size; i++) {
		printf("%c", arr[i]);
	}
	printf("\n");
}

void encoding(char a[], char b[], int size, int distance) {
	int i;

	for (i = 0; i < size - distance; i++) {
		b[i] = a[i + distance];
	}

	for (i = size - distance; i < size; i++) {
		b[i] = a[i - (size - distance)];
	}
	b[size] = '\0';
}

int main(void) {
	int distance, i;
	char alpha[27], encodedAlpha[27];
	char sentence[80], encodedSentence[80];

	printf("Enter a distance for encoding: ");
	scanf("%d", &distance);

	printf("------------------------------------------------------------\n");

	init(alpha, 26);

	printf("alphabet:\t");
	printArr(alpha, 26);

	encoding(alpha, encodedAlpha, 26, distance);

	printf("encoded:\t");
	printArr(encodedAlpha, 26);

	printf("------------------------------------------------------------\n");

	while (getchar() != '\n'); // 버퍼 비우기

	printf("Enter a sentence to encode:");
	fgets(sentence, sizeof(sentence), stdin);

	printf("original sentence:\t");
	fputs(sentence, stdout);

	printf("encoded sentence:\t");

	i = 0;
	while (sentence[i] != '\n') {
		if (sentence[i] == ' ') {
			encodedSentence[i] = ' ';
		}
		else {
			encodedSentence[i] = encodedAlpha[sentence[i] - 65];
		}

		fputc(encodedSentence[i], stdout);
		
		i++;
	}
	
	
}