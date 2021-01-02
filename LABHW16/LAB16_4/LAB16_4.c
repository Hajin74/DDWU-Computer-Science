// 컴퓨터학과 20200988 유하진
#include <stdio.h>

int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j, total = 0, max, maxTotal = 0;
	double average;

	// 가, 나
	printf("배열 test의 엘리먼트를 출력합니다.\n\n");
	for (i = 0; i < 4; i++)
	{
		printf("%d번째 row:", i + 1);
		for (j = 0; j < 3; j++)
		{
			printf("%4d", test[i][j]);
		}
		printf("\n");
	}

	// 다
	printf("\n다)\n");
	printf("배열 test의 엘리먼트를 출력합니다.\n\n");

	for (i = 0; i < 4; i++) // 입력
		test[i][2] = -1;

	for (i = 0; i < 4; i++) // 출력
	{
		printf("%d번째 row:", i + 1);
		for (j = 0; j < 3; j++)
		{
			printf("%4d", test[i][j]);
		}
		printf("\n");
	}

	// 라
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
			total += test[i][j];
	}

	average = (double)total / 12;
	printf("\n라)\n");
	printf("Total is %d\n", total);
	printf("Average is %.2lf\n", average);
	
	// 마
	printf("\n마)\n");
	for (i = 0; i < 4; i++)
	{
		max = -1;
		printf("%d번째 row에서의 최댓값:", i + 1);
		for (j = 0; j < 3; j++)
		{
			if (max < test[i][j])
				max = test[i][j];
		}
		maxTotal += max;
		printf(" %d\n", max);
	}
	printf("최댓값의 합: %d\n", maxTotal);
}