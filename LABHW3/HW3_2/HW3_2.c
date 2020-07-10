//HW3_2 20200988 유하진 컴퓨터학과 20학번
#include <stdio.h>

int main(void)
{
	int totalSeconds, hour, minute, second;

	printf("Enter the total seconds : ");
	scanf_s("%d", &totalSeconds);

	hour = totalSeconds / 3600;
	minute = totalSeconds % 3600 / 60;
	second = totalSeconds % 3600 % 60;

	printf("---Calculation Result---\n");
	printf("%d seconds\n", totalSeconds);
	printf("%dh %dm %ds", hour, minute, second);
}