// 20200988 컴퓨터학과 유하진

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int data[100];
	int num, i, max = -1;

	srand(time(NULL));
	
	printf("Enter the number of random numbers: ");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		data[i] = rand() % 100;
		if (data[i] > max)
			max = data[i];
	}

	printf("최대값은 %d\n", max);
	printf("-----------------------------------------------------\n");
	printf("발생된 난수는 \n");
	
	for (i = 0; i < num; i++)
	{
		if(i % 5 == 4)
			printf("%5d\n", data[i]);
		else
			printf("%5d", data[i]);
	}

	return 0;
}