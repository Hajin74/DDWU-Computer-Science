// HW5_3 20200988 ������ ��ǻ���а� 20�й�
#include <stdio.h>
#define CONVERSION_FACTOR 9.0 / 5.0

int main(void)
{
	double celsius;
	const int BASE = 32;

	printf("Enter a celsius temperature : ");
	scanf_s("%lf", &celsius);

	double fahrenheit = celsius * CONVERSION_FACTOR + BASE;
	printf("Fahrenheit Equivalent : %f", fahrenheit);

}