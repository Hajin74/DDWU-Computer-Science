// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>

int isPrime(int x) {
	int i;
	int flag = 1;

	for (i = 2; i < x; i++) { 
		if (x % i == 0) // 2부터 자기 자신 전까지의 수로 나누어 지면 소수가 아니다
			return 0; // 소수가 아니면 0을 반환
	}

	return 1; // 나누어지지 않아서 끝까지 반복문을 돌면 1을 반환
}

int main(void) {
	int i;

	for (i = 2; i <= 30; i++) { 
		if (isPrime(i) == 1) {
			printf("%d ", i);
		}
	}

	return 0;
}