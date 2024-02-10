// 20200988 컴퓨터학과 유하진
#include <stdio.h>
void save(int money);
static acc;

int main(void)
{
	int money;

	printf("저금할 금액(-1 for exit):");
	scanf_s("%d", &money);
	while (money != -1)
	{
		save(money);
		printf("저금할 금액(-1 for exit):");
		scanf_s("%d", &money);
	}

	printf("입금 완료 \n");
	return 0;
}

void save(int money)
{
	acc += money;
	printf("현재까지의 입금액 %d \n", acc);
}

/*
#include <stdio.h>
void save(int money);
static int t = 0;

int main(void) {
	int m;

	while (1) {
		printf("얼마 저장?");
		scanf_s("%d", &m);

		if (m == -1) {
			printf("입금완료");
			break;
		}
		else {
			save(m);
		}
	}
}

void save(int money) {
	t += money;
	printf("현재까지 입금액 : %d\n", t);
}
*/