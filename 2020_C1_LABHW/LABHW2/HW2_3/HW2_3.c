#include <stdio.h>

int main(void)
{
	int seconds, hour, minute, second;

	seconds = 14000;
	hour = seconds / 60 / 60;
	minute = seconds % 3600 /60;
	second = seconds % 3600 % 60;
	
	printf("%d seconds :\n", seconds);
	printf("%dh %dm %ds\n", hour, minute, second);
}