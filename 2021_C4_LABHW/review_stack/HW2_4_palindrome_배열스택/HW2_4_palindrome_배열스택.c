#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_STRING 100

typedef char element;

typedef struct {
	element stack[MAX_STRING];
	int top;
} StackType;

// ���� �ʱ�ȭ �Լ�
void init(StackType* s) {
	s->top = -1;
}

// ���� ���� ���� �Լ�
int is_empty(StackType* s) {
	return s->top == -1;
}

// ��ȭ ���� ���� �Լ�
int is_full(StackType* s) {
	return s->top == MAX_STRING - 1;
}

// �����Լ�
void push(StackType* s, element item) {
	if (is_full(s)) {
		fprintf(stderr, "���� ��ȭ ����\n");
		return;
	}
	else {
		s->stack[++(s->top)] = item;
	}
}

// �����Լ�
element pop(StackType* s) {
	if (is_empty(s)) {
		fprintf(stderr, "���� ���� ����\n");
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

	// ���ÿ� ���ڿ� �ױ�
	for (i = 0; i < size; i++) {
		push(&s, str[i]);
	}

	// pop�Ͽ� �������鼭 �Ųٷ� ������ ���� �˻��ϱ�
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
		printf("palindrome�Դϴ�\n");
	else
		printf("palindrome�� �ƴմϴ�.\n");

	return 0;
}