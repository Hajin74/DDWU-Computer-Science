#include <stdio.h>

int main(void)
{
	int num, i;
	int sum = 0;

	i = 1;
	while (i <= 5)
	{
		do
		{
			printf("0보다 큰 수를 입력(%d번째) : ", i);
			scanf_s("%d", &num);
		} while (num <= 0);
		
		sum += num;
		i++;
	}

	printf("입력된 값의 총 합 : %d\n", sum);
}