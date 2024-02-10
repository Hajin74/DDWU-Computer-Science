// 20200988 À¯ÇÏÁø
#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 4; j++)
		{
			printf("%d * %d = %d\t", i, 2 * j, i * 2 * j);
		}
		printf("\n");
	}
}

/*
int main(void)
{
	int i, j;

	i = 1;
	while (i <= 9)
	{
		j = 2;
		while (j <= 8)
		{
			printf("%d * %d = %d\t\t", i, j, i * j);
			j += 2;
		}
		printf("\n");
		i++;
	}

}
*/