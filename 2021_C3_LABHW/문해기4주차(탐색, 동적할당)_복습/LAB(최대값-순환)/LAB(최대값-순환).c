#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max1(int list[], int low, int high) {
	int i;
	int max = list[0];

	for (i = low; i <= high; i++) {
		if (list[i] > max)
			max = list[i];
	}

	return max;
}

// 정렬되지 않은 배열에서 최대값 찾기
int max2(int list[], int low, int high) {
	int middle, left, right;

	if (low == high)
		return list[high];

	middle = (low + high) / 2;
	left = max2(list, low, middle);
	right = max2(list, middle + 1, high);

	if (left > right)
		return left;
	else
		return right;
}

int main(void) {
	int list[] = { 10, 20, 100, 4, 5, 45, 3, 99, 11, 22 };

	printf("가장 큰 수는 %d\n", max1(list, 0, 9));
	printf("가장 큰 수는 %d\n", max2(list, 0, 9));

	printf("가장 큰 수는 %d\n", max1(list, 5, 9));
	printf("가장 큰 수는 %d\n", max2(list, 5, 9));

	printf("가장 큰 수는 %d\n", max1(list, 3, 6));
	printf("가장 큰 수는 %d\n", max2(list, 3, 6));
}