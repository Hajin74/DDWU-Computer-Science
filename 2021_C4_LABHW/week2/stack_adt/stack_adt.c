#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_STACK_SIZE 100

// 스택을 위한 타입 정의
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