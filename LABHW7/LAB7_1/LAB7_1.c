// 20200988 À¯ÇÏÁø

#include <stdio.h>
int main(void) {
	int num;
	printf("Enter a number :");
	scanf_s("%d", &num);

	switch (num)
	{
		case 1:
			printf("Spring\n");
			break;
		case 2:
			printf("Summner\n");
			break;
		case 3:
			printf("Fall\n");
			break;
		case 4:
			printf("Winter\n");
			break;
		default:
			printf("Invalid number\n");
			break;
	}
		
}