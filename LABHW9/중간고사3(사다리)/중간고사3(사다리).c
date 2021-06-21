#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m, n;
	int piece;
	char *ladder;
	int i, j;

	scanf("%d %d", &m, &n);
	scanf("%d", &piece);

	for (i = 0; i < n; i++) {
		ladder = (char*)malloc(sizeof(char) * (m - 1));

		scanf("%s", ladder);
		
		if (piece - 1 >= 0) {
			if (ladder[piece - 1] == '1') {
				piece--;
				continue;
			}
		}

		if (ladder[piece] == '1') {
			piece++;
			continue;
		}
	}

	printf("%d", piece);
}