// 20200988 ��ǻ���а� ������
#include <stdio.h>
void save(int money);
static acc;

int main(void)
{
	int money;

	printf("������ �ݾ�(-1 for exit):");
	scanf_s("%d", &money);
	while (money != -1)
	{
		save(money);
		printf("������ �ݾ�(-1 for exit):");
		scanf_s("%d", &money);
	}

	printf("�Ա� �Ϸ� \n");
	return 0;
}

void save(int money)
{
	acc += money;
	printf("��������� �Աݾ� %d \n", acc);
}

/*
#include <stdio.h>
void save(int money);
static int t = 0;

int main(void) {
	int m;

	while (1) {
		printf("�� ����?");
		scanf_s("%d", &m);

		if (m == -1) {
			printf("�ԱݿϷ�");
			break;
		}
		else {
			save(m);
		}
	}
}

void save(int money) {
	t += money;
	printf("������� �Աݾ� : %d\n", t);
}
*/