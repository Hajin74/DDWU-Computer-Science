#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculateReverse(int n) {
	int rn = 0;

	while (n > 0) {
		rn = rn * 10 + (n % 10);
		n /= 10;
	}

	return rn;
}


int main(void) {
	int num, reversedNum = 0, addedNum = 0;
	int count = 0;
	int isPalindrome = 0;

	scanf("%d", &num);

	while (isPalindrome == 0) {
		reversedNum = calculateReverse(num);
		if (num == reversedNum)
			break;

		count++;
		addedNum = num + reversedNum;

		if (addedNum == calculateReverse(addedNum))
			isPalindrome = 1;
		else
			num = addedNum;

		if (num < 0) {
			isPalindrome = -1;
			break;
		}
	}

	if (isPalindrome == -1)
		printf("Overflow\n");
	else if(isPalindrome == 0)
		printf("%d %d\n", count, num);
	else
		printf("%d %d\n", count, addedNum);
}