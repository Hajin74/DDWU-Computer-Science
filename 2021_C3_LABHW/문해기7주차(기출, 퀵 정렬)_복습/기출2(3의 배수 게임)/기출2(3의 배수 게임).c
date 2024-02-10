#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int count = 0;
int* arr;

void solution(int n) {
	if (n >= 10) {
		solution(n / 10);
	}
	arr[count] = n % 10;
	count++;
}

int main(void) {
	int n, result, i = 1;

	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);

	while (count < n) { // n만큼 배열을 채울 때까지
		solution(3 * i);
		i++;
	}

	printf("%d", arr[n - 1]);
	free(arr);
}