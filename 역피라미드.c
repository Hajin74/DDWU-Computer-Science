#include <stdio.h> // 역피라미드 

int main(void)
{
	int num;
	int i, j, k;
	
	printf("Enter a number : ");
	scanf("%d", &num);
	
	for(i = 0; i < (num + 1) / 2; i++)
	{
		for(j = 0; j < i; j++)
			printf(" ");
		
		for(k = num - i * 2; k > 0; k--)
			printf("*");
		
		printf("\n");
	}
}
