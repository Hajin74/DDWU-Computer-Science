// 20200988 컴퓨터학과 유하진

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i, num, random;
	int count[10], data[100];

	srand(time(NULL));

	for (i = 0; i < 10; i++)
		count[i] = 0;

	printf("Enter the number of random numbers : ");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		data[i] = rand() % 10;
		count[data[i]]++;
	}

	for (i = 0; i < 10; i++)
		printf("%d의 개수는 %d\n", i, count[i]);

	printf("----------------------------------------\n");
	printf("발생된 난수는\n");
	
	for (i = 0; i < num; i++)
	{
		if (i % 5 == 4)
			printf("%5d\n", data[i]);
		else
			printf("%5d", data[i]);
	}

	return 0;
}