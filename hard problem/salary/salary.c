#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int sum = 0;

void salary(char org[][5], int num, int size) {
	int i, j, haveWorker = 0;

	for (i = 0; i < size; i++) {
		if (org[num][i] == 'Y') {
			salary(org, i, size);
			haveWorker = 1;
		}
	}

	if (haveWorker == 0) {
		sum++;
	}
}

int main(void) {
	char organization[][5] = { "NYYNN", "NNNNY", "NNNYY", "NYNNN", "NNNNN" };
	int i;

	for (i = 0; i < 5; i++) {
		salary(organization, i, 5);
	}

	printf("%d\n", sum);
}