// 20200988 �İ� ������
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int numbers[10];
	int i, average, total = 0;

	srand(time(NULL));

	for (i = 0; i < 10; i++)
		numbers[i] = rand() % 100;

	for (i = 0; i < 10; i++)
		total += numbers[i];
	
	average = total / 10;
	printf("����� %d\n", average);

	for (i = 0; i < 10; i++)
		printf("%d ", numbers[i]);

	printf("\n");
	return 0;
}