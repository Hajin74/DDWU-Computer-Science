#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void selectionSort(int *p, int n) {
	int i, j;
	int temp;
	int maxIndex ;

	for (i = 0; i < n - 1; i++) {
		maxIndex = 0;
		for (j = 0; j <= n - 1 - i; j++) {
			if (p[j] > p[maxIndex])
				maxIndex = j;
		}
		temp = p[j - 1];
		p[j - 1] = p[maxIndex];
		p[maxIndex] = temp;
	}
}

int main(void) {
	int i, num;
	int* p;

	printf("Enter a number: ");
	scanf("%d", &num);

	p = (int*)malloc(sizeof(int) * num);
	if (!p) {
		printf("메모리를 할당할 수 없습니다.");
		return 0;
	}

	srand(time(NULL));

	for (i = 0; i < num; i++) {
		*(p + i) = rand() % 1000;
		printf("%d ", *(p + i));
	}

	selectionSort(p, num);

	printf("\n정렬된 후:\n");
	for (i = 0; i < num; i++)
		printf("%d ", *(p + i));

	free(p);
}