// 20200988 ��ǻ���а� ������ , 3��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int char_num(char* p, char c) // �̰��� �ۼ�, p�� ���� �����Ű�鼭 �Լ��� ����
{
	int sum = 0;
	int i;

	for (i = 0; *p != '\0'; i++) {
		if (*p == c) {
			sum++;
		}
		p++;
	}

	return sum;
}

int main(void) // �������� ����
{
	char w[30]; //���ڿ�
	char* p; // ���ڿ� ����Ű�� ������
	char ch; //����
	p = w;

	scanf("%c", &ch);
	scanf("%s", w);

	printf("%d\n", char_num(w, ch));
}