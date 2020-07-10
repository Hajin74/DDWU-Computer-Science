// 20200988 유하진
#include <stdio.h>

int main(void)
{
	int key, num;
	int i = 1;
	int keyLocation = 0;

	scanf_s("%d", &key);
	scanf_s("%d", &num);

	while (num != -1 && keyLocation < 1)
	{
		keyLocation = 0;
		i++;
		scanf_s("%d", &num);

		if (num == key)
		{
			keyLocation = i;
		}
	}

	if (keyLocation == 0)
		printf("not found\n");
	else
		printf("%d\n", keyLocation);








	/*
	do
	{
		j = 0;

		scanf_s("%d", &num);
		i++;

		if (num == key)
		{
			j = i;
		}

	} while (num != -1);

	if (j == 0)
		printf("not found\n");
	else
		printf("%d\n", j);
		*/

}

/* 맞는 정답
int main(void)
{
	int key, num = 0;
	int index = 0;
	int found = 0;

	scanf("%d", &key);

	while(num != -1)
	{
		scanf("%d", &num);
		index++;

		if(num == key && found == 0)
		{
			found = index;
		}
	}

	if(found > 0)
		printf("%d\n", found);
	else
		printf("not found\n");
}
*/