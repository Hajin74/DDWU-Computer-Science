#include <stdio.h>

int main(void)
{
	const double PI = 3.141592;
	int radius;

	printf("Enter a radius : ");
	scanf_s("%d", &radius);

	double area = PI * radius * radius;
	printf("The area of a circle with %d :\t%f\n", radius, area);
}