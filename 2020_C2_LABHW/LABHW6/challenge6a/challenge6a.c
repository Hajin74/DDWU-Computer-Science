// ��ǻ���а� 20200988 ������
#include <stdio.h>

int main(void) {
	char firstWord[81], secondWord[81];
	int i, j, flag = 1;

	printf("Enter the first word : ");
	scanf_s("%s", firstWord, 81);
	printf("Enter the second word : ");
	scanf_s("%s", secondWord, 81);

	if (sizeof(firstWord) != sizeof(secondWord))
		printf("�� �ܾ�� �ٸ���\n");
	else {
		for (i = 0; i < sizeof(firstWord); i++) {
			if (firstWord[i] != secondWord[i]) {
				printf("�� �ܾ�� �ٸ���\n");
				flag = 0;
				break;
			}
		}

		if(flag == 1)
			printf("�� �ܾ�� ����\n");
	}
}