// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char id[15];
	char year[5] = "19";
	int n;

	printf("�ֹε�Ϲ�ȣ �Է�(\'-\' ���� ) : ");
	fgets(id, sizeof(id), stdin);

	strncat(year, id, 2);
	printf("����� %s�⵵ ���̱���\n", year);

	n = atoi(year);
	if (id[7] == '2') {
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 84�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.\n", n + 84);
	}
	else {
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 77�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.\n", n + 77);
	}
}