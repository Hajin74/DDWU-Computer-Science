#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct StackNode {
	element item;
	struct StackNode* link;
} StackNode;

typedef struct {
	StackNode* top;
} LinkedStackType;

// �ʱ�ȭ
void init(LinkedStackType* s) {
	s->top = NULL;
}

// ����
int is_empty(LinkedStackType* s) {
	return s->top == NULL;
}

// ��ȭ
// ���Ḯ��Ʈ�� Ư������ �������� ũ�⸦ ������ �� �ֱ� ������ �׻� ������ ��ȯ
// �� �� �� ���� ���� ����.
int is_full(LinkedStackType* s) {
	return 0;
}

// ����
void push(LinkedStackType* s, element item) {
	StackNode* temp = (StackNode*)malloc(sizeof(StackNode));

	if (temp == NULL) {
		fprintf(stderr, "�޸� �Ҵ翡��\n");
		return;
	}
	else {
		temp->item = item;
		temp->link = s->top;
		s->top = temp;
	}
}

// ����
element pop(LinkedStackType* s) {
	StackNode* temp;
	element item;

	if (is_empty(s)) {
		fprintf(stderr, "������ �������\n");
		exit(1);
	}
	else {
		temp = s->top;
		item = temp->item;
		s->top = s->top->link;
		free(temp);

		return item;
	}
}

// ��ũ
element peek(LinkedStackType* s) {
	if (is_empty(s)) {
		fprintf(stderr, "������ �������\n");
		return NULL;
	}
	else {
		return s->top->item;
	}
}

int main(void) {
	LinkedStackType s;

	init(&s);

	push(&s, 1);
	push(&s, 2);
	push(&s, 3);

	printf("%d\n", pop(&s));
}