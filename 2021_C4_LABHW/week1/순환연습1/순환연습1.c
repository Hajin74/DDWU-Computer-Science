#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fact(int n) {
	if (n == 0 || n == 1) {
		return 1;
		// ����Լ��� ����Ƿ��� ������ �� ���ǹ��� �ɸ��� �Ǿ��ְ�
		// 1�� ��ȯ�� ���̱� ������ �̸� result ���� ������ �ʿ� ����.
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