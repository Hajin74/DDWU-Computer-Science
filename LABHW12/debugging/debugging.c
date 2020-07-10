#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int data[20];
	int i, sum = 0;
	int n;
	srand(time(NULL));

	printf("Enter the number of data:");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
		data[i] = rand() % 100;

		for (i = 0; i < n; i++)
		sum += data[i];

	printf("Æò±ÕÀº %d\n", sum / 10);
	for (i = 0; i < n; i++)
		printf("%d ", data[i]);
	printf("\n");

	return 0;
}