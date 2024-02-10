#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int partition(int* a, int p, int r) {
	int i = p - 1, j = p, temp;

	while (j < r) {
		if (a[j] < a[r]){
			temp = a[j];
			a[j] = a[i + 1];
			a[i + 1] = temp;
			i++;
		}
		j++;
	}

	temp = a[j];
	a[j] = a[i + 1];
	a[i + 1] = temp;

	return i + 1; // 맨 마지막 수였던 pivot이 제 자리를 찾은 후 반환
}

void quickSort(int* a, int p, int r) {
	int loc;

	if (p < r) {
		loc = partition(a, p, r);
		quickSort(a, p, loc - 1);
		quickSort(a, loc + 1, r);
	}
}

int main(void) {
	int i, n;
	int* list;

	scanf("%d", &n);
	list = (int*)malloc(sizeof(int) * n);

	srand(time(NULL));
	for (i = 0; i < n; i++) {
		list[i] = rand() % 101;
		printf("%d ", list[i]);
	}
	printf("\n");

	quickSort(list, 0, n - 1);

	for (i = 0; i < n; i++)
		printf("%d ", list[i]);

	free(list);
}