// 20200988 ��ǻ���а� ������
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
	else { // �ڿ����� �� ���ϴ� �Լ� ����
		totalNum = total(num);
		printf("1���� %d������ ���� %d\n", num, totalNum);
	}
}

int total(int n) {
	int i;
	int totalNum = 0;

	for (i = 1; i <= n; i++) { // 1���� �Է¹��� ������ ���Ѵ�
		totalNum += i;
	}

	return totalNum;
}