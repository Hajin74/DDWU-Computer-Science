// 20200988 컴퓨터학과 유하진
#include <stdio.h>
void print5sum(num);
/*
int main(void)
{
	int i;
	
	for (i = 0; i <= 5; i++)
	{
		print5sum(5 * i + 1);
	}
	
	return 0;
}

void print5sum(num)
{
	int i;
	int sum = 0;

	for (i = num; i <= num + 4; i++)
	{
		sum += i;
	}

	printf("%d - %d까지 합 = %d\n", num, num + 4, sum);

	return;
}*/


int main(void)
{
	int i, j;
	int sum = 0;

	for(i = 1; i <= 26; i += 5)
	{
		for(j = i; j <= i + 4 ; j++)
		{
			sum += j;
		}
		printf("%d - %d까지의 합 : %d\n", i, i + 4, sum);
		sum = 0;
	}
}

/*
int main(void)
{
   int i,sum=0,preSum=0;

   for (i = 1; i <= 30; i++)
   {
	  sum += i;
	  if (i % 5 == 0)
	  {
		 printf("%d - %d 까지 합 = %d\n", i - 4, i, sum - preSum);
		 preSum = sum;
	  }
   }

}
*/