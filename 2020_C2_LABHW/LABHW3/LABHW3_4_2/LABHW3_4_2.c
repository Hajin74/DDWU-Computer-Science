// ��ǻ���а� 20200988 ������
#include <stdio.h>

int main(void)
{
	int element, set[5], index = 0, flag;
	int i;

	printf("���տ� �߰��� ���� : ");
	scanf_s("%d", &element);
	set[index++] = element;
	printf("{ %d }\n", element);

	while (index < 5)
	{
		flag = 1;

		printf("���տ� �߰��� ���� : ");
		scanf_s("%d", &element);
	
		for (i = 0; i < index; i++)
		{
			if (element == set[i])
			{
				flag = 0;
				break;
			}
		}

		if (flag)
		{
			set[index++] = element;

			printf("{");

			for (i = 0; i < index; i++)
			{
				if (i == index - 1)
					printf(" %d ", set[i]);
				else
					printf(" %d ,", set[i]);
			}

			printf("}\n");
		}
		else
			printf("%d�� �̹� ���տ� ����\n", element);
	}
}