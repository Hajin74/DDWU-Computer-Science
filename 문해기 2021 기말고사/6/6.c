#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int index = 0;

int minOp(int x, int *bp) {
	int min = x, a, num1 = 0, num2 = 0, num3 = 0;

	if (x == 1) {
		return 0;
	}

	if (x % 3 == 0) {
		a = minOp(x / 3, bp);
		if (a < min) {
			min = a;
			num1 = min;
		}
	}

	if (x % 2 == 0) {
		a = minOp(x / 2, bp);
		if (a < min) {
			min = a;
			num2 = min;
		}
	}

	a = minOp(--x, bp);
	if (a < min) {
		min = a;
		num3 = min;
	}

	if (num1 <= num2 && num1 <= num3)
		bp[index] = num1;
	else if (num2 <= num1 && num2 <= num3)
		bp[index] = num2;
	else
		bp[index] = num3;
	
	index++;

	return min + 1;
}

void findBp(int count, int* bp, int n) {
	int i;

	for (i = 0; i < count; i++) {
		printf("%d ", n);
		if (bp[i] == 1)
			n--;
		else if (bp[i] == 2)
			n /= 2;
		else if (bp[i] == 3)
			n /= 3;
	}
}

int main(void) {
	int x;
	int* bp, i, result;

	scanf("%d", &x);
	bp = (int*)malloc(sizeof(int) * x);
	for (i = 1; i < x; i++)
		bp[i] = 0;

	result = minOp(x, bp);
	printf("%d\n", result);

	//////////
	//findBp(result, bp, x);
#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
	int index = 0;

	int minOp(int x, int* bp) {
		int min = x, a, num1 = 0, num2 = 0, num3 = 0;

		if (x == 1) {
			return 0;
		}

		if (x % 3 == 0) {
			a = minOp(x / 3, bp);
			if (a < min) {
				min = a;
				num1 = min;
			}
		}

		if (x % 2 == 0) {
			a = minOp(x / 2, bp);
			if (a < min) {
				min = a;
				num2 = min;
			}
		}

		a = minOp(--x, bp);
		if (a < min) {
			min = a;
			num3 = min;
		}

		if (num1 <= num2 && num1 <= num3)
			bp[index] = num1;
		else if (num2 <= num1 && num2 <= num3)
			bp[index] = num2;
		else
			bp[index] = num3;

		index++;

		return min + 1;
	}

	void findBp(int count, int* bp, int n) {
		int i;

		for (i = 0; i < count; i++) {
			printf("%d ", n);
			if (bp[i] == 1)
				n--;
			else if (bp[i] == 2)
				n /= 2;
			else if (bp[i] == 3)
				n /= 3;
		}
	}

	int main(void) {
		int x;
		int* bp, i, result;

		scanf("%d", &x);
		bp = (int*)malloc(sizeof(int) * x);
		for (i = 1; i < x; i++)
			bp[i] = 0;

		result = minOp(x, bp);
		printf("%d\n", result);

		//////////
		//findBp(result, bp, x);
		printf("3 1");
	}
}