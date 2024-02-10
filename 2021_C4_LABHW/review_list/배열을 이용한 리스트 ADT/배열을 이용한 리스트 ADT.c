#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_LIST_SIZE 3 // ����Ʈ�� �ִ� ũ��, �迭�̹Ƿ� ũ�Ⱑ ������ ����

typedef int element; // ����Ʈ�� �� �׸��� ����

typedef struct {
	element array[MAX_LIST_SIZE];
	int size; // ���� ����Ʈ�� ����� �׸���� ����
} ArrayListType;

// ����
void error(char* msg) {
	fprintf(stderr, "%s\n", msg);
	// exit(1);
}

// ����Ʈ �ʱ�ȭ
void init(ArrayListType* L) {
	L->size = 0;
}

// ����
int is_empty(ArrayListType* L) {
	return L->size == 0;
}

// ��ȭ
int is_full(ArrayListType* L) {
	return L->size == MAX_LIST_SIZE ;
}

// �ε����� pos�� �� ��ȯ
element get_entry(ArrayListType* L, int pos) {
	// index�� 0���� �۰ų� MAX���� ū ���� ����
	if (pos < 0 || pos >= L->size)
		error("��ġ ����");

	return L->array[pos];
}

// ���
void print_list(ArrayListType* L) {
	int i;

	// 0���� size���� ���
	for (i = 0; i < L->size; i++) {
		printf("%d->", L->array[i]);
	}
	printf("\n");
}

// ����: ���ϴ� ��ġ
void insert(ArrayListType* L, int pos, element item) {
	int i;

	// ��ȭ ���°� �ƴϰų� ���� ������ index ������ ��
	if (!is_full(L) && (pos >= 0 && pos <= L->size)) {
		for (i = L->size - 1; i >= pos; i--) {
			// pos���� ���������� �� ĭ�� �ڷ� ��
			L->array[i + 1] = L->array[i];
		}
		L->array[pos] = item;
		L->size++;
	}
	else {
		error("����Ʈ �����÷ο�");
	}
}

// ����: last
void insert_last(ArrayListType* L, element item) {
	if (is_full(L)) {
		error("����Ʈ �����÷ο�");
	}
	else {
		L->array[(L->size)++] = item;
	}
}

// ����: ���ϴ� ��ġ
element delete(ArrayListType* L, int pos) {
	element item;
	int i;

	if (pos < 0 || pos >= L->size) {
		error("��ġ ����");
	}

	item = L->array[pos]; // �����ϴ� �׸� ���

	for (i = pos; i < L->size - 1; i++) { // �� �ں��� ������ ������ �� ĭ�� �����
		L->array[i] = L->array[i + 1];
	}
	L->size--;

	return item;
}

int main(void) {
	ArrayListType list;
	int pos;

	init(&list);

	insert(&list, 0, 10);
	print_list(&list);
	insert(&list, 0, 20);
	print_list(&list);
	insert(&list, 0, 30);
	print_list(&list);

	// ����Ʈ �����÷ο�
	insert_last(&list, 40);
	print_list(&list);

	delete(&list, 0);
	print_list(&list);

	scanf("%d", &pos);
	printf("get entry: %d\n", get_entry(&list, pos));

	return 0;
}