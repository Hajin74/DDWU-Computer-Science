// 20200988 À¯ÇÏÁø

#include <stdio.h>

int main(void)
{
	int scores, score, bestScore, worstScore, i;

	printf("Enter the number of score: ");
	scanf("%d", &scores);

	bestScore = -1;
	worstScore = 2147483627;

	for (i = 1; i <= scores; i++)
	{
		printf("Enter a score: ");
		scanf("%d", &score);

		if (score > bestScore)
			bestScore = score;
		if (score < worstScore)
			worstScore = score;
	}

	if (scores == 0)
		printf("no data\n");
	else
	{
		printf("The best score is %d\n", bestScore);
		printf("The worst score is %d\n", worstScore);
	}
}