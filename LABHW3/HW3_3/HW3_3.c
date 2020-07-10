//HW 20200988 유하진 컴퓨터학과 20학번
#include <stdio.h>

int main(void)
{
	int totalSeconds, hour, minute, second;

	printf("Enter h m s: ");
	scanf_s("%d %d %d", &hour, &minute, &second);

	totalSeconds = hour * 3600 + minute * 60 + second;
	printf("---Calculation Result---\n");
	printf("Total %d seconds", totalSeconds);
}