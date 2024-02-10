#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CHAR_PER_LINE 100

typedef struct {
	char line[MAX_CHAR_PER_LINE];
} element;

typedef struct ListNode {
	element data;
	struct ListNode* link;
} ListNode;

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
ListNode* insert_first(ListNode* head, element value) {
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));

	p->data = value;
	p->link = head;
	head = p;

	return head;
}

// ����: �� ��
ListNode* insert_last(ListNode* head, element value) {
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

// ���
void display_te(ListNode* head) {
	ListNode* p;
	int i = 1;

	printf("--------text edited--------\n");
	for (p = head; p != NULL; p = p->link) {
		printf("(%d) %s", i++, p->data.line);
	}
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

char askChoice(void) {
	char choice;

	printf("------------------------------\n");
	printf("a: �ؽ�Ʈ ���� ���� �߰�\n");
	printf("i: ���� ��ȣ�� ���� �߰�\n");
	printf("d: ���� ��ȣ�� ���� ����\n");
	printf("v: ���� ��ȣ�� �ش� ���� ���\n");
	printf("p: ��ü �ؽ�Ʈ ���\n");
	printf("q: ��\n");

	printf("�޴� ����:");

	scanf("%c", &choice);

	return choice;
}

int main(void) {
	ListNode* list = NULL;
	char choice;
	int lineNb;
	element newElement;

	while ((choice = askChoice()) != 'q') {
		switch (choice) {
			case 'a':
				printf("�ؽ�Ʈ ���� ������ ����: ");
				while (getchar() != '\n');
				fgets(newElement.line, MAX_CHAR_PER_LINE, stdin);

				list = insert_last(list, newElement);
				display_te(list);

				break;
			case 'i':
				printf("������ ���� ��ȣ: ");
				scanf("%d", &lineNb);
				while (getchar() != '\n');
				printf("������ ����: ");
				fgets(newElement.line, MAX_CHAR_PER_LINE, stdin);

				list = insert_pos(list, lineNb - 1, newElement);
				display_te(list);

				break;
			case 'd':
				printf("������ ���� ��ȣ: ");
				while (getchar() != '\n');
				scanf("%d", &lineNb);

				list = delete_pos(list, lineNb - 1);
				display_te(list);
				while (getchar() != '\n');;

				break;
			case 'v':
				printf("����� ���� ��ȣ: ");
				while (getchar() != '\n');
				scanf("%d", &lineNb);

				while (getchar() != '\n');
				printf("(%d) %s", lineNb, get_entry(list, lineNb - 1).line);
				
				break;
			case 'p':
				display_te(list);
				while (getchar() != '\n');

				break;
		}
	}
}