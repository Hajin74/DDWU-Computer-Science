#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


typedef struct ListNode { // 이 시점에서는 ListNode는 구초제명
	int number;
	struct ListNode* link;
} ListNode; // 여기서 ListNode는 구조체타입으로 정의됨

void displayList1(ListNode* head) {
	ListNode* temp = head;

	while (temp != NULL) {
		printf("%d->", temp->number);
		temp = temp->link;
	}
	//printf("리스트 끝\n");
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
	newNode->link = head; // head는 10, rf를 가리키는 ListNode의 rf
	head = newNode; // head는 이제 1, rf를 가리킴

	// 6) 반복을 이용한 노드리스트 출력
	displayList1(head);
	printf("\n");

	// 7) 순환을 이용한 노드리스트 출력
	displayList2(head);
}