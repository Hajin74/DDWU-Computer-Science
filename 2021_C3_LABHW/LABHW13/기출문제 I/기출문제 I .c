#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

long long hFunction(int num, long long *M) {
	int i;
	long long sum = 0;

	if (num == 1) {
		M[1] = 1;

		return 1;
	}
	else {
		for (i = 1; i < num; i++) {
			if (M[num - i] == 0) {
				sum += i * hFunction(num - i, M);
			}
			else {
				sum += (i * M[num - i]);
			}
		}
		M[num] = sum;

		return sum;
	}
}

int main(void) {
	int i, num;
	long long* Memo;
	long long result;

	scanf("%d", &num);

	Memo = (long long*)malloc(sizeof(long long) * (num + 1));
	for (i = 0; i <= num; i++) {
		Memo[i] = 0;
	}

	result = hFunction(num, Memo);
	printf("%lld\n", result);

	/* 메모 출력
	for (i = 1; i <= num; i++) {
		printf("%lld\t", Memo[i]);

		if (i % 5 == 0) {
			printf("\n");
		}
	}
	*/

	free(Memo);
}