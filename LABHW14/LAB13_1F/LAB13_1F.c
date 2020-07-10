// 20200988 컴과 유하진
#define SIZE 5 
#include <stdio.h> 
void printArray(int a[], int size); 
int equalArray(int a[], int b[], int size);

int main(void) {
    int arrayA[SIZE] = { 1, 2, 3, 4, 1 };      
    int arrayB[SIZE];
    int arrayC[SIZE];
    int i;

    for (i = 0; i < SIZE; i++) 
    { 
        arrayB[i] = arrayA[i];           
        arrayC[5 - i - 1] = arrayB[i]; // 거꾸로 배열 입력
    }

    // 배열 3 개를 출력하는 부분 추가: printArray 호출 
    printArray(arrayA, SIZE);
    printArray(arrayB, SIZE);
    printArray(arrayC, SIZE);

    if (equalArray(arrayA, arrayB, SIZE)) // if (equalArray(arrayA, arrayB, SIZE) == 1)           
        printf("ArrayA 와 arrayB 는 같다\n");     
    else          
        printf("ArrayA 와 arrayB 는 다르다\n"); 

    if (equalArray(arrayA, arrayC, SIZE))           
        printf("ArrayA 와 arrayC 는 같다\n");      
    else          
        printf("ArrayA 와 arrayC 는 다르다\n");
}

void printArray(int a[], int size) // 그대로 사용한다 
{  
    int i;  

    for (i = 0; i < size; i++)   
        printf("%d ", a[i]);  
    printf("\n");  

    return; 
} 

// 배열 a 와 b 가 같으면 1 을 다르면 0 을 반환하는 함수를 정의한다 
// flag 변수 없이 작성해보자! 
int equalArray(int a[], int b[], int size) 
{  
    int i;

    for (i = 0; i < size; i++)
    {
        if (a[i] != b[i])
            return 0;
    }

    return 1;
}  