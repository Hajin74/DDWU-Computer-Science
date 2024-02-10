// 20200988 À¯ÇÏÁø

#include <stdio.h>

int main(void)
{
	int integers;
	int integer;
	int even = 0;

	printf("Enter the # of integers :");
	scanf_s("%d", &integers);

	for (int i = 1; i <= integers; i++)
	{
		printf("Enter an integer : ");
		scanf_s("%d", &integer);

		if (integer % 2 == 0)
			even++;
	}

	printf("The number of even numbers is %d\n", even);

}