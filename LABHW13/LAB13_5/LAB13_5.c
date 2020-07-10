// 20200988 컴퓨터학과 유하진
#include <stdio.h>

int main(void)
{
	int decimal, binary[8], length = 0;
	int i = 0;

	printf("Enter 양수( < 256) :");
	scanf_s("%d", &decimal);

	while (decimal > 1)
	{
		binary[i] = decimal % 2;
		decimal /= 2;
		length++;
		i++;
	}
	binary[i] = 1;
	length++;

	for (i = length - 1; i >= 0; i--)
		printf("%d", binary[i]);

	printf("\n");
}
/*
int main(void)
{
	int binary[10];
	int num, i, index = 0;

	printf("Enter 양수 : ");
	scanf("%d", &num);

	while(num >= 1)
	{
		if(num % 2 == 0)
		{
			binary[index++] = 0;
			num /= 2;
		}
		else
		{
			binary[index++] = 1;
			num /= 2;
		}
	}

	for(i = 0; i < index; i++)
	{
		printf("%d", binary[index - i - 1]);
	}
}
*/

/*
int main(void)
{
	int binary[8];
	int num;
	int i = 0, j;

	printf("Enter 양수 : ");
	scanf("%d", &num);

	while(num > 0)
	{
		binary[i++] = num % 2;
		num = num / 2;
	}

	for(j = i - 1; j >= 0; j--)
		printf("%d", binary[j]);
}
*/