#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode { // �� ���������� ListNode�� ����ü��
	int number;
	struct ListNode* link; // �ڱ���������ü
} ListNode; // ���⼭���ʹ� ListNode�� ����ü Ÿ������ ���ǵǾ���

// 6) �ݺ��� �̿��Ͽ� ��帮��Ʈ�� ���
// 1->10->2->30->44->
// temp�� head���� �����Ͽ� �����ϸ鼭 temp�� ����Ű�� number�� ���, temp�� NULL�� �� ������
void displayList1(ListNode* head) {
	ListNode* temp = head;

	while (temp != NULL) {
		printf("%d->", temp->number);
		temp = temp->link;
	}
	//printf("\n");
}

// 7) ��ȯ�� �̿��Ͽ� ��帮��Ʈ�� ���
void displayList2(ListNode* head) { // ������ head�� ��ȭ������ ����
	if (head == NULL)
		return;
	else {
		printf("%d->", head->number);
		displayList2(head->link); // head�� �ϳ��� ������Ų ���� ���ڷ� ��
	}
}

int main(void) {
	ListNode* head, * newNode, * temp;

	// 1) head --> 10, NULL
	newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->number = 10;
	newNode->link = NULL;
	head = newNode;

	// 2) head --> 10, rf --> 20, NULL
	newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->number = 20;
	newNode->link = NULL;
	head->link = newNode;

	// 3) head -->10, rf --> 20, rf --> 30, NULL
	newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->number = 30;
	newNode->link = NULL;
	head->link->link = newNode;

	// 4) head --> 10, rf --> 20, rf --> 30, rf --> 44, NULL
	newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->number = 44;
	newNode->link = NULL;

	temp = head;
	while (temp->link != NULL)
		temp = temp->link; // �� ĭ�� ����
	temp->link = newNode;

	// 5) head --> 1, rf --> 10, rf --> 20, rf --> 30, rf --> 44, NULL
	newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->number = 1;
	newNode->link = head;
	head = newNode;

	displayList1(head);
	printf("\n");
	displayList2(head);

	return 0;
}