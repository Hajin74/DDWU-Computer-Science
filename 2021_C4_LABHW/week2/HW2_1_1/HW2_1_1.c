#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#define MAX_STACK_SIZE 3
#include <stdio.h>

typedef int element;

typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
} StackType;

// ���� �ʱ�ȭ �Լ�
void init(StackType* sp) {
	sp->top = -1;
}

// ���� ���� ���� �Լ�
int is_empty(StackType* sp) {
	return (sp->top == -1);
}

// ��ȭ ���� ���� �Լ�
int is_full(StackType* sp) {
	return (sp->top == MAX_STACK_SIZE - 1);
}

// ���� �Լ�
void push(StackType* sp, element item) {
	if (is_full(sp)) {
		fprintf(stderr, "���� ��ȭ ����\n");
		return;
	}
	else {
		sp->data[++(sp->top)] = item;
	}
}

// ���� �Լ�
element pop(StackType* sp) {
	if (is_empty(sp)) {
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else {
		return sp->data[(sp->top)--];
	}

}

// ��ũ �Լ�, ���⸸ �ϴ� �Լ�
element peek(StackType* sp) {
	if (is_empty(sp)) {
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else {
		return sp->data[sp->top];
	}
}

// ���� ��� �Լ�
void stack_print(StackType* s) {
	int temp = s->top;

	if (is_empty(s)) {
		printf("<empty>\n");
	}
	else {
		while (!is_empty(s)) {
			if (temp == s->top) {
				printf("%d <- top\n", peek(s));
			}
			else {
				printf("%d\n", peek(s));
			}
			(s->top)--;
		}
	}

	s->top = temp;
	printf("--\n");
}

int main(void) {
	StackType s;

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