#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct DListNode {
	element data;
	struct DListNode* llink;
	struct DListNode* rlink;
} DListNode;

void init(DListNode* phead) {
	phead->llink = phead;
	phead->rlink = phead;
}

void print_dlist(DListNode* phead) {
	DListNode* p;

	for (p = phead->rlink; p != phead; p = p->rlink) {
		printf("%d->", p->data);
	}
	printf("\n");
}

void dinsert(DListNode* before, element data) {
	DListNode* newNode = (DListNode*)malloc(sizeof(DListNode));
	newNode->data = data;

	newNode->llink = before;
	before->rlink->llink = newNode;
	newNode->rlink = before->rlink;
	before->rlink = newNode;
}

void ddelete(DListNode* head, DListNode* removed) {
	if (removed == head) return;

	removed->llink->rlink = removed->rlink;
	removed->rlink->llink = removed->llink;
	free(removed);
}

void print_reverse_dlist(DListNode* head) {
	DListNode* p;

	if (head == NULL) return;

	for (p = head; p->llink != head; p = p->llink) {
		printf("%d->", p->llink->data);
	}
	printf("\n");
}

DListNode* search(DListNode* head, element data) {
	DListNode* p;

	if (head == NULL) {
		printf("����Ʈ�� ��� ������ ����\n");
		return NULL;
	}

	p = head;
	do {
		if (p->data == data) {
			return p;
		}
		p = p->rlink;
	} while (p->rlink != head);

	return NULL;
}

int main(void) {
	DListNode* head = (DListNode*)malloc(sizeof(DListNode));
	DListNode* key = (DListNode*)malloc(sizeof(DListNode));
	init(head);

	printf("�߰� �ܰ�\n");

	// �� �տ� ��带 ����
	dinsert(head, 10);
	print_dlist(head);
	dinsert(head, 20);
	print_dlist(head);
	dinsert(head, 30);
	print_dlist(head);

	// �� �ڿ� ��� ����
	dinsert(head->llink, 100); // before�ڿ� ��带 �����ϱ� ������ before�� �� �μ��� ��������
	print_dlist(head);

	printf("\n���� �ܰ�\n");

	// �� ���� ��� ����
	//ddelete(head, head->rlink);
	print_dlist(head);

	// �� �ڿ� ��� ����
	//ddelete(head, head->llink);
	print_dlist(head);


	// HW1-5
	print_reverse_dlist(head);
	key = search(head, 20);
	printf("%d\n", key->data);


	free(head);
	return 0;
}