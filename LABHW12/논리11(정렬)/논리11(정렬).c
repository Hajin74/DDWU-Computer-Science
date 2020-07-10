// 20200988 컴과 유하진
#include <stdio.h>

int main(void)
{
	int list[100];
	int num, i, j, temp;

	printf("학생 수 : ");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("list[%d] : ", i);
		scanf_s("%d", &list[i]);
	}
		
	for (i = 1; i < num; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (list[i] < list[j])
			{
				temp = list[j];
				list[j] = list[i];
				list[i] = temp;
			}
		}
	}

	for (i = 0; i < num; i++)
		printf("%d ", list[i]);
		
}