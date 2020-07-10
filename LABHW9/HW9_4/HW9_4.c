// 20200988 컴퓨터학과 유하진
#include <stdio.h>

int main(void)
{
    int i, prime;
    int count = 1;
    int num = 2;

    do
    {
        prime = 1; // 반복문이 실행될 때마다 소수라고 가정

        for (i = 2; i < num; i++) // i가 2부터 숫자까지 돌림
        {
            if (num % i == 0) // 숫자가 2부터 숫자까지 돌리는 와중에 나누어지면
            {
                prime = 0; // 소수가 아니다로 설정
                break; // 한 번 소수가 아니면 더 검사할 필요가 없으니 for문 탈출
            }
        }

        if (prime == 1) // 소수이면
        {
            printf("%d번째 소수는 %d\n", count, num); // 소수이다를 출력
            count++; // 소수일 때만 count가 카운트됨.
        }

        num++; // 소수이든 아니든 검사한 숫자는 다른 숫자로 넘김.

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

        printf("%d번째 소수는 %d\n", count, num);
        num++;
        count++;

    } while (count <= 10);
    */
