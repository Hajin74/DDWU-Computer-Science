// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>

int main(void) {
	int arr1[5], arr2[5];
	int i;
	int flag = 1;

	printf("Enter 첫 번째 배열: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &arr1[i]);

	printf("Enter 두 번째 배열: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &arr2[i]);

	for (i = 0; i < 5; i++) {
		if (arr1[i] != arr2[i]) {
			flag = 0;
			break;
		}
	}

	if (flag == 0)
		printf("두 개의 배열은 다르다\n");
	else
		printf("두 개의 배열은 같다\n");

}