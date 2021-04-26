#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 정렬된 배열에서 원하는 값 찾기
int search_binary(int list[], int key, int low, int high) {
	int middle;

	if (low <= high) {
		middle = (low + high) / 2;

		if (key == list[middle])
			return middle;
		else if (key < list[middle])
			return search_binary(list, key, low, middle - 1);
		else
			return search_binary(list, key, middle + 1, high);
	}

	return -1;
}

int main(void) {
	int list[] = { 0, 1, 4, 4, 6, 10, 34, 50 };
	int size = 8;
	int key = 2;

	if (search_binary(list, key, 0, size) == -1)
		printf("원하는 값이 없다.\n");
	else
		printf("%d번재 있어\n", search_binary(list, key, 0, size) + 1);
}