#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode { // �ڱ� ���� ����ü
	element data;
	struct ListNode* link;
} ListNode;

ListNode* insert_first(ListNode* head, int value) {
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));

	p->data = value;
	p->link = head;
	head = p;

	return head;
}

ListNode* insert_last(ListNode* head, element value) {
	ListNode* p;
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->data = value;
	newNode->link = NULL;

	if (head == NULL) {
		head = newNode;
	}
	else {
		for (p = head; p->link != NULL; p = p->link);
		p->link = newNode;
	}

	return head;
}

void print_list(ListNode* head) {
	ListNode* p;

	for (p = head; p != NULL; p = p->link) {
		printf("%d->", p->data);
	}
	printf("\n");
}

ListNode* delete_first(ListNode* head) {
	ListNode* removed;

	if (head == NULL)
		return NULL;

	removed = head;
	head = removed->link;
	free(removed);

	return head;
}

ListNode* delete_last(ListNode* head) {
	ListNode* temp = head;
	ListNode* prevTemp, * removed;

	prevTemp = (ListNode*)malloc(sizeof(ListNode));

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

ListNode* concat(ListNode* head1, ListNode* head2) {
	ListNode* p;

	if (head1 == NULL)
		return head2;
	else if (head2 == NULL)
		return head1;
	else {
		p = head1;
		while (p->link != NULL) {
			p = p->link;
		}
		p->link = head2;

		return head1;
	}
}

ListNode* delete_next(ListNode* head, ListNode* pre) {
	ListNode* p = pre->link;
	pre->link = p->link;
	free(p);

	return head;
}

ListNode* insert_next(ListNode *head, ListNode* pre, element value) {
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	p->link = pre->link;
	pre->link = p;

	return head;
}
// (A) ���ο� �Լ�

int is_in_list(ListNode* head, element item) {
	ListNode* p = head;

	while (p != NULL) {
		if (p->data == item)
			return 1;
		p = p->link;
	}

	return 0;
}

int get_length(ListNode* head) {
	ListNode* p = head;
	int length = 0;

	while (p != NULL) {
		length++;
		p = p->link;
	}

	return length;
}

int get_total(ListNode* head) {
	ListNode* p = head;
	int total = 0;

	while (p != NULL) {
		total += p->data;
		p = p->link;
	}

	return total;
}

element get_entry(ListNode* head, int pos) {
	ListNode* p = head;
	int i;

	for (i = 0; i < pos - 1; i++) {
		p = p->link;
	}

	return p->data;
}

ListNode* delete_pos(ListNode* head, int pos) {
	ListNode* p = head;
	int i;

	if (pos == 0) {
		return delete_first(head);
	}
	else {
		for (i = 0; i < pos - 1; i++) {
			p = p->link;
		}

		return delete_next(head, p);
	}
}

ListNode* delete_by_key(ListNode* head, int key) {
	ListNode* p = head;
	int i = 0;

	while (p != NULL) {
		if (p->data == key) {
			return delete_pos(head, i);
		}
		p = p->link;
		i++;
	}

	printf("%d���� ���� ���� �������� �ʴ´�\n", key);
	return head;
}

ListNode* insert_pos(ListNode* head, int pos, element value) {
	ListNode* p = head;
	int i;

	if (pos == 0) {
		return insert_first(head, value);
	}
	else {
		for (i = 0; i < pos - 1; i++) {
			p = p->link;
		}

		return insert_next(head, p, value);
	}
}

int main(void) {
	ListNode* list1 = NULL, * list2 = NULL, * list3;
	int num, pos;

	list1 = insert_first(list1, 10);
	list1 = insert_first(list1, 20);
	list1 = insert_first(list1, 30);
	printf("list1 = ");
	print_list(list1);

	list1 = delete_first(list1);
	printf("list1 = ");
	print_list(list1);

	//printf("-------------------------------\n");

	list2 = insert_last(list2, 11);
	list2 = insert_last(list2, 22);
	list2 = insert_last(list2, 33);
	list2 = insert_last(list2, 44);
	printf("list2 = ");
	print_list(list2);

	list2 = delete_last(list2);
	printf("list2 = ");
	print_list(list2);

	//printf("-------------------------------\n");

	list3 = reverse(list2);
	printf("list3 = ");
	print_list(list3);

	//printf("-------------------------------\n");

	list1 = concat(list1, list3);
	printf("list1 = ");
	print_list(list1);

	printf("---------------(A �׽�Ʈ)----------------\n");

	printf("���� ���� �˻��� ��: ");
	scanf("%d", &num);

	if (is_in_list(list1, num))
		printf("%d�� ����Ʈ�� �����Ѵ�.\n", num);
	else {
		printf("%d�� ����Ʈ�� �������� �ʴ´�.\n", num);
	}

	printf("�ܼ� ���� ����Ʈ�� �����ϴ� ����� ���� %d�Դϴ�\n", get_length(list1));
	printf("�ܼ� ���� ����Ʈ�� ��� ������ ���� ���� ���� %d�Դϴ�\n", get_total(list1));

	printf("�� ��° ��ġ�� ��带 Ȯ���ϰ� �ͽ��ϱ�: ");
	scanf("%d", &num);
	printf("%d��° ��ġ�� ����� data�� %d�Դϴ�.\n", num, get_entry(list1, num));

	printf("�����ϰ� ���� ���: ");
	scanf("%d", &num);
	list1 = delete_by_key(list1, num);
	printf("list1 = ");
	print_list(list1);

	printf("���ϴ� ��ġ�� ���ϴ� ��� ��: ");
	scanf("%d %d", &pos, &num);
	list1 = insert_pos(list1, pos, num);
	printf("list1 = ");
	print_list(list1);
}