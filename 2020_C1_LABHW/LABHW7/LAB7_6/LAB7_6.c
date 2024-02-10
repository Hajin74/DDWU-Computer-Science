// 20200988 À¯ÇÏÁø
#include <stdio.h>

int main(void)
{
	int i = 0;
	int stu;
	int score;
	int total = 0;
	
	printf("Enter a student number: ");
	scanf_s("%d", &stu);

	while (i < stu)
	{
		printf("Enter a score: ");
		scanf_s("%d", &score);
		total += score;
		i++;
	}

	printf("The total is %d\n", total);
}
	