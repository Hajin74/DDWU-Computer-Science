// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdlib.h>

int lottoGenerator() {
	int lotto[6];
	int i;

	srand(time(NULL));

	printf("���� ��ȣ: ");
	for (i = 0; i < 6; i++) {
		lotto[i] = rand() % 45 + 1;
		printf("%d ", lotto[i]);
	}
	printf("\n");
}

int main(void) {
	char answer;

	printf("*** �ζ� ��ȣ ������ ***\n");

	do {
		lottoGenerator();
		printf("�ٽ� �����ϰڽ��ϱ�? (y/n): \n");
		scanf(" %c", &answer); // ���ڸ� �Է¹��� ������ enterŰ�� ���ۿ� �ڵ����� ����Ǿ ���� ���ڸ� ���� �� �ڵ����� �Է��� �Ǿ�����. ���� ���������� �տ� ������ �־ ���͸� �������ش�.
	} while (answer == 'y');

}