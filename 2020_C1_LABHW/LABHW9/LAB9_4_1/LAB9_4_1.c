// 20200988 컴퓨터학과 유하진
#include <stdio.h>

int main(void)
{
	int i = 1;
	int num;
	int total = 0;

	while (i <= 5)
	{
		printf("0보다 큰 수를 입력<%d번째> : ", i);
		scanf_s("%d", &num);
		
		if (num > 0)
		{ 
			total += num;
			i++;
		}
	}
	printf("입력된 값의 총 합 : %d\n", total);
}