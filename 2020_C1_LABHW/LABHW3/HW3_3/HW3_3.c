//HW 20200988 ������ ��ǻ���а� 20�й�
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