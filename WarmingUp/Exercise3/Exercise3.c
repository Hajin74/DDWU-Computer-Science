// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>
int total(int n);

int main(void) {
	int num;
	int totalNum;

	printf("Input a number(-1 for exit): ");
	scanf("%d", &num);

	if (num == -1) // -1 for exit
		return 0;
	else { // 자연수의 합 구하는 함수 실행
		totalNum = total(num);
		printf("1부터 %d까지의 합은 %d\n", num, totalNum);
	}
}

int total(int n) {
	int i;
	int totalNum = 0;

	for (i = 1; i <= n; i++) { // 1부터 입력받은 수까지 더한다
		totalNum += i;
	}

	return totalNum;
}