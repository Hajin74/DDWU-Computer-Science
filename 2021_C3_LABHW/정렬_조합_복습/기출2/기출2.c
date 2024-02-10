#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int count = 0;

void solution(int *list, int n) {
	if (n >= 10) {
		solution(list, n / 10);
	}
	n %= 10;
	list[count++] = n;

	return;
}

int main(void) {
	int i = 1, n;
	int* list;

	scanf("%d", &n);

	list = (int*)malloc(sizeof(int) * n);

	while (count < n) {
		solution(list, 3 * i);
		i++;
	}

	printf("%d", list[n - 1]);

	free(list);
}