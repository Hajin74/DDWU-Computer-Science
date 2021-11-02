#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#define MAX_STACK_SIZE 3
#define MAX_STRING 100
#include <stdio.h>

typedef struct {
	int data_int;
	char data_str[MAX_STRING];
} element;

element stack[MAX_STACK_SIZE];
int top = -1;

int is_empty() {
	return (top == -1);
}

int is_full() {
	return (top == (MAX_STACK_SIZE - 1));
}

void push(element item) {
	if (is_full()) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else {
		stack[++top] = item;
	}
}

element pop() {
	if (is_empty()) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else {
		return stack[top--];
	}
}

element peek() {
	if (is_empty()) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else {
		return stack[top];
	}
}

void stack_print() {
	int temp = top;

	if (top == -1) {
		printf("<empty>\n");
	}
	else {
		while (top != -1) {
			if (temp == top) {
				printf("[%d, %s] <- top\n", peek().data_int, peek().data_str);
			}
			else {
				printf("[%d, %s]\n", peek().data_int, peek().data_str);
			}
			top--;
		}
	}

	top = temp;

	printf("--\n");
}

int main(void) {
	element e[MAX_STACK_SIZE] = { {10, "ten"}, {20, "twenty"}, {30, "thirty"} };
	element e2[2] = { {40, "forty"}, {50, "fifty"} };

	stack_print();

	push(e[0]);
	stack_print();

	push(e[1]);
	stack_print();

	push(e[2]);
	stack_print();

	push(e2[0]);
	stack_print();

	pop();
	stack_print();

	push(e2[1]);
	stack_print();

	pop();
	stack_print();

	pop();
	stack_print();

	pop();
	stack_print();
}