// 20200988 컴퓨터학과 유하진

#include <stdio.h>

int main(void)
{
	int num[5], i, total = 0, average;

	for (i = 0; i < 5; i++)
	{
		printf("Enter %dth number : ", i + 1);
		scanf_s("%d", &num[i]);
		total += num[i];
	}

	average = total / 5;
	printf("------------------------------------------\n");
	printf("총합은 %d\n", total);
	printf("평균은 %d\n", average);
	printf("------------------------------------------\n");

	for (i = 0; i < 5; i++)
		printf("array[%d] : %d\n", i, num[i]);

	return 0;
}