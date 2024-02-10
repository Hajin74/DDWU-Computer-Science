// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int addEachEvenRec(int n) 
{
	int sum = 0;

	if (n == 0) {
		return 0;
	}
	else {
		if (n % 2 == 0) {
			sum = n % 10;
			n = n / 10;
			return sum + addEachEvenRec(n);
		}
		else {
			n = n / 10;
			return addEachEvenRec(n);
		}
	}
}

int main(void) 
{
	int num;

	scanf("%d", &num);
	printf("%d\n", addEachEvenRec(num));
}