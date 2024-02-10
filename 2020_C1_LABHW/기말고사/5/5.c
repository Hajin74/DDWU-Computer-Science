#include <stdio.h>

int checking(char w[])
{
	if (w[0] == 'a' && w[1] == 'p' && w[2] == 'p' && w[3] == 'l' && w[4] == 'e')
		return 1;
	return 0;
}
int main(void)
{
	char w0[81] = "apple";
	char w1[81], w2[81], w3[81];

	scanf("%s %s %s", w1, w2, w3);

	printf("%d", checking(w1));
	printf("%d", checking(w2));
	printf("%d", checking(w3));
}