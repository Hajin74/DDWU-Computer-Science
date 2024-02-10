#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_CHAR_PER_LINE 100

typedef struct {
	char line[MAX_CHAR_PER_LINE];
} element;

typedef struct ListNode {
	element data;
	struct ListNode* link;
} ListNode;

void display_te(ListNode* head) {
	ListNode* p;
	int index = 1;

	printf("--------text edited--------\n");
	for (p = head; p != NULL; p = p->link) {
		printf("(%d) %s", index++, p->data.line);
	}
}

ListNode* insert_first(ListNode* head, element value) {
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

ListNode* insert_next(ListNode* head, ListNode* pre, element value) {
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));

	p->data = value;
	p->link = pre->link;
	pre->link = p;

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

ListNode* delete_first(ListNode* head) {
	ListNode* p;

	if (head == NULL)
		return NULL;

	p = head;
	head = p->link;
	free(p);

	return head;
}

ListNode* delete_next(ListNode* head, ListNode* pre) {
	ListNode* p = pre->link;
	pre->link = p->link;
	free(p);

	return head;
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

element get_entry(ListNode* head, int pos) {
	ListNode* p = head;
	int i;

	for (i = 0; i < pos - 1; i++) {
		p = p->link;
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

				printf("������ ����: ");
				while (getchar() != '\n');
				fgets(newElement.line, MAX_CHAR_PER_LINE, stdin);
				
				list = insert_pos(list, lineNb - 1, newElement);
				display_te(list);
				break;

			case 'd':
				printf("������ ���� ��ȣ: ");
				scanf("%d", &lineNb);
				while (getchar() != '\n');
				
				list = delete_pos(list, lineNb - 1);
				display_te(list);
				break;

			case 'v':
				printf("����� ���� ��ȣ: ");
				scanf("%d", &lineNb);
				while (getchar() != '\n');

				printf("(%d) %s", lineNb, get_entry(list, lineNb - 1).line);
				break;

			case 'p':
				display_te(list);
				while (getchar() != '\n');
		}
		fflush(stdin);
	}
}
