// 컴퓨터학과 20200988 유하진
#include <stdio.h>

int main(void) {
	char firstWord[81], secondWord[81];
	int i, j, flag = 1;

	printf("Enter the first word : ");
	scanf_s("%s", firstWord, 81);
	printf("Enter the second word : ");
	scanf_s("%s", secondWord, 81);

	if (sizeof(firstWord) != sizeof(secondWord))
		printf("두 단어는 다르다\n");
	else {
		for (i = 0; i < sizeof(firstWord); i++) {
			if (firstWord[i] != secondWord[i]) {
				printf("두 단어는 다르다\n");
				flag = 0;
				break;
			}
		}

		if(flag == 1)
			printf("두 단어는 같다\n");
	}
}