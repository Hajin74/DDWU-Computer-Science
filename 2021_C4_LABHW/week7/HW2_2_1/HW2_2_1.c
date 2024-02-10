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
element peek(LinkedStackType* s) {
	if (is_empty(s)) {
		fprintf("stderr", "������ �������\n");
		exit(1);
	}
	else {
		return s->top->item;
	}
}

void stack_print(LinkedStackType *s) {
	StackNode* temp = (StackNode*)malloc(sizeof(StackNode));
	temp = s->top;

	if (is_empty(s)) {
		printf("<empty>\n");
	}
	else {
		while (temp != NULL) {
			if(temp == s->top)
				printf("%d <- top\n", temp->item);
			else
				printf("%d\n", temp->item);

			temp = temp->link;
		}
	}
	printf("--\n");
}

int main(void) {
	LinkedStackType s;

	init(&s);
	stack_print(&s);

	push(&s, 10);
	stack_print(&s);
	push(&s, 20);
	stack_print(&s);
	push(&s, 30);
	stack_print(&s);
	push(&s, 40);
	stack_print(&s);

	pop(&s);
	stack_print(&s);

	push(&s, 50);
	stack_print(&s);

	pop(&s);
	stack_print(&s);
	pop(&s);
	stack_print(&s);
	pop(&s);
	stack_print(&s);

}