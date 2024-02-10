#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fact(int n) {
	if (n == 0 || n == 1) {
		return 1;
		// 재귀함수가 종료되려면 무조건 이 조건문에 걸리게 되어있고
		// 1이 반환될 것이기 때문에 미리 result 값을 선언할 필요 없다.
	}
	else {
		return n * fact(n - 1);
	}
}

int main(void) {
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);
	printf("%d! = ", n);
	printf("%d\n", fact(n));
}