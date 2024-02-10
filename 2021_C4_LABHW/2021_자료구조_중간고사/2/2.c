#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int element;
typedef struct ListNode {
	element data;
	struct ListNode* link;
} ListNode;

void display(ListNode* head) //�������� ����
{
	ListNode* p = head;
	while (p != NULL) {
		printf("%d->", p->data);
		p = p->link;
	}
	printf("NULL\n");
}

ListNode* insert_last(ListNode* head, int value) // �������� ����
{

	ListNode* temp = head;
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	p->link = NULL;

	if (head == NULL) // ���� ����Ʈ�̸�
		head = p;
	else {
		while (temp->link != 0)
			temp = temp->link;

		temp->link = p;
	}
	return head;
}

ListNode* insert_sorted(ListNode* head, int value)
{
	// �ڵ� �ۼ�
	ListNode* p;
	ListNode* pre = NULL;
	ListNode* new = (ListNode*)malloc(sizeof(ListNode));

	if (head == NULL) {
		new->data = value;
		new->link = NULL;
		head = new;
		
		return head;
	}

	for (p = head; p != NULL; p = p->link) {
		if (value <= p->data) {
			new->data = value;

			if (pre == NULL) {
				new->link = p;
				head = new;
			}
			else {
				new->link = pre->link;
				pre->link = new;
			}

			return head;
		}
		pre = p;
	}

	new->data = value;
	new->link = NULL;
	pre->link = new;

	return head;
}

int main(void) // �������� ����
{
	ListNode* list = NULL;
	int n, key;

	scanf("%d", &n);
	while (n != -1) {
		list = insert_last(list, n);
		scanf("%d", &n);
	}
	scanf("%d", &key);
	list = insert_sorted(list, key);
	display(list);
}