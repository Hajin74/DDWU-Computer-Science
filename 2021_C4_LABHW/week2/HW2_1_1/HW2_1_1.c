#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#define MAX_STACK_SIZE 3
#include <stdio.h>

typedef int element;

typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
} StackType;

// 스택 초기화 함수
void init(StackType* sp) {
	sp->top = -1;
}

// 공백 상태 검출 함수
int is_empty(StackType* sp) {
	return (sp->top == -1);
}

// 포화 상태 검출 함수
int is_full(StackType* sp) {
	return (sp->top == MAX_STACK_SIZE - 1);
}

// 삽입 함수
void push(StackType* sp, element item) {
	if (is_full(sp)) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else {
		sp->data[++(sp->top)] = item;
	}
}

// 삭제 함수
element pop(StackType* sp) {
	if (is_empty(sp)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else {
		return sp->data[(sp->top)--];
	}

}

// 피크 함수, 보기만 하는 함수
element peek(StackType* sp) {
	if (is_empty(sp)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else {
		return sp->data[sp->top];
	}
}

// 스택 출력 함수
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