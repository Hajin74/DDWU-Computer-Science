// 20200988 컴퓨터학과 유하진
#include <stdio.h>

int main(void)
{
	int data[20];
	int number, i;

	printf("Enter a number :");
	scanf_s("%d", &number);

	for (i = 0; i < 20; i++)
		data[i] = number * (i + 1);

	for (i = 0; i < 20; i++)
	{
		if (i % 5 == 4)
		{
			if(data[i] > 9 && data[i] < 100)
				printf("\t %d\n", data[i]);
			else if(data[i] >= 100)
				printf("\t%d\n", data[i]);
			else
				printf("\t  %d\n", data[i]);
		}	
		else
		{
			if (data[i] > 9 && data[i] < 100)
				printf("\t %d", data[i]);
			else if (data[i] >= 100)
				printf("\t%d", data[i]);
			else
				printf("\t  %d", data[i]);
		}
	}
		
	printf("\n");
}