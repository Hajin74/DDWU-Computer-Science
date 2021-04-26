#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int* arr;
int count = 0;

void solution(int n) {
	if (n >= 10)
		solution(n / 10);
	arr[count] = n % 10;
	count++;
}

int main(void) {
	int i = 1;
	int n;

	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);
	// n크기만큼 배열만들어줌

	while (count < n) {
		solution(3 * i);
		i++;
	}

	printf("%d\n", arr[n - 1]);
}