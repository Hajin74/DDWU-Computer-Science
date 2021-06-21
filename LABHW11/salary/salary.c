#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum = 0;

void salary(char org[][5], int num, int size) {
	int i, j;
	int haveWorker = 0;

	for (i = 0; i < size; i++) {
		if (org[num][i] == 'Y') {
			salary(org, i, size);
			haveWorker = 1; // Y가 있다는 것은 부하가 있는 것 
		}
	}

	// 즉, 부하가 하나도 없는 경우에만 sum을 하나 더한다.
	// 부하가 1명뿐이면 그 부하는 부하가 하나도 없을 거니 sum에 1만 더해진다.
	if (haveWorker == 0) { 
		sum++;
	}
}

int main(void) {
	char organization[][5] = { "NYYNN", "NNNNN", "NNNYY", "NYNNN", "NNNNN" };
	int i;

	for (i = 0; i < 5; i++) {
		salary(organization, i, 5);
	}

	printf("%d\n", sum);
	
}
