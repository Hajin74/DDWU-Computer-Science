//HW3_4 20200988 ������ ��ǻ���а� 20�й�
#include <stdio.h>

int main(void)
{
	int base, height, width, area, circumference;

	printf("�غ��� ���̸� �Է��ϼ��� : ");
	scanf_s("%d %d", &base, &height);

	area = base * height / 2;
	printf("�غ��� ���̰� ���� %d�� %d�� �ﰢ���� ���̴� %d�̴�\n", base, height, area);

	printf("���簢���� ���ο� ���̸� �Է��ϼ��� : ");
	scanf_s("%d %d", &width, &height);

	circumference = (width * 2) + (height * 2);
	area = width * height;
	printf("���ο� ���̰� ���� %d�� %d�� ���簢���� �ѷ��� ���̴� %d�� %d�̴�\n", width, height, circumference, area);
}
