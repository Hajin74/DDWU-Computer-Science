// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main(void) {
	FILE* fp1, *fp2;
	char ch[10001], ch2[10001];
	int i;

	fp1 = fopen("input.txt", "wt");
	if (fp1 == NULL) {
		printf("파일 오픈 에러\n");
		return 1;
	}

	fprintf(fp1, "Near far\n");
	fprintf(fp1, "wherever you are\n");
	fprintf(fp1, "I believe that the haer does go on\n");
	fprintf(fp1, "Once more, you open the door\n");
	fprintf(fp1, "And you're here in my heart\n");
	fprintf(fp1, "And my hear will go on and on\n");

	fclose(fp1);

	fp1 = fopen("input.txt", "rt");
	if (fp1 == NULL) {
		printf("파일 오픈 에러\n");
		return 1;
	}

	fp2 = fopen("output.txt", "wt");
	if (fp2 == NULL) {
		printf("파일 오픈 에러\n");
		return 1;
	}
	
	fgets(ch, sizeof(ch), fp1);
	while (!feof(fp1)) {
		for (i = 0; i < strlen(ch); i++) {
			if (islower(ch[i]))
				ch2[i] = toupper(ch[i]);
			else
				ch2[i] = ch[i];
		}
		ch2[i] = '\0';

		fprintf(fp2, "%s", ch2);
		fgets(ch, sizeof(ch), fp1);
	}

	fseek(fp1, 0, SEEK_SET);
	fclose(fp2);

	fp2 = fopen("output.txt", "a");
	if (fp2 == NULL) {
		printf("파일 오픈 에러\n");
		return 1;
	}

	fprintf(fp2, "\n");

	fgets(ch, sizeof(ch), fp1);
	while (!feof(fp1)) {
		for (i = 0; i < strlen(ch); i++) {
			if (isupper(ch[i]))
				ch2[i] = tolower(ch[i]);
			else
				ch2[i] = ch[i];
		}
		ch2[i] = '\0';

		fprintf(fp2, "%s", ch2);
		fgets(ch, sizeof(ch), fp1);
	}

	fclose(fp1);
	fclose(fp2);
}