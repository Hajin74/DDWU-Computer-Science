#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#define MAX_LIST_SIZE 100 // ����Ʈ �ִ�ũ��

typedef int element; // �׸��� ���� (�ڷ��� ����)
typedef struct {
	element array[MAX_LIST_SIZE]; // �迭 ����
	int size; // ���� ����Ʈ�� ����� �׸���� ����
} ArrayListType; // �ϳ��� Ÿ������ ����

// ���� ó�� �Լ�
void error(char* message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
}

// ����Ʈ �ʱ�ȭ �Լ�
void init(ArrayListType* L) {
	L->size = 0;
}

// ���� ����
int is_empty(ArrayListType* L) {
	return (L->size == 0);
	// ��� ������ 1 ��ȯ or 0�� ��ȯ
}

// ��ȭ ����
int is_full(ArrayListType* L) {
	return (L->size == MAX_LIST_SIZE - 1);
}

// peek
element get_entry(ArrayListType* L, int pos) {
	if(pos < 0 || pos >= MAX_LIST_SIZE) {
		error("��ġ ����");
	}
	return L->array[pos];
}

// ����Ʈ ���
void print_list(ArrayListType* L) {
	int i;

	for (i = 0; i < L->size; i++) {
		printf("%d->", L->array[i]);
	}
	printf("����Ʈ ��\n");
}

// ������ ����
void insert_last(ArrayListType* L, element item) {
	if (L->size >= MAX_LIST_SIZE) {
		error("����Ʈ �����÷ο�");
	}
	
	L->array[L->size++] = item;
}

// ����
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

// ����
element delete(ArrayListType* L, int pos) {
	element item;
	int i;

	if (is_empty(L)) {
		error("��ġ ����");
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
	// ArrayListType�� �������� �����ϰ� ArrayListType��
	// ����Ű�� �����͸� �Լ��� �Ű������� �����Ѵ�.
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