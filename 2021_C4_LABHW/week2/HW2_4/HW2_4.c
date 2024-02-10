#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#define MAX_STRING 101
#include <stdio.h>

typedef struct {
	int top;
	char word[MAX_STRING];
} StackType;

void init(StackType* sp) {
	sp->top = -1;
}

int is_empty(StackType* sp) {
	return (sp->top == -1);
}

int is_full(StackType* sp) {
	return (sp->top == MAX_STRING - 1);
}

void push(StackType* sp, char item) {
	if (is_full(sp)) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else {
		sp->word[++(sp->top)] = item;
	}
}

char pop(StackType* sp) {
	if (is_empty(sp)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else {
		return sp->word[(sp->top)--];
	}

}

char peek(StackType* sp) {
	if (is_empty(sp)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else {
		return sp->word[sp->top];
	}
}

int palindrome(char str[]) {
	StackType s;

	// 필요한 변수 선언
	int i;

	// 스택 초기화
	init(&s);

	// str의 문자들을 스택에 넣는다
	for (i = 0; str[i] != '\0'; i++) {
		push(&s, str[i]);
	}

	// 스택에서 하나씩 빼면서 str의 문자들과 차례로 비교
	for (i = 0; i < str[i] != '\0'; i++) {
		if (str[i] != pop(&s)) {
			return 0;
		}
	}

	return 1;
}

int main(void) {
	char word[MAX_STRING];

	printf("Enter a word to check palindrome: ");
	scanf("%s", word);

	if (palindrome(word))
		printf("palindrome 입니다.\n");
	else
		printf("palindrome이 아닙니다.\n");
}