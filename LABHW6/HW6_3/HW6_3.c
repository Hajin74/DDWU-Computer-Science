// 20200988 유하진 컴퓨터학과
#include <stdio.h>

int main(void)
{
	int height, weight;
	char gender;

	printf("Enter your genter(M/F): ");
	scanf_s("%c", &gender);

	if (gender == 'F')
	{
		printf("Enter your height: ");
		scanf_s("%d", &height);
		printf("Enter your weight: ");
		scanf_s("%d", &weight);

		if (height <= weight + 110)
			printf("You NEED a diet. Try HARDER.\n");
		else
			printf("You do NOT need a diet. Keep exercising.\n");
	}
	else
		printf("Sorry, this fitness center is for women only.\n");

}