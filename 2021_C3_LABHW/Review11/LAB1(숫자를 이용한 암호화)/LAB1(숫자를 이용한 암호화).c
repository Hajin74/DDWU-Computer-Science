#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, distance;
	char sentence[80], encodedSentence[80];
	char alpha[] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" }, encodedAlpha[27];

	printf("distance: ");
	scanf("%d", &distance);
	printf("--------------------------------------\n");

	// ���ĺ� ��ȣȭ
	printf("alphabet:\t%s\n", alpha);
	for (i = 0; i < 26 - distance; i++) {
		encodedAlpha[i] = alpha[i] + distance;
	}

	for (i = 0; i < distance; i++) {
		encodedAlpha[26 - distance + i] = alpha[i];
	}
	encodedAlpha[26] = '\0';

	printf("encoded:\t%s\n", encodedAlpha);
	printf("--------------------------------------\n");

	// ���� �Է�
	printf("Enter sentence: ");

	while (getchar() != '\n'); // ���� ���
	fgets(sentence, sizeof(sentence), stdin);
	printf("original sentence: %s\n", sentence);
	
	// ��ȣȭ
	for (i = 0; sentence[i] != '\n'; i++) {
		if (sentence[i] == ' ') {
			encodedSentence[i] = ' ';
		}
		else {
			encodedSentence[i] = encodedAlpha[sentence[i] - 'A'];
		}
	}
	encodedSentence[i] = '\0';
	//fputs(encodedSentence, stdout);
	printf("%s\n", encodedSentence);
	


}