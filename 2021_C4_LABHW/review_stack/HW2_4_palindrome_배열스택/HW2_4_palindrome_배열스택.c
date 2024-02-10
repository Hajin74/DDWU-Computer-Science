#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_STRING 100

typedef char element;

typedef struct {
	element stack[MAX_STRING];
	int top;
} StackType;

// 스택 초기화 함수
void init(StackType* s) {
	s->top = -1;
}

// 공백 상태 검출 함수
int is_empty(StackType* s) {
	return s->top == -1;
}

// 포화 상태 검출 함수
int is_full(StackType* s) {
	return s->top == MAX_STRING - 1;
}

// 삽입함수
void push(StackType* s, element item) {
	if (is_full(s)) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else {
		s->stack[++(s->top)] = item;
	}
}

// 삭제함수
element pop(StackType* s) {
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else {
		return s->stack[(s->top)--];
	}
}

int palindrome(char str[]) {
	StackType s;
	int size = strlen(str);
	int i;

	init(&s);

	// 스택에 문자열 쌓기
	for (i = 0; i < size; i++) {
		push(&s, str[i]);
	}

	// pop하여 꺼내보면서 거꾸로 꺼내도 같나 검사하기
	for (i = 0; i < size; i++) {
		if (pop(&s) != str[i])
			return 0;
	}

	return 1;
}

int main(void) {
	char word[MAX_STRING];

	printf("Enter a word to check palindrome: ");
	scanf("%s", word);

	if (palindrome(word))
		printf("palindrome입니다\n");
	else
		printf("palindrome이 아닙니다.\n");

	return 0;
}