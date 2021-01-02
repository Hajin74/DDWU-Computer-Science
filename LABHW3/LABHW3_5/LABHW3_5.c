// 컴퓨터학과 20200988 유하진
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10 // 사이즈 상수 지정
void selectionSort(int list[], int size);

int main(void)
{
	int arr[10];
	int i;

	srand(time(NULL));

	printf("발생된 난수 :\t");
	for (i = 0; i < SIZE; i++) 
	{
		arr[i] = rand() % 100; // 난수 발생 시키고 배열에 저장
		printf("%2d ", arr[i]); // 난수 출력
	}

	selectionSort(arr, SIZE);
}

void selectionSort(int list[], int size) // 선택 정렬
{
	int i, j, temp, minIndex;

	for (i = 0; i < size - 1; i++)
	{
		minIndex = i;
		
		for (j = i + 1; j < size; j++) // 최솟값 찾기
		{
			if (list[j] < list[minIndex])
				minIndex = j;
		}

		temp = list[i]; // 최솟값과 배열 첫 수와 교환
		list[i] = list[minIndex];
		list[minIndex] = temp;
	}

	printf("\n정렬 후:\t"); // 출력
	for (i = 0; i < size; i++)
		printf("%2d ", list[i]);
	printf("\n");
}