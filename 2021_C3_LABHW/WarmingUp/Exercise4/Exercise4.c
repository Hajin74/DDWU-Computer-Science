// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>

int main(void) {
	int nums[5];
	int i;
	int key;
	int flag = 0;

	printf("Enter 5���� ����:");
	for (i = 0; i < 5; i++) {
		scanf(" %d", &nums[i]);
	}
	printf("Enter a key: ");
	scanf("%d", &key);

	for (i = 0; i < 5; i++) {
		if (nums[i] == key) { // key���� �߰��ϸ� �ݺ��� ����
			flag = 1;
			break;
		}
	}

	if (flag == 1) // key���� ������� ���
		printf("%d��°�� �ִ�\n", i + 1);
	else // key�� ��ã�� flag == 0�̸� ���
		printf("����\n");
}