#include <stdio.h>

int main(void)
{
	char grade;
	int score;

	printf("Enter a student grade(A or F) : ");
	scanf_s("%c", &grade);

	if (grade == 'A')
	{
		printf("Enter your GOOD score : ");
		scanf_s("%d", &score);
		printf("������ %d���̶�� ���� ������ �´±���. ��� �������ؿ�.\n", score);

	}
	else
	{
		printf("Enter your BAD score : ");
		scanf_s("%d", &score);
		printf("������ %d���̶�� �� ������ �ؾ߰ڳ׿�.\n", score);
	}
}