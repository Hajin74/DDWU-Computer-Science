// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>

void echo(int arr[], int size) {
	int i;

	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);
}

void reverse(int arr[], int size) {
	int i;

	for (i = size - 1; i >= 0; i--)
		printf("%d\n", arr[i]);
}

int main(void) {
	int nums[5];

	echo(nums, 5);
	reverse(nums, 5);
}