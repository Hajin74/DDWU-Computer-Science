#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int leftT = 0, leftB = 1;
int rightT = 1, rightB = 0;
int midT = 1, midB = 1;

void fantasia(char path[], int size, int k) {
	int i;

	if (path[k] == 'L') {
		rightT = midT;
		rightB = midB;
		midT = leftT + midT;
		midB = leftB + midB;

		fantasia(path, size, k + 1);
	}
	else if (path[k] == 'R') {
		leftT = midT;
		leftB = midB;
		midT = midT + rightT;
		midB = midB + rightB;

		fantasia(path, size, k + 1);
	}
	else if (k == size) {
		return;
	}
}

int main(void) {
	int i, size;
	char path[19];

	scanf("%s", path);

	for (i = 0; path[i] != '\0'; i++);
	size = i;

	fantasia(path, size, 0);
	printf("%d %d\n", midT, midB);
}