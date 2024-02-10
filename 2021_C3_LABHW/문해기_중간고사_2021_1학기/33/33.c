#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <time.h>

int main(void) {
	int n, m; // 세로줄, 가로줄
	int start;
	char* ladder;
	int i, j;

	scanf("%d %d", &n, &m);
	scanf("%d", &start);

	for (i = 0; i < m; i++) {
		ladder = (char*)malloc(sizeof(char) * (n - 1));

		scanf("%s", ladder);
	
		if (start - 1 >= 0) {
			if (ladder[start - 1] == '1') {
				start--;
				continue;
			}
		}

		if (ladder[start] == '1') {
			start++;
			continue;
		}
	}

	printf("%d", start);
}