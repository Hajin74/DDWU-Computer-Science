#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode { // 자기 참조 구조체
	element data;
	struct ListNode* link;
} ListNode;

// 오류
void error(char* message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
}

// 노드 pre 뒤에 새로운 노드 삽입
ListNode* insert_next(ListNode* head, ListNode* pre, element value) {
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));

	p->data = value;
	p->link = pre->link;
	pre->link = p;

	return head;
}

ListNode* insert_first(ListNode* head, int value) {
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));

	p->data = value;
	p->link = head;
	head = p;

	return head;
}

// 노드 마지막에 새로운 노드 삽입
ListNode* insert_last(ListNode* head, int value) {
	ListNode* temp = head;
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));

	p->data = value;
	p->link = NULL;

	if (head == NULL)
		head = p;
	else {
		while (temp->link != NULL) {
			temp = temp->link;
			temp->link = p;
		}
	}

	return head;
}

// pre가 가리키는 노드의 다음 노드를 삭제한다.
ListNode* delete_next(ListNode* head, ListNode* pre) {
	ListNode* removed;

	removed = pre->link;
	pre->link = removed->link;
	free(removed);

	return head;
}

ListNode* delete_first(ListNode* head) {
	ListNode* removed;

	if (head == NULL)
		error("삭제할 항목이 없음");
	
	removed = head;
	head = removed->link;
	free(removed);

	return head;
}

ListNode* delete_last(ListNode* head) {
	ListNode* temp = head;
	ListNode* prevTemp = (ListNode*)malloc(sizeof(ListNode));
	ListNode* removed;

	if (head->link == NULL) {
		free(temp);
		head = NULL;
	}
	else {
		while (temp->link != NULL) {
			prevTemp = temp;
			temp = temp->link;
		}
		prevTemp->link = NULL;
		free(temp);
	}

	return head;
}

void print_list(ListNode* head) {
	ListNode* p;

	for (p = head; p != NULL; p = p->link) {
		printf("%d->", p->data);
	}
	printf("NULL\n");
}

ListNode* search(ListNode* head, int x) {
	ListNode* p;

	p = head;

	while (p != NULL) {
		if (p->data == x)
			return p;
		else
			p = p->link;
	}

	return NULL;
}

ListNode* concat(ListNode* head1, ListNode* head2) {
	ListNode* p;

	if (head1 == NULL)
		return head2;
	else if (head2 == NULL)
		return head1;
	else {
		p = head1;
		while (p != NULL) {
			p = p->link;
		}
		p->link = head2;

		return head1;
	}
}

ListNode* reverse(ListNode* head) {
	ListNode* p, * q, * r;

	p = head;
	q = NULL;

	while (p != NULL) {
		r = q;
		q = p;
		p = p->link;
		q->link = r;
	}

	return q;
}

int main(void) {
	ListNode* head1 = NULL, * head2;
	int i;

	for (i = 0; i < 5; i++) {
		head1 = insert_last(head1, i * 10);
		print_list(head1);
	}

	head2 = reverse(head1);
	print_list(head2);
	head2 = insert_next(head2, 1, 99);
	print_list(head2);
}