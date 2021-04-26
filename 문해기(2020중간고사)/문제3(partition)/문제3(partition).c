#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void partition(int list[], int size, int pivot) {
	int i = -1, j = 0, temp;

	while (j < size - 1) {
		if (pivot > list[j]) {
			temp = list[j];
			list[j] = list[i + 1];
			list[i + 1] = temp;

			i++;
		}
		j++;
	}
	temp = list[j];
	list[j] = list[i + 1];
	list[i + 1] = temp;
}

int main(void) {
	int i, n;
	int* list;

	scanf("%d", &n);
	list = (int*)malloc(sizeof(int) * (n + 1));
	
	for (i = 0; i < n; i++)
		scanf("%d", &list[i]);
	scanf("%d", &list[n]); // pivot ют╥б

	partition(list, n + 1, list[n]);

	for (i = 0; i < n + 1; i++)
		printf("%d ", list[i]);

	free(list);
}