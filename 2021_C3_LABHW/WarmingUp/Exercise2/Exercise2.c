// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>

int isPrime(int x) {
	int i;
	int flag = 1;

	for (i = 2; i < x; i++) { 
		if (x % i == 0) // 2���� �ڱ� �ڽ� �������� ���� ������ ���� �Ҽ��� �ƴϴ�
			return 0; // �Ҽ��� �ƴϸ� 0�� ��ȯ
	}

	return 1; // ���������� �ʾƼ� ������ �ݺ����� ���� 1�� ��ȯ
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