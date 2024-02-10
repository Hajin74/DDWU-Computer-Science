// 20200988 컴퓨터학과 유하진
#include <stdio.h>

int main(void)
{
	int number, k = 0;
	int sum = 2;

	printf("Enter a number : ");
	scanf_s("%d", &number); // 숫자 입력받기

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