#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���ĵ� �迭���� ���ϴ� �� ã��
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
		printf("���ϴ� ���� ����.\n");
	else
		printf("%d���� �־�\n", search_binary(list, key, 0, size) + 1);
}