#include <stdio.h>

int main(void)
{
	int totalMinutes, hour, minute;

	printf("Enter hour : ");
	scanf_s("%d", &hour);
	printf("Enter minute : ");
	scanf_s("%d", &minute);

	totalMinutes = minute + (hour * 60);
	printf("Total %d minutes", totalMinutes);
}