#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STRING 10

typedef struct {
	int num;
	char word[MAX_STRING];
} element;

typedef struct StackNode {
	element data;
	struct StackNode* link;
} StackNode;

typedef struct {
	StackNode* top;
} LinkedStackType;

void init(LinkedStackType* s) {
	s->top = NULL;
}

int is_empty(LinkedStackType* s) {
	return s->top == NULL;
}

int is_full(LinkedStackType* s) {
	return 0;
}

void push(LinkedStackType* s, element item) {
	StackNode* temp = (StackNode*)malloc(sizeof(StackNode));

	if (temp == NULL) {
		fprintf(stderr, "메모리 할당에러\n");
		return;
	}
	else {
		temp->data = item;
		temp->link = s->top;
		s->top = temp;
	}
}

element pop(LinkedStackType* s) {
	StackNode* temp;
	element item;

	if (is_empty(s)) {
		fprintf(stderr, "스택이 비어있음\n");
		exit(1);
	}
	else {
		temp = s->top;
		item = temp->data;
		s->top = s->top->link;
		free(temp);

		return item;
	}
}

void stack_print(LinkedStackType* s) {
	StackNode* p;

	if (is_empty(s)) {
		printf("<empty>\n");
	}
	else {
		for (p = s->top; p != NULL; p = p->link) {
			if (p == s->top)
				printf("[%d, %s] <- top\n", p->data.num, p->data.word);
			else
				printf("[%d, %s]\n", p->data.num, p->data.word);
		}
	}
	printf("--\n");
}

int main(void) {
	LinkedStackType s;
	element newElement;

	init(&s);
	stack_print(&s);

	newElement.num = 10;
	strcpy(newElement.word, "ten");
	push(&s, newElement);
	stack_print(&s);

	newElement.num = 20;
	strcpy(newElement.word, "twenty");
	push(&s, newElement);
	stack_print(&s);

	newElement.num = 30;
	strcpy(newElement.word, "thirty");
	push(&s, newElement);
	stack_print(&s);

	newElement.num = 40;
	strcpy(newElement.word, "fourty");
	push(&s, newElement);
	stack_print(&s);

	pop(&s);
	stack_print(&s);

	newElement.num = 50;
	strcpy(newElement.word, "fifty");
	push(&s, newElement);
	stack_print(&s);

	pop(&s);
	stack_print(&s);

	pop(&s);
	stack_print(&s);

	pop(&s);
	stack_print(&s);

	return 0;
}