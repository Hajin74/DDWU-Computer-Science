#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct ListNode {
	element data;
	struct ListNode* link; // �ڱ� ���� ����ü
} ListNode; // ����Ʈ ��� ����

// ����
void error(char* msg) {
	fprintf(stderr, "%s\n", msg);
	//exit(1);
}

// ����: pre��� �ڿ�
ListNode* insert_next(ListNode* head, ListNode* pre, element value) {
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));

	p->data = value;
	p->link = pre->link;
	pre->link = p;

	return head;
}

// ����: �� ó����
ListNode* insert_first(ListNode* head, int value) {
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));

	p->data = value;
	p->link = head;
	head = p;

	return head;
}

// ����: �� ��
ListNode* insert_last(ListNode* head, int value) {
	ListNode* temp = head;
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));

	p->data = value;
	p->link = NULL;

	if (head == NULL) // ��尡 0���� ��
		head = p;
	else {
		while (temp->link != NULL) // ��尡 1���̻��� ��
			temp = temp->link;
		temp->link = p;
	}

	return head;
}

// ����: pre��� ����
ListNode* delete_next(ListNode* head, ListNode* pre) {
	ListNode* removed;

	removed = pre->link;
	pre->link = removed->link;
	free(removed);

	return head;
}

// ����: �� ó��
ListNode* delete_first(ListNode* head) {
	ListNode* removed;

	if (head == NULL)
		error("������ �׸��� ����");
	else {
		removed = head;
		head = removed->link;
		free(removed);
	}

	return head;
}

// ����: �� ��
ListNode* delete_last(ListNode* head) {
	ListNode* temp = head;
	ListNode* pretemp = (ListNode*)malloc(sizeof(ListNode));
	ListNode* removed;

	if (head == NULL) // ��� 0��
		error("������ �׸��� ����");

	if (temp->link == NULL) { // ��� 1��
		head = NULL;
		free(temp);
	}
	else { // ��� 2�� �̻�
		while (temp->link != NULL) {
			pretemp = temp;
			temp = temp->link;
		}
		pretemp->link = NULL;
		free(temp);
	}

	return head;
}

// ���
void print_list(ListNode* head) {
	ListNode* p;

	for (p = head; p != NULL; p = p->link)
		printf("%d->", p->data);
	printf("\n");
}

// �˻�, ��ȯ���� ListNode
ListNode* search(ListNode* head, int x) {
	ListNode* p;

	for (p = head; p != NULL; p = p->link) {
		if (p->data == x) {
			return p;
		}
	}

	return NULL;
}

// ����
ListNode* concat(ListNode* head1, ListNode* head2) {
	ListNode* p;

	if (head1 == head2)
		return head2;
	else if (head2 == NULL)
		return head1;
	else {
		p = head1;
		while (p->link != NULL)
			p = p->link;
		p->link = head2;

		return head1;
	}
}

// ����
ListNode* reverse(ListNode* head) {
	// ��ȸ �����ͷ� p, q, r�� ���
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

// HW1_2, ���� �߰��� �Լ���

// item�� ����Ʈ�� �ִ��� Ȯ��
int is_in_list(ListNode* head, element item) {
	ListNode* p;

	for (p = head; p != NULL; p = p->link) {
		if (p->data == item)
			return 1;
	}

	return 0;
}

// �ܼ����Ḯ��Ʈ�� �����ϴ� ����� �� ��ȯ
int get_length(ListNode* head) {
	ListNode* p;
	int length = 0;

	for (p = head; p != NULL; p = p->link) {
		length++;
	}

	return length;
}

// �ܼ����Ḯ��Ʈ�� ��� ������ ���� ���� �� ��ȯ
int get_total(ListNode* head) {
	ListNode* p;
	int total = 0;

	for (p = head; p != NULL; p = p->link) {
		total += p->data;
	}

	return total;
}

// pos��ġ�� �ִ� ����� data�� ��ȯ
element get_entry(ListNode* head, int pos) {
	ListNode* p = head;
	int i = 0;

	while (i < pos) {
		p = p->link;
		i++;
	}

	return p->data;
}

// pos��ġ�� ��带 ����
ListNode* delete_pos(ListNode* head, int pos) {
	ListNode* p = head;
	int i = 1;

	while (i < pos) {
		p = p->link;
		i++;
	}
	head = delete_next(head, p);

	return head;
}

// �ش��ϴ� ���� ã�Ƽ� ����
ListNode* delete_by_key(ListNode* head, int key) {
	ListNode* p = head;
	int i = 0;

	for (p = head; p != NULL; p = p->link) {
		if (p->data == key)
			return delete_pos(head, i);
		i++;
	}

	return NULL;
}

// pos ��ġ�� value�� ���� ��� �߰�
ListNode* insert_pos(ListNode* head, int pos, element value) {
	ListNode* p = head;
	int i;

	if (pos == 0) {
		return insert_first(head, value);
	}
	else {
		for (i = 1; i < pos; i++) {
			p = p->link;
		}

		return insert_next(head, p, value);
	}
}

int main(void) {
	ListNode* list1 = NULL, * list2 = NULL, * list3;
	element item;
	int index;

	// list1 = 30->20->10->, 10 20 30�� ������ ����
	list1 = insert_first(list1, 10);
	list1 = insert_first(list1, 20);
	list1 = insert_first(list1, 30);
	printf("list1 = ");
	print_list(list1);

	// list1�� �� �� ��� ����, list1 = 20->10
	list1 = delete_first(list1);
	printf("list1 = ");
	print_list(list1);

	// list2 = 11->22->33->44->, 11 22 33 44�� ������ ����
	list2 = insert_last(list2, 11);
	list2 = insert_last(list2, 22);
	list2 = insert_last(list2, 33);
	list2 = insert_last(list2, 44);
	printf("list2 = ");
	print_list(list2);

	// list2�� �� �� ��� ����, list2 = 11->22->33->
	list2 = delete_last(list2);
	printf("list2 = ");
	print_list(list2);

	// list2�� �������� �ٲ� ����Ʈ�� list3�� ����Ű�� �Ѵ�, list3 = 33->22->11->
	list3 = reverse(list2);
	printf("list3 = ");
	print_list(list3);

	// list1�� list3�� ���ļ� list1�� ����Ű�� �Ѵ�, list1 = 20->10->33->22->11->
	list1 = concat(list1, list3);
	printf("list1 = ");
	print_list(list1);

	// is_in_list()
	printf("����Ʈ�� ���� Ȯ���ϰ� ���� ��: ");
	scanf("%d", &item);
	if (is_in_list(list1, item))
		printf("%d�� ����Ʈ�� �ֽ��ϴ�.\n", item);
	else
		printf("%d�� ����Ʈ�� �����ϴ�.\n", item);

	// get_length()
	printf("����Ʈ�� ���̴� %d�Դϴ�.\n", get_length(list1));

	// get_total()
	printf("����Ʈ�� �����͵��� ���� ���� %d�Դϴ�.\n", get_total(list1));

	// get_entry()
	printf("����Ʈ�� Ȯ���ϰ� ���� ��: ");
	scanf("%d", &item);
	printf("%d�� �ִ� ����� ���� %d�Դϴ�.\n", item, get_entry(list1, item));

	// delete_by_key()
	printf("�����ϰ� key��: ");
	scanf("%d", &item);
	list1 = delete_by_key(list1, item);
	printf("list1 = ");
	print_list(list1);

	// insert_pos()
	printf("�����ϰ� ���� ���ϴ� index: ");
	scanf("%d %d", &index, &item);
	list1 = insert_pos(list1, index, item);
	printf("list1 = ");
	print_list(list1);

	return 0;
}