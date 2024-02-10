#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ��������Ͱ� �� �ڿ�
typedef int element;

typedef struct ListNode {
	element data;
	struct ListNode* link;
} ListNode;

// ���
void print_list(ListNode* head) {
	ListNode* p;

	if (head == NULL)
		return;

	p = head->link;
	while (p != head) {
		printf("%d->", p->data);
		p = p->link;
	}
	printf("%d->\n", p->data);
}

// ����: �� ��
ListNode* insert_last(ListNode* head, element data) {
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->data = data;

	if (head == NULL) {
		head = node;
		node->link = node;
	}
	else {
		node->link = head->link;
		head->link = node;
		head = node;
	}

	return head;
}

// ����: �� ��
ListNode* insert_first(ListNode* head, element data) {
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->data = data;

	if (head == NULL) {
		head = node;
		node->link = node;
	}
	else {
		node->link = head->link;
		head->link = node;
	}

	return head;
}

// ����: �� ��
ListNode* delete_first(ListNode* head) {
	ListNode* temp;

	if (head == NULL) {
		printf("����Ʈ�� ��� ������ ����\n");
		return NULL;
	}
	else {
		temp = head->link;
		head->link = temp->link;
		free(temp);
		
		return head;
	}

}

// ����: �� ��
ListNode* delete_last(ListNode* head) {
	ListNode* temp = head->link;

	if (head == NULL) {
		printf("����Ʈ�� ��� ������ ����\n");
		return NULL;
	} 

	if (head->link == NULL) {
		free(head);
		head = NULL;
	}	
	else {
		while (temp->link != head)
			temp = temp->link;

		temp->link = head->link;
		head = temp;
	}

	return head;
}

ListNode* search(ListNode* head, element data) {
	ListNode* p;

	for (p = head; p != NULL; p = p->link) {
		if (p->data == data)
			return p;
	}

	return NULL;
}

int get_size(ListNode* head) {
	ListNode* p;
	int size;

	if (head == NULL)
		return 0;
	else {
		size = 1;
		for (p = head; p->link != head; p = p->link)
			size++;
	}

	return size;
}

int main(void) {
	ListNode* head = NULL, *p;
	int data;

	// list = 10->20->30->40
	head = insert_last(head, 20);
	print_list(head);
	head = insert_last(head, 30);
	print_list(head);
	head = insert_last(head, 40);
	print_list(head);
	head = insert_first(head, 10);
	print_list(head);

	// list = 20->30->40
	head = delete_first(head);
	print_list(head);

	// list = 20->30
	head = delete_last(head);
	print_list(head);

	printf("ã�� ���� ����� �����ʹ�: ");
	scanf("%d", &data);
	p = search(head, data);
	printf("%d\n", p->data);

	printf("����Ʈ�� ���̴� %d�Դϴ�.\n", get_size(head));

	return 0;
}