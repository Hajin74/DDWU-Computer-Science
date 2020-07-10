// 20200988 컴퓨터학과 유하진
#include <stdio.h>

int main(void)
{
	int number, scores[20];
	int i, j;

	printf("Enter the number of scores << = 20 > : ");
	scanf_s("%d", &number);

	for (i = 0; i < number; i++)
	{
		printf("Enter a score :");
		scanf_s("%d", &scores[i]);
	}

	for (i = 0; i < number; i++)
	{
		if(i >= 9)
			printf("Student %d :", i + 1);
		else
			printf("Student  %d :", i + 1);

		for (j = 0; j < scores[i]; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

/*
int main(void)
{
	int num, i, j;
	int scores[20];

	printf("Enter the number of score(<=20) :");
	scanf("%d", &num);

	for(i = 0; i < num; i++)
	{
		printf("Enter a score : ");
		scanf("%d", &scores[i]);
	}

	for(i = 0; i < num; i++)
	{
		printf("Student\t%2d : ", i + 1);
		for(j = 0; j < scores[i]; j++)
			printf("*");
		printf("\n");
	}
}
*/
