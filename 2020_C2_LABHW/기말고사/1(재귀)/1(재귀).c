// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int addEach(int n) // �� �Լ��� �ۼ��ؼ� ����
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

int main(void) // �������� ����
{
	int num;
	scanf("%d", &num);
	printf("%d\n", addEach(num));
}


