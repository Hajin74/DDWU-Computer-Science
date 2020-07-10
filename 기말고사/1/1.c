#include <stdio.h>

int main(void)
{
	int a[20];
	int n, key;
	int i;
	int count = 0;

	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);

	scanf_s("%d", &key);

	for (i = 0; i < n; i++)
	{
		if (a[i] == key)
			count++;
	}

	printf("%d", count);
}