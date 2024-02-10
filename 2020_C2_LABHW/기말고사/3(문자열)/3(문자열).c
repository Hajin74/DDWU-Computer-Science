// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void splitString(char* str, char* s1, char* s2) // 이 함수만 제출
{
	// 작성
	int i, flag = 0;
	int index1 = 0, index2 = 0;

	for (i = 0; i < strlen(str); i++) {
		if (flag < 2) {
			s1[index1++] = str[i];
			flag++;
		}
		else {
			if(flag == 4)
		}
	}

}

int main(void)
{

	char str[50], s1[50], s2[50];

	scanf("%s", str);
	splitString(str, s1, s2);

	printf("%s\n", s1);
	printf("%s\n", s2);
}

