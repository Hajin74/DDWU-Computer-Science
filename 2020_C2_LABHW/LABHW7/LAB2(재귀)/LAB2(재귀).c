// ��ǻ���а� 20200988 ������
#include <stdio.h>
void to_binary(int n);

int main(void) {
	int num;

	scanf_s("%d", &num);
	to_binary(num);

}

void to_binary(int n) {
	if (n == 1) {
		printf("%d ", n % 2);
	}
	else {
		to_binary(n / 2);
		printf("%d ", n % 2);
	}
}