#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


typedef struct ListNode { // �� ���������� ListNode�� ��������
	int number;
	struct ListNode* link;
} ListNode; // ���⼭ ListNode�� ����üŸ������ ���ǵ�

void displayList1(ListNode* head) {
	ListNode* temp = head;

	while (temp != NULL) {
		printf("%d->", temp->number);
		temp = temp->link;
	}
	//printf("����Ʈ ��\n");
}

void displayList2(ListNode* head) {
	if (head == NULL) {
		return;
	}
	printf("%d->", head->number);
	displayList2(head->link);
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

	// 3) head --> 10, rf --> 20, rf --> 30, NULL
	newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->number = 30;
	newNode->link = NULL;
	head->link->link = newNode;

	// 4) head --> 10, rf --> 20, rf --> 30, rf --> 44, NULL
	newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->number = 44;
	newNode->link = NULL;

	temp = head;
	while (temp->link != NULL) {
		temp = temp->link;
	}
	temp->link = newNode;

	// 5) head --> 1, rf --> 10, rf --> 20, rf --> 30, rf --> 44, NULL
	newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->number = 1;
	newNode->link = head; // head�� 10, rf�� ����Ű�� ListNode�� rf
	head = newNode; // head�� ���� 1, rf�� ����Ŵ

	// 6) �ݺ��� �̿��� ��帮��Ʈ ���
	displayList1(head);
	printf("\n");

	// 7) ��ȯ�� �̿��� ��帮��Ʈ ���
	displayList2(head);
}