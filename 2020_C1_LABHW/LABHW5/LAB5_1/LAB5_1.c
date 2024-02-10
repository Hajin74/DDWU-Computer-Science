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

	printf("성별\t\t나이\t\t키\n");
	printf("%c\t\t%d\t\t%f", gender, age, height);
}