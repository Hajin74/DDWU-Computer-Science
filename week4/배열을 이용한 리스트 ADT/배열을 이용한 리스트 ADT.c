#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#define MAX_LIST_SIZE 100 // 리스트 최대크기

typedef int element; // 항목의 정의 (자료형 결정)
typedef struct {
	element array[MAX_LIST_SIZE]; // 배열 정의
	int size; // 현재 리스트에 저장된 항목들의 개수
} ArrayListType; // 하나의 타입으로 정의

// 오류 처리 함수
void error(char* message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
}

// 리스트 초기화 함수
void init(ArrayListType* L) {
	L->size = 0;
}

// 공백 검출
int is_empty(ArrayListType* L) {
	return (L->size == 0);
	// 비어 있으면 1 반환 or 0을 반환
}

// 포화 검출
int is_full(ArrayListType* L) {
	return (L->size == MAX_LIST_SIZE - 1);
}

// peek
element get_entry(ArrayListType* L, int pos) {
	if(pos < 0 || pos >= MAX_LIST_SIZE) {
		error("워치 오류");
	}
	return L->array[pos];
}

// 리스트 출력
void print_list(ArrayListType* L) {
	int i;

	for (i = 0; i < L->size; i++) {
		printf("%d->", L->array[i]);
	}
	printf("리스트 끝\n");
}

// 마지막 삽입
void insert_last(ArrayListType* L, element item) {
	if (L->size >= MAX_LIST_SIZE) {
		error("리스트 오버플로우");
	}
	
	L->array[L->size++] = item;
}

// 삽입
void insert(ArrayListType* L, int pos, element item) {
	int i;

	if (!is_full(L) && pos >= 0 && pos <= L->size) {
		for (i = L->size - 1; i >= pos; i--) {
			L->array[i + 1] = L->array[i];
		}
		L->array[pos] = item;
		L->size++;
	}
}

// 삭제
element delete(ArrayListType* L, int pos) {
	element item;
	int i;

	if (is_empty(L)) {
		error("위치 오류");
	}

	item = L->array[pos];

	for (i = pos; i < L->size - 1; i++) {
		L->array[i] = L->array[i + 1];
	}
	L->size--;

	return item;
}

// main
int main(void) {
	// ArrayListType를 정적으로 생성하고 ArrayListType을
	// 가리키는 포인터를 함수의 매개변수로 전달한다.
	ArrayListType list;

	init(&list);

	insert(&list, 0, 10);
	print_list(&list);
	insert(&list, 0, 20);
	print_list(&list);
	insert(&list, 0, 30);
	print_list(&list);
	insert_last(&list, 40);
	print_list(&list);

	delete(&list, 0);
	print_list(&list);

	return 0;
}