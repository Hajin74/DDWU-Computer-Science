// 20200988 컴퓨터학과 유하진
#include <stdio.h>

int main(void)
{
	int a[20];
	int n, key, count = 0;
	int i;

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

	return 0;
}