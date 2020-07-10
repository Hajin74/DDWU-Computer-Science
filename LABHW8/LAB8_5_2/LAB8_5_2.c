// 20200988 À¯ÇÏÁø

#include <stdio.h>

int main(void)
{
	int rows;
	int columns;

	printf("Enter the number of rows : ");
	scanf_s("%d", &rows);
	printf("Enter the number of columns : ");
	scanf_s("%d", &columns);

	int i = 1;
	while(i <= rows)
	{
		int j = 1;
		while (j <= columns)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}
