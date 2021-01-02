// 20200988 컴퓨터학과 유하진
#include <stdio.h>

int is_in(char w[], char ch)
{
    int i;

    for (i = 0; w[i] != '\0'; i++)
    {
        if (ch == w[i])
            return 0;
    }

    return 1;
}



int main(void)
{
    char word[20];
    int i;

    scanf_s("%s", word, 20);

    for (i = 0; i < 26; i++)
    {
        if (is_in(word, 'A' + i))
            printf("%c", 'A' + i);
    }
}