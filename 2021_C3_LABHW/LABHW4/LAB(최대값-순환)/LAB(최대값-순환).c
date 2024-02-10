#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max1(int list[], int low, int high) {
	int max = list[0];
	int i;

	for (i = low; i <= high; i++) {
		if (list[i] > max)
			max = list[i];
	}

	return max;
}

int max2(int list[], int low, int high) {
	int m1, m2;
	int mid;
	
	if (low == high) {
		return list[low];
	}

	mid = (low + high) / 2;
	m1 = max2(list, low, mid);
	m2 = max2(list, mid + 1, high);

	if (m1 > m2)
		return m1;
	else 
		return m2;
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