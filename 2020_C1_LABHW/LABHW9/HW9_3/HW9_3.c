// 20200988 컴퓨터학과 유하진
#include <stdio.h>

int main(void)
{
	int num, i;
	int total = 0;

	i = 1;
	while (i <= 5)
	{
		printf("0보다 큰 수를 입력(%d번째) :", i);
		scanf_s("%d", &num);

		while (num < 0)
		{	
			printf("입력이 잘못되었습니다. ");
			printf("0보다 큰 수를 입력(%d번째) :", i);
			scanf_s("%d", &num);
		}

		total += num;
		i++;
	}

	printf("입력된 값의 총 합 : %d\n", total);
}