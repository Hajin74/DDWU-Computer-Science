// 20200988 컴퓨터학과 유하진
#include <stdio.h>

int main(void)
{
	int number;

	printf("Enter a number(양수) :");
	scanf_s("%d", &number);

	while (number < 0)
	{
		printf("Enter a number(양수) :");
		scanf_s("%d", &number);
	}
	printf("입력된 양수는 %d\n", number);
}

/*
int number;

	while(1)
	{
		printf("Enter a number 양수 : ");
		scanf("%d", &number);

		if(number > 0)
			break;
	}

	printf("입력된 양수는 %d ", number);
*/