// 20200988 ��ǻ���а� ������
#include <stdio.h>
int fibo(int n);

int main(void)
{
	int n, idx;
	printf("��� �Ǻ���ġ �������� ����ұ��?(3���� ū ����):");
	scanf_s("%d", &n);
	for (idx = 0; idx < n; idx++)
	{
		printf("%10d ", fibo(idx));
		if ((idx + 1) % 5 == 0)
			printf("\n");
	}
	printf("\n");
}
int fibo(int n) // ��������� �������� �ʴ´�
{
	int n1 = 1, n2 = 1, n3;
	int i;

	if (n == 0 || n == 1)
		return 1;

	for (i = 2; i <= n; i++)
	{
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
	}

	return n3;
}

/*
#include <stdio.h>
int fibo(int n);
int main(void)
{
	int n, idx;
	printf("��� �Ǻ���ġ �������� ����ұ��?(3���� ū ����):");
	scanf_s("%d", &n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d ", fibo(idx));
		if ((idx + 1) % 5 == 0)
			printf("\n");
	}
	printf("\n");
}

int fibo(int n) // ��������� �������� �ʴ´�
{
	int n1 = 0, n2 = 1, n3 = 1;
	int i;

	for (i = 0; i < n; i++) {
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}

	return n3;
}
*/