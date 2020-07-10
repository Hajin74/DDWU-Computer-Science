// 20200988 컴과 유하진
#include <stdio.h>

int main(void)
{
	int scores[40];
	int num, i, average, total = 0;

	printf("Enter the number of scores(0 < number <= 40) : ");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("Enter a score : ");
		scanf_s("%d", &scores[i]);
	}
	
	printf("--------------------------------------------------\n");

	for (i = 0; i < num; i++)
		total += scores[i];

	average = total / num;

	printf("Total : %d\n", total);
	printf("Average : %d\n", average);

	for (i = 0; i < num; i++)
		printf("%d ", scores[i]);

	return 0;
}