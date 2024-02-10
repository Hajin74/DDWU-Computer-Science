#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int digitsCheck(int n) { // �ڸ����� ��� 1���� �˻�
	while (n > 0) {
		if (n % 10 != 1)
			return 0;
		n /= 10;
	}

	return 1;
}

int digitsCount(int n) { // 1�� �� ������ ���� �Լ�
	int count = 0;

	while (n > 0) {
		count++;
		n /= 10;
	}

	return count;
}

int main(void) {
	int num;
	int multiple = 0;
	int isAllOne = 0;

	scanf("%d", &num);

	while (isAllOne == 0) {
		multiple++;
		isAllOne = digitsCheck(num * multiple);
	}
	
	printf("%d\n", digitsCount(num * multiple));
}