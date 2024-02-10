#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdlib.h>
#define MAX_LIST_SIZE 10 	// 리스트의 최대크기

typedef int element;			// 항목의 정의
typedef struct {
	element array[MAX_LIST_SIZE];	  // 배열 정의
	int size;		  // 현재 리스트에 저장된 항목들의 개수
} ArrayListType;

// 오류 처리 함수
void error(char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

// 리스트 초기화 함수
void init(ArrayListType* L)
{
	L->size = 0;
}

// 리스트가 비어 있으면 1을 반환
// 그렇지 않으면 0을 반환
int is_empty(ArrayListType* L)
{
	return L->size == 0;
}

// 리스트가 가득 차 있으면 1을 반환
// 그렇지 많으면 1을 반환
int is_full(ArrayListType* L)
{
	return L->size == MAX_LIST_SIZE;
}

element get_entry(ArrayListType* L, int pos)
{
	if (pos < 0 || pos >= L->size)
		error("위치 오류");
	return L->array[pos];
}

// 리스트 출력
void print_list(ArrayListType* L)
{
	int i;
	for (i = 0; i < L->size; i++)
		printf("%d->", L->array[i]);
	printf("리스트끝\n");
}


void clear(ArrayListType* L)
{
	L->size = 0;
}

void insert_first(ArrayListType* L, element item)
{
	int i;
	if (is_full(L))
		printf("리스트 오버플로우\n");
	else {
		for (i = L->size - 1; i >= 0; i--)
			L->array[i + 1] = L->array[i];
		L->array[0] = item;
		L->size++;
	}
}

// 코드 작성 부분
void delete_by_key(ArrayListType* L, element key)
{
	int i, j;
	element item = key;

	for (i = 0; i < L->size; i++) {
		if (key == L->array[i]) {
			for (j = i; j < L->size - 1; j++) {
				L->array[j] = L->array[j + 1];
			}
			L->size--;

			return;
		}
	}
}


int main(void)
{
	ArrayListType list1;
	int n, key;

	init(&list1);
	scanf("%d", &n);

	while (n != -1) {
		insert_first(&list1, n);
		scanf("%d", &n);
	}
	scanf("%d", &key);

	print_list(&list1);
	delete_by_key(&list1, key);
	print_list(&list1);
}