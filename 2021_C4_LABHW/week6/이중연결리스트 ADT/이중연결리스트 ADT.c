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

int main(void) {
	DListNode* head = (DListNode*)malloc(sizeof(DListNode));
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
	ddelete(head, head->rlink);
	print_dlist(head);

	// �� �ڿ� ��� ����
	ddelete(head, head->llink);
	print_dlist(head);

	free(head);
	return 0;
}