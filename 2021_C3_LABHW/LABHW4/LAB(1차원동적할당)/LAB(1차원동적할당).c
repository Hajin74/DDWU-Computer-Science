#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

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

	free(p);
}