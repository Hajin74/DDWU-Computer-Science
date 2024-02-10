#include <stdio.h>

int main(void)
{
	int num;
	int i, j, k;
	
	printf("Enter a number : ");
	scanf("%d", &num);
	
	for(i = 0; i < (num + 1) / 2; i++)
	{
		for(j = i; j < (num + 1) / 2; j++)
			printf(" ");
		
		if(num % 2 == 0)
		{
			for(k = num - (i + 1) * 2; k < num; k++)
				printf("*");
		}
		else
		{
			for(k = num - i * 2 - 1; k < num; k++)
				printf("*");
		}
		printf("\n");
	}
} 
