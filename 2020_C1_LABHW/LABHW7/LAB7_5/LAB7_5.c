//20200988 ������
#include <stdio.h>

int main(void) 
{
	int num, i;
	int sum = 0;
	int total = 1;

	printf("Enter a number :");
	scanf_s("%d", &num);
	
	i = 1;
	while (i <= num)
	{
		sum += 3;
		total *= 3;
		i++;
	}

	printf("3�� %d�� ���� ���� %d�̴�.\n", num, sum);
	printf("3�� %d�� ���� ���� %d�̴�.\n", num, total);

	return 0;
}