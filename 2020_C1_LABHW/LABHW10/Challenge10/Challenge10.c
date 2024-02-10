// 20200988 ��ǻ���а� ������
#include <stdio.h>
void printFibo(int n);

int main(void)
{
	int num, i;

	printf("��� �Ǻ���ġ �������� ����ұ��? (3���� ū ����) :");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		printFibo(i);
	}
	printf("\n");
}

/*
void printFibo(int n)
{
	int a = 1, b = 1;
	int c = 2;
	int i;

	if (n == 0 || n == 1)
		printf("1 ");
	else
	{
		for (i = 1; i < n; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		printf("%d ", c);
	}
	return;
}
*/


void printFibo(int n) // (n + 1)��° ���� ���
{
	int n1 = 1, n2 = 1, n3 = n1 + n2;
	int i;

	if(n == 0 || n == 1)
		printf("1 ");
	else
	{
		for(i = 2; i <= n; i++)
		{
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
		}
		printf("%d ", n3);
	}
}
