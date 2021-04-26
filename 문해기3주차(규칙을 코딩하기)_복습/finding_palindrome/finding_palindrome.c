#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculateReverse(int n) { // 뒤집은 수를 반환
	int reversedNum = 0;

	while (n > 0) {
		reversedNum = reversedNum * 10 + n % 10;
		n /= 10;
	}

	return reversedNum;
}

int main(void) {
	int num, reversedNum, sum = 0;
	int isPalindrome = 0, count = 0;

	scanf("%d", &num);

	while (!isPalindrome) {
		reversedNum = calculateReverse(num);
		if (num == reversedNum) {
			isPalindrome = 1;
			sum = num;
			break;
		}

		count++;
		sum = num + reversedNum;
		
		if (sum == calculateReverse(sum)) {
			isPalindrome = 1;
			break;
		}
		else if (sum < 0)
			break;

		num = sum;
	}

	if (isPalindrome)
		printf("%d %d\n", count, sum);
	else
		printf("Overflow\n");
}