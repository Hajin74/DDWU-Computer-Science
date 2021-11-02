#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 3
#define MAX_STRING_SIZE 100

typedef struct {
	int num;
	char word[MAX_STRING_SIZE];
} element;

typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
} StackType;

void init(StackType* s) {
	s->top = -1;
}

int is_empty(StackType* s) {
	return s->top == -1;
}

int is_full(StackType* s) {
	return s->top == MAX_STACK_SIZE - 1;
}

void push(StackType* s, element item) {
	if (is_full(s)) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else {
		s->data[++(s->top)] = item;
	}
}

element pop(StackType* s) {
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else {
		return s->data[(s->top)--];
	}
}

element peek(StackType* s) {
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else {
		return s->data[s->top];
	}
}

// HW2_1_2
void stack_print(StackType* s) {
	int i;

	if (is_empty(s)) {
		printf("<empty>\n");
	}
	else {
		for (i = s->top; i >= 0; i--) {
			if (i == s->top)
				printf("[%d, %s] <-top\n", s->data[i].num, s->data[i].word);
			else
				printf("[%d, %s]\n", s->data[i].num, s->data[i].word);
		}
	}
	printf("--\n");
}

int main(void) {
	StackType s;
	element temp;

	init(&s);
	stack_print(&s);

	temp.num = 10;
	strcpy(temp.word, "ten");
	push(&s, temp);
	stack_print(&s);

	temp.num = 20;
	strcpy(temp.word, "twenty");
	push(&s, temp);
	stack_print(&s);

	temp.num = 30;
	strcpy(temp.word, "thirty");
	push(&s, temp);
	stack_print(&s);

	temp.num = 40;
	strcpy(temp.word, "fourty");
	push(&s, temp);
	stack_print(&s);

	pop(&s);
	stack_print(&s);

	temp.num = 50;
	strcpy(temp.word, "fifty");
	push(&s, temp);
	stack_print(&s);

	pop(&s);
	stack_print(&s);

	pop(&s);
	stack_print(&s);

	pop(&s);
	stack_print(&s);

	return 0;
}