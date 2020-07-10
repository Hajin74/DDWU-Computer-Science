// 20200988 À¯ÇÏÁø
#include <stdio.h>

int main(void) {
	int num;
	int i = 1;

	printf("Enter a number: ");
	scanf_s("%d", &num);

	while (i <= num)
	{
		if (i % 3 == 0 || i % 5 == 0)
			printf("%d ", i);
		i++;
	}
}