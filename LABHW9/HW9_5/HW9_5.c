// 20200988 ��ǻ���а� ������
#include <stdio.h>

int main(void)
{
	int number, k = 0;
	int sum = 2;

	printf("Enter a number : ");
	scanf_s("%d", &number); // ���� �Է¹ޱ�

	while (number >= sum)
	{
		sum *= 2;
		k++;
	}

	printf("%d\n", k);
}

/*
int main(void)
{
	int num, sum = 1;
	int i, k = 0;

	printf("Enter a number : ");
	scanf("%d", &num);

	while(sum < num)
	{
		sum *= 2 ;
		if(sum <= num)
			k++;
	}

	printf("%d", k);
}
*/