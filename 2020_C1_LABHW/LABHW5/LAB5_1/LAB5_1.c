#include <stdio.h>

int main(void)
{
	int age;
	char gender;
	double height;

	printf("Enter your gender : ");
	scanf_s("%c", &gender);
	printf("Enter your age : ");
	scanf_s("%d", &age);
	printf("Enter your height : ");
	scanf_s("%lf", &height);

	printf("����\t\t����\t\tŰ\n");
	printf("%c\t\t%d\t\t%f", gender, age, height);
}