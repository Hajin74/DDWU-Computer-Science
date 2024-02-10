// 20200988 컴퓨터학과 유하진 , 3번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int char_num(char* p, char c) // 이것을 작성, p의 값을 변경시키면서 함수를 정의
{
	int sum = 0;
	int i;

	for (i = 0; *p != '\0'; i++) {
		if (*p == c) {
			sum++;
		}
		p++;
	}

	return sum;
}

int main(void) // 변경하지 말라
{
	char w[30]; //문자열
	char* p; // 문자열 가리키는 포인터
	char ch; //문자
	p = w;

	scanf("%c", &ch);
	scanf("%s", w);

	printf("%d\n", char_num(w, ch));
}