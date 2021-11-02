#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode {
	element data;
	struct ListNode* link;
} ListNode;

void print_list(ListNode* head) {
	ListNode* p;

	if (head == NULL) return;

	p = head->link;
	while (p != head) {
		printf("%d->", p->data);
		p = p->link;
	}
	printf("%d->", p->data);
	printf("\n");
}

ListNode* insert_first(ListNode* head, element data) {
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->data = data;

	if (head == NULL) {
		head = node;
		head->link = head;
	}
	else {
		node->link = head->link;
		head->link = node;
	}

	return head;
}

ListNode* insert_last(ListNode* head, element data) {
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->data = data;

	if (head == NULL) {
		head = node;
		head->link = head;
	}
	else {
		node->link = head->link;
		head->link = node;
		head = node;
	}

	return head;
}

ListNode* delete_first(ListNode* head) {
	ListNode* temp;

	if (head == NULL) {
		printf("리스트가 비어 삭제를 못함\n");
		return NULL;
	}

	temp = head->link;
	head->link = temp->link;
	free(temp);

	return head;
}

ListNode* delete_last(ListNode* head) {
	ListNode* p;

	if(head == NULL) {
		printf("리스트가 비어 삭제를 못함\n");
		return NULL;
	}

	if (head->link == NULL) {
		free(head);
		head = NULL;
	}
	else {
		p = head->link;
		while (p->link != head) {
			p = p->link;
		}
		p->link = head->link;
		head = p;
	}

	return head;
}

int get_size(ListNode* head) {
	ListNode* p;
	int size = 1;

	if (head == NULL) {
		return 0;
	}

	for (p = head; p->link != head; p = p->link) {
		size++;
	}

	return size;
}

ListNode* search(ListNode* head, element data) {
	ListNode* p;

	if (head == NULL) {
		printf("리스트가 비어 삭제를 못함\n");
		return NULL;
	}

	p = head;
	do {
		if (p->data == data) {
			return p;
		}
		p = p->link;
	} while (p->link != head);

	return NULL;
}

int main(void) {
	ListNode* head = NULL;

	// list = 10->20->30->40
	head = insert_last(head, 20);
	print_list(head);

	head = insert_last(head, 30);
	print_list(head);

	head = insert_last(head, 40);
	print_list(head);

	head = insert_first(head, 10);
	print_list(head);

	head = delete_first(head);
	print_list(head);
	
	head = delete_last(head);
	print_list(head);

	printf("리스트의 길이는 %d입니다\n", get_size(head));

	head = search(head, 30);
	//printf("%d", head->data);

	return 0;
}