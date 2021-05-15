// 20200988 À¯ÇÏÁø
#include <stdio.h>

#include <stdio.h>

int main(void) {
	int key, num, n;
	int i = 1;
	int keyLocation = 0;

	scanf("%d", &num);
	scanf("%d", &key);

	for(i = 1; i <= num; i++) 
	{
		scanf("%d", &n);

		if (n == key && keyLocation == 0)
		{
			keyLocation = i;
		}
	}

	if (keyLocation == 0)
		printf("not found\n");
	else
		printf("%d\n", keyLocation);
}
