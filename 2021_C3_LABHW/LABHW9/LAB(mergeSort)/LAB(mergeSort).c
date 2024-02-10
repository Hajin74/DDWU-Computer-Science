#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArr(int a[], int p, int r) {
    int i;

    for (i = p; i < r; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void merge(int data[], int p, int q, int r) {
    int i = p, j = q + 1, k = p;
    int *tmp = (int*)malloc(sizeof(int) * (r + 1));

    while (i <= q && j <= r) {
        if (data[i] <= data[j]) 
            tmp[k++] = data[i++];
        else 
            tmp[k++] = data[j++];
    }

    while (i <= q) 
        tmp[k++] = data[i++];

    while (j <= r) 
        tmp[k++] = data[j++];

    for (int a = p; a <= r; a++) 
        data[a] = tmp[a];

    free(tmp);
}

void mergeSort(int data[], int p, int r) {
    int q;

    if (p < r) {
        q = (p + r) / 2;
        mergeSort(data, p, q);
        mergeSort(data, q + 1, r);
        merge(data, p, q, r);
    }
}

int main() {
    int *data, n;
    int i;

    scanf("%d", &n);
    data = (int*)malloc(sizeof(int) * n);

    srand(time(NULL));
    for (i = 0; i < n; i++)
        data[i] = rand() % 100;

    printArr(data, 0, n);
    mergeSort(data, 0, n - 1);
    printArr(data, 0, n);

    free(data);

    return 0;
}

