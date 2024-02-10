// 20200988 유하진
#include <stdio.h>

int main(void)
{
	int month;
	scanf_s("%d", &month);

	if (month >= 1 && month <= 12)
		printf("%d월\n", month);
	else
		printf("incorrect\n");
}