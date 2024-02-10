#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ����尡 �� �տ�, ������ ���� ������ �ʰ� ���۰� ���� ����
typedef int element;

typedef struct DListNode {
	element data;
	struct DListNode* llink;
	struct DListNode* rlink;
} DListNode;

// �ʱ�ȭ
void init(DListNode* phead) {
	phead->llink = phead;
	phead->rlink = phead;
}

// ���
void print_dlist(DListNode* phead) {
	DListNode* p;
	
	for (p = phead->rlink; p != phead; p = p->rlink) {
		printf("%d->", p->data);
	}
	printf("\n");
} 

// ����: before��� �����ʿ�
void dinsert(DListNode* before, element data) {
	DListNode* newNode = (DListNode*)malloc(sizeof(DListNode));

	newNode->data = data;
	newNode->llink = before;
	newNode->rlink = before->rlink;
	before->rlink->llink = newNode;
	before->rlink = newNode;
}

// ����: removed
void ddelete(DListNode* head, DListNode* removed) {
	if (removed == head) // head��尡 removed�� ��� �����ʰ� �׳� ��
		return;
	else {
		removed->llink->rlink = removed->rlink;
		removed->rlink->llink = removed->llink;
		free(removed);
	}
}

// HW1_5 ���� �߰��� �Լ���

// ���� ���
void print_reverse_dlist(DListNode* phead) {
	DListNode* p;

	for (p = phead->llink; p != phead; p = p->llink) {
		printf("%d->", p->data);
	}
	printf("\n");
}

// data�� ���� ��带 ã�Ƽ� ��ȯ
DListNode* search(DListNode* head, element data) {
	DListNode* p;

	for (p = head->rlink; p != head; p = p->rlink) {
		if (p->data == data)
			return p;
	}
	
	return NULL;
}

int main(void) {
	DListNode* head = (DListNode*)malloc(sizeof(DListNode));

	init(head);

	printf("�߰� �ܰ�\n");

	// �� �տ� ��� ����
	dinsert(head, 10);
	print_dlist(head);
	dinsert(head, 20);
	print_dlist(head);
	dinsert(head, 30);
	print_dlist(head);

	// �� �ڿ� ��� ����
	dinsert(head->llink, 5);
	print_dlist(head);
	dinsert(head->llink, 50);
	print_dlist(head);

	printf("\n���� �ܰ�\n");

	// �� �� ��� ����
	ddelete(head, head->rlink);
	print_dlist(head);

	// �� �� ��� ����
	ddelete(head, head->llink);
	print_dlist(head);

	printf("\nHW1_5\n");

	// ���� ���
	print_reverse_dlist(head);

	// ã�� ��� ��ȯ
	printf("%d\n", search(head, 20)->data);

	return 0;
}