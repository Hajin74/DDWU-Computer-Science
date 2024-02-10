#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hanoi(int n, char from, char tmp, char to) { // n: 원판 개수
	if (n == 1)
		printf("원판 1을 %c에서 %c로 옮긴다\n", from, to);
	else {
		hanoi(n - 1, from, to, tmp);
		printf("원판 %d을 %c에서 %c로 옮긴다\n", n, from, to);
		hanoi(n - 1, tmp, from, to);
	}
}

int main(void) {
	hanoi(3, 'A', 'B', 'C');

	return 0;
}