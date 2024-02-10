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

// �ʱ�ȭ �Լ�
void init(LinkedStackType* s) {
	s->top = NULL;
}

// ���� ���� ���� �Լ�
int is_empty(LinkedStackType* s) {
	return s->top == NULL;
}

// ��ȭ ���� ���� �Լ�
int is_full(LinkedStackType* s) {
	// �������� �����ϴ� �迭�� �ٸ� ��
	// �����̶� ���� ���°� �����Ƿ� �׻� 0�� ��ȯ
	return 0;
}

// ���� �Լ�
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

// ���� �Լ�
element pop(LinkedStackType* s) {
	StackNode* temp = (StackNode*)malloc(sizeof(StackNode));
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
	}

	return item;
}

// ��ũ �Լ�
element peek(LinkedStackType * s) {
	if (is_empty(s)) {
		fprintf("stderr", "������ �������\n");
		exit(1);
	}
	else {
		return s->top->item;
	}
}

// �� �Լ�
int main() {
	LinkedStackType s;

	init(&s);

	push(&s, 1);
	push(&s, 2);
	push(&s, 3);

	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
	printf("%d\n", is_empty(&s));
}
