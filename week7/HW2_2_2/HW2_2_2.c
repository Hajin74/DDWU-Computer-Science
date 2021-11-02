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

// 초기화 함수
void init(LinkedStackType* s) {
	s->top = NULL;
}

// 공백 상태 검출 함수
int is_empty(LinkedStackType* s) {
	return s->top == NULL;
}

// 포화 상태 검출 함수
int is_full(LinkedStackType* s) {
	// 정적으로 동작하는 배열과 다른 점
	// 동적이라 꽉찬 상태가 없으므로 항상 0을 반환
	return 0;
}

// 삽입 함수
void push(LinkedStackType* s, element item) {
	StackNode* temp = (StackNode*)malloc(sizeof(StackNode));

	if (temp == NULL) {
		fprintf(stderr, "메모리 할당에러\n");
		return;
	}
	else {
		temp->item = item;
		temp->link = s->top;
		s->top = temp;
	}
}

// 삭제 함수
element pop(LinkedStackType* s) {
	StackNode* temp = (StackNode*)malloc(sizeof(StackNode));
	element item;

	if (is_empty(s)) {
		fprintf(stderr, "스택이 비어있음\n");
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

// 피크 함수
element peek(LinkedStackType* s) {
	if (is_empty(s)) {
		fprintf("stderr", "스택이 비어있음\n");
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