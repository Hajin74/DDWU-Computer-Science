// 20200988 ������
#include <stdio.h>

int main(void)
{
	int num;
	int result = 1;
	int i = 0;

	printf("Enter a number: ");
	scanf_s("%d", &num);

	while (i < num)
	{
		result *= (i + 1);
		i++;
	}

	printf("%d�� Factorial ���� %d�̴�.\n", num, result);
	return 0;
}