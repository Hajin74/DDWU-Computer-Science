// 20200988 컴퓨터학과 유하진
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int number, random[100];
	int average, sum = 0;
	int i;

	srand(time(NULL));

	printf("Enter the number of random numbers ( <= 100) :");
	scanf_s("%d", &number);

	for (i = 0; i < number; i++)
	{
		random[i] = rand() % 100;
		sum += random[i];	
	}

	average = sum / number;
	printf("난수의 평균은 %d\n", average);
	printf("발생된 난수는\n");

	for (i = 0; i < number; i++)
	{
		if (i % 5 == 4)
		{
			if(random[i] > 9)
				printf("\t%d\n", random[i]);
			else
				printf("\t %d\n", random[i]);
		}	
		else
		{
			if(random[i] > 9)
				printf("\t%d", random[i]);
			else
				printf("\t %d", random[i]);
		}		
	}
}

/*
	int num, average, total = 0;
	int i;
	int randomNums[100];

	srand(time(NULL));

	printf("Enter the number of random numbers : ");
	scanf("%d", &num);

	for(i = 0; i < num; i++)
	{
		randomNums[i] = rand() % 100;
		total += randomNums[i];
	}

	average = total / num;
	printf("난수의 평균은 %d\n", average);
	printf("발생된 난수는\n");

	for(i = 0; i < num; i++)
	{
		if(i % 5 == 4)
			printf("%5d\n", randomNums[i]);
		else
			printf("%5d", randomNums[i]);
	}
*/
