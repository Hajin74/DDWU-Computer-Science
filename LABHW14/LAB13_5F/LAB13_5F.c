// 20200988 컴과 유하진
#include <stdio.h> 
void printArray(int a[], int size); 
void reverse(int a[], int size);

int main(void) 
{
    int binary[8];   
    int num;
    int bIndex = 0; 

    printf("Enter 양수(<256):");   
    scanf_s("%d", &num);        
    
    while (num > 0)
    {
        binary[bIndex++] = num % 2;
        num = num / 2;
    }

    reverse(binary, bIndex);
    printArray(binary, bIndex);

    return 0;
}

void printArray(int a[], int size) 
{
    int i;   

    for (i = 0; i < size; i++)   
        printf("%d", a[i]);
    printf("\n"); 

    return; 
} 

void reverse(int a[], int size) 
{
    int i, temp;

    for (i = 0; i < size / 2; i++)
    {
        temp = a[i];
        a[i] = a[size - i - 1];
        a[size - i - 1] = temp;
    }

} 