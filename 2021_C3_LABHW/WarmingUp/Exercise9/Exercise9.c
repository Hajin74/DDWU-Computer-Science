// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>

int main(void) {
	int arr1[5], arr2[5];
	int i;
	int flag = 1;

	printf("Enter ù ��° �迭: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &arr1[i]);

	printf("Enter �� ��° �迭: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &arr2[i]);

	for (i = 0; i < 5; i++) {
		if (arr1[i] != arr2[i]) {
			flag = 0;
			break;
		}
	}

	if (flag == 0)
		printf("�� ���� �迭�� �ٸ���\n");
	else
		printf("�� ���� �迭�� ����\n");

}