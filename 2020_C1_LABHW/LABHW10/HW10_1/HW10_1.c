// 20200988 컴과 유하진
#include <stdio.h>
void printManyChars(char ch, int num);

int main(void)
{
	char c;
	int n;

	printf("Enter a character to print : ");
	scanf_s("%c", &c);
	printf("Enter the number of characters : ");
	scanf_s("%d", &n);

	printManyChars(c, n);

	return 0;

}

void printManyChars(char ch, int num)
{
	int i;
	for (i = 1; i <= num; i++)
	{
		printf("%c", ch);
	}
	printf("\n");
	return;
}