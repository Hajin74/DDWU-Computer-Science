// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int addEach(int n) // 이 함수를 작성해서 제출
{
	int num;

	if (n < 10) {
		return n;
	}
	else {
		num = n % 10;
		n /= 10;
		return num + addEach(n);
	}
}

int main(void) // 변경하지 말라
{
	int num;
	scanf("%d", &num);
	printf("%d\n", addEach(num));
}


