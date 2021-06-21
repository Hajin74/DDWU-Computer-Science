#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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

int main()
{
	char key[] = "PROGRAMMING"; // 단어를 바꾸면서 테스트 해본다
	
	remove_duplicated_char(key);
	printf("%s", key); //  progamin 이 출력되어야 함
}