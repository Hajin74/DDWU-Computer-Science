// 20200988 ��ǻ���а� ������
#include <stdio.h> 
void printUpperCase(char s[]);
int strLength(char s[]);

int main(void)
{
    char str[81];

    printf("Enter a string:");
    scanf_s("%s", str, 81);

    printf("���̴� %d\n", strLength(str)); 

    printf("�빮�ڸ� ����ϸ�\n");
    printUpperCase(str); 
}

void printUpperCase(char s[])
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            printf("%c", s[i]);
    printf("\n");
}

int strLength(char s[])
{
    int i;

    for (i = 0; s[i] != '\0'; i++);

    return i;
}