#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void convertToZero(int a[], int b[], int size) {
	int i, j;

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (a[i] == b[j]) {
				b[j] = 0;
			}
		}
	}
}

void deleteNonCommonNum (int a[], int b[], int size) {
	int i, j, isSame;

	for (i = 0; i < size; i++) {
		if (a[i] != 0) {
			isSame = 0;
			for (j = 0; j < size; j++) {
				if (a[i] == b[j]) {
					isSame = 1;
				}
			}

			if (isSame == 0) {
				a[i] = 0;
			}
		}
	}
}

int main(void) {
	int i, j;
	int card[4][8] = { {1, 2, 3, 4, 5, 6, 7, 8}, {1, 2, 3, 4, 9, 10, 11, 12}, {1, 2, 5, 6, 9, 10, 13, 14}, {1, 3, 5, 7, 9, 11, 13, 15} };
	char answer[5];

	scanf("%s", answer);

	// 'N'�� �ش��ϴ� �迭�� ���ҵ��� ������ 0���� �ٲ�
	// 'N'�� �ش��ϴ� �迭�� ���ҵ��� �ش��ϴ� ������ ������ 0���� �ٲ�
	for (i = 0; i < 4; i++) {
		if (answer[i] == 'N') {
			for (j = 0; j < 4; j++) {
				if (i == j) {
					continue;
				}
				convertToZero(card[i], card[j], 8);
			}
			convertToZero(card[i], card[i], 8);
		}
	}

	// 'Y' �� �ͳ��� ����� ���� ã��, ������� �ʴ� ���� 0���� �ٲ�
	for (i = 0; i < 4; i++) {
		if (answer[i] == 'Y') {
			for (j = i + 1; j < 4; j++) {
				if (answer[j] == 'Y') {
					deleteNonCommonNum(card[i], card[j], 8);
				}
			}
			break;
		}
	}

	// 0���� �ٲ��� ���� �� �ϳ��� ���� ������
	for (j = 0; j < 8; j++) {
		if (card[i][j] != 0) {
			printf("%d\n", card[i][j]);
		}
	}
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 8; j++) {
			printf("%d ", card[i][j]);
		}
		printf("\n");
	}
}
