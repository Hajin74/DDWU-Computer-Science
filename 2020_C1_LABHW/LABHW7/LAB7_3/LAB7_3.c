//20200988 À¯ÇÏÁø
#include <stdio.h>

int main(void) {
	int num;
	int result = 1;
	int i = 1;

	printf("Enter a number:");
	scanf_s("%d", &num);

	while (i <= num)
	{
		result = i * i * i;
		printf("%d\n", result);
		i++;
	}
}