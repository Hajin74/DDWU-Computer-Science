#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int num, i;
	int* list;

	printf("Enter a number: ");
	scanf("%d", &num);

	list = (int*)malloc(sizeof(int) * num);

	srand(time(NULL));
	for (i = 0; i < num; i++) {
		list[i] = rand() % 1000;
		printf("%d ", list[i]);
	}
	printf("\n");

	free(list);
}