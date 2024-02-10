#include <stdio.h>

int main(void)
{
	int totalMinutes, hour, minute;

	printf("Enter the total minutes : ");
	scanf_s("%d", &totalMinutes);

	hour = totalMinutes / 60;
	minute = totalMinutes % 60;

	printf("%d minutes\n", totalMinutes);
	printf("%dh %dm\n", hour, minute);
}