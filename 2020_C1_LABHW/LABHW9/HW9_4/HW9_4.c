// 20200988 ��ǻ���а� ������
#include <stdio.h>

int main(void)
{
    int i, prime;
    int count = 1;
    int num = 2;

    do
    {
        prime = 1; // �ݺ����� ����� ������ �Ҽ���� ����

        for (i = 2; i < num; i++) // i�� 2���� ���ڱ��� ����
        {
            if (num % i == 0) // ���ڰ� 2���� ���ڱ��� ������ ���߿� ����������
            {
                prime = 0; // �Ҽ��� �ƴϴٷ� ����
                break; // �� �� �Ҽ��� �ƴϸ� �� �˻��� �ʿ䰡 ������ for�� Ż��
            }
        }

        if (prime == 1) // �Ҽ��̸�
        {
            printf("%d��° �Ҽ��� %d\n", count, num); // �Ҽ��̴ٸ� ���
            count++; // �Ҽ��� ���� count�� ī��Ʈ��.
        }

        num++; // �Ҽ��̵� �ƴϵ� �˻��� ���ڴ� �ٸ� ���ڷ� �ѱ�.

    } while (count <= 10);

}
   






/*
    int count = 1;
    int num = 2;
    int  j;

    do
    {
        for (j = 2; j < num; j++)
        {
            if (num % j == 0)
            {
                num++;
                j = 2;
            }
        }

        printf("%d��° �Ҽ��� %d\n", count, num);
        num++;
        count++;

    } while (count <= 10);
    */
