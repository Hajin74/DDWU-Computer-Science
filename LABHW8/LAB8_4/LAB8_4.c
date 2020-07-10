// 20200988 À¯ÇÏÁø

#include <stdio.h>

int main(void)
{
	int score;
	int best = 0;

	for (int i = 1; i <= 5; i++)
	{
		printf("Enter a score : ");
		scanf_s("%d", &score);

		if (score > best)
			best = score;
	}

	printf("The best score is %d\n", best);
}