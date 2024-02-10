#define _CRT_SECURE_NO_WARNINGS
#define MAX_STRING 100
#include <stdio.h>
#include <stdlib.h>

typedef struct element{
	int data_int;
	char data_str[MAX_STRING];
} element;

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

void stack_print(LinkedStackType* s) {
	StackNode* temp = (StackNode*)malloc(sizeof(StackNode));
	temp = s->top;

	if (is_empty(s)) {
		printf("<empty>\n");
	}
	else {
		while (temp != NULL) {
			if (temp == s->top)
				printf("[%d, %s] <- top\n", temp->item.data_int, temp->item.data_str);
			else
				printf("[%d, %s]\n", temp->item.data_int, temp->item.data_str);

			temp = temp->link;
		}
	}
	printf("--\n");
}

int main(void) {
	LinkedStackType s;
	element item;

	init(&s);
	stack_print(&s);

	item.data_int = 10;
	strcpy(item.data_str, "ten");
	push(&s,item);
	stack_print(&s);

	item.data_int = 20;
	strcpy(item.data_str, "twenty");
	push(&s, item);
	stack_print(&s);

	item.data_int = 30;
	strcpy(item.data_str, "thirty");
	push(&s, item);
	stack_print(&s);

	item.data_int = 40;
	strcpy(item.data_str, "fourty");
	push(&s, item);
	stack_print(&s);

	pop(&s);
	stack_print(&s);

	item.data_int = 50;
	strcpy(item.data_str, "fifty");
	push(&s, item);
	stack_print(&s);

	pop(&s);
	stack_print(&s);

	pop(&s);
	stack_print(&s);

	pop(&s);
	stack_print(&s);
}