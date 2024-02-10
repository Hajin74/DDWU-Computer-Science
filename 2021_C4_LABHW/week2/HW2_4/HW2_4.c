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
		fprintf(stderr, "���� ��ȭ ����\n");
		return;
	}
	else {
		sp->word[++(sp->top)] = item;
	}
}

char pop(StackType* sp) {
	if (is_empty(sp)) {
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else {
		return sp->word[(sp->top)--];
	}

}

char peek(StackType* sp) {
	if (is_empty(sp)) {
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else {
		return sp->word[sp->top];
	}
}

int palindrome(char str[]) {
	StackType s;

	// �ʿ��� ���� ����
	int i;

	// ���� �ʱ�ȭ
	init(&s);

	// str�� ���ڵ��� ���ÿ� �ִ´�
	for (i = 0; str[i] != '\0'; i++) {
		push(&s, str[i]);
	}

	// ���ÿ��� �ϳ��� ���鼭 str�� ���ڵ�� ���ʷ� ��
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
		printf("palindrome �Դϴ�.\n");
	else
		printf("palindrome�� �ƴմϴ�.\n");
}