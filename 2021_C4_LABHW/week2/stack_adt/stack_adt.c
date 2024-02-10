#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_STACK_SIZE 100

// ������ ���� Ÿ�� ����
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

int main(void) {
	StackType s;

	init(&s);
	push(&s, 1);
	push(&s, 2);
	push(&s, 3);
	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
	printf("%d\n", is_empty(&s));
}