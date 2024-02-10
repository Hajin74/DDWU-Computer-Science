#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int makeOne(int n, int* m) {
	int count = 1;
	int a, b, c;

	if (n == 1 || n == 2 || n == 3) {
		m[1] = 1;
		m[2] = 1;
		m[3] = 1;

		return 1;
	}
	else {
		if (n % 3 == 0 && n % 2 != 0) { // 3으로 나뉘는 경우
			if (m[n / 3] == 0) {
				m[n / 3] = makeOne(n / 3, m);
			}
			a = m[n / 3];

			if (m[n - 1] == 0) {
				m[n - 1] = makeOne(n - 1, m);
			}
			c = m[n - 1];

			if (a < c) {
				count += a;
			}
			else {
				count += c;
			}
		}
		else if (n % 3 != 0 && n % 2 == 0) { // 2로 나뉘는 경우
			if (m[n / 2] == 0) {
				m[n / 2] = makeOne(n / 2, m);
			}
			b = m[n / 2];

			if (m[n - 1] == 0) {
				m[n - 1] = makeOne(n - 1, m);
			}
			c = m[n - 1];

			if (b < c) {
				count += b;
			}
			else {
				count += c;
			}
		}
		else if (n % 3 == 0 && n % 2 == 0) { // 2와 3 둘 다 나뉘는 경우
			if (m[n / 3] == 0) {
				m[n / 3] = makeOne(n / 3, m);
			}
			a = m[n / 3];
			
			if (m[n / 2] == 0) {
				m[n / 2] = makeOne(n / 2, m);
			}
			b = m[n / 3];

			if (m[n - 1] == 0) {
				m[n - 1] = makeOne(n - 1, m);
			}
			c = m[n - 1];

			if (a <= b && a <= c) {
				count += a;
			}
			else if (b <= a && b <= c) {
				count += b;
			}
			else {
				count += c;
			}
		}
		else {
			if (m[n - 1] == 0) {
				m[n - 1] = makeOne(n - 1, m);
			}
			c = m[n - 1];

			count += c;
		}

		return count;
	}
}

int main(void) {
	int num, i, result;
	int* M;

	scanf("%d", &num);

	// 메모 할당 및 초기화
	M = (int*)malloc(sizeof(int) * (num + 1));
	for (i = 0; i <= num; i++) {
		M[i] = 0;
	}

	result = makeOne(num, M);
	printf("%d\n", result);

	free(M);
}