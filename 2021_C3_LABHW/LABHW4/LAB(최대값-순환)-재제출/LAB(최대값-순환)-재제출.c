#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max2(int list[], int low, int high) {

}

int main(void) {
	int list[] = { 10, 20, 100, 4, 5, 45, 3, 99, 11, 22 };

	printf("���� ū ���� %d\n", max1(list, 0, 9));
	printf("���� ū ���� %d\n", max2(list, 0, 9));

	printf("���� ū ���� %d\n", max1(list, 5, 9));
	printf("���� ū ���� %d\n", max2(list, 5, 9));

	printf("���� ū ���� %d\n", max1(list, 3, 6));
	printf("���� ū ���� %d\n", max2(list, 3, 6));
}