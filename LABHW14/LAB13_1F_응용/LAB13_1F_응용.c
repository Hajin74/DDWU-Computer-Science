// 20200988 컴과 유하진
#define SIZE 3 
#include <stdlib.h> 
#include <time.h> 
#include <stdio.h> 
void printArray(int a[], int size); 
int equalArray(int a[], int b[], int size); 
void generateArray(int a[], int size);

int main(void) 
{
    int arrayA[SIZE], arrayB[SIZE];      
    int count = 0;           
    
    srand(time(NULL)); // 주어진 실행결과를 확인한 후 주석을 취소하여 여러 번 실행시켜본다      
    
    do      
    {           
        printf("\n%d 번째 시도\n", ++count);          
        generateArray(arrayA, SIZE);           
        generateArray(arrayB, SIZE); 

        // 두 개의 배열 출력 부분 추가 

        printf("ArrayA :");
        printArray(arrayA, SIZE);
        printf("ArrayB :");
        printArray(arrayB, SIZE);
        printf("\n");
    } while (!equalArray(arrayA, arrayB, SIZE)); 
}

void generateArray(int a[], int size) 
{
    int i;

    for (i = 0; i < size; i++)
        a[i] = rand() % 2;

    return;
}

void printArray(int a[], int size) // 앞 문제의 것을 그대로 사용 
{  
    int i; 

    for (i = 0; i < size; i++)   
        printf("%d ", a[i]);  
    printf("\n");  

    return; 
} 

int equalArray(int a[], int b[], int size) // 앞 문제의 것을 그대로 사용 
{    
    int i;

    for (i = 0; i < size; i++)
    {
        if (a[i] != b[i])
            return 0;
    }

    return 1;
}   