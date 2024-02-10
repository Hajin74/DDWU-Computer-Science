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

// 오류
void error(char* msg) {
	fprintf(stderr, "%s\n", msg);
	//exit(1);
}

// 삽입: pre노드 뒤에
ListNode* insert_next(ListNode* head, ListNode* pre, element value) {
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));

	p->data = value;
	p->link = pre->link;
	pre->link = p;

	return head;
}

// 삽입: 맨 처음에
ListNode* insert_first(ListNode* head, element value) {
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));

	p->data = value;
	p->link = head;
	head = p;

	return head;
}

// 삽입: 맨 뒤
ListNode* insert_last(ListNode* head, element value) {
	ListNode* temp = head;
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));

	p->data = value;
	p->link = NULL;

	if (head == NULL) // 노드가 0개일 때
		head = p;
	else {
		while (temp->link != NULL) // 노드가 1개이상일 때
			temp = temp->link;
		temp->link = p;
	}

	return head;
}

// pos 위치에 value를 갖는 노드 추가
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

// 삭제: pre노드 다음
ListNode* delete_next(ListNode* head, ListNode* pre) {
	ListNode* removed;

	removed = pre->link;
	pre->link = removed->link;
	free(removed);

	return head;
}

// 삭제: 맨 처음
ListNode* delete_first(ListNode* head) {
	ListNode* removed;

	if (head == NULL)
		error("삭제할 항목이 없음");
	else {
		removed = head;
		head = removed->link;
		free(removed);
	}

	return head;
}

// 삭제: 맨 뒤
ListNode* delete_last(ListNode* head) {
	ListNode* temp = head;
	ListNode* pretemp = (ListNode*)malloc(sizeof(ListNode));
	ListNode* removed;

	if (head == NULL) // 노드 0개
		error("삭제할 항목이 없음");

	if (temp->link == NULL) { // 노드 1개
		head = NULL;
		free(temp);
	}
	else { // 노드 2개 이상
		while (temp->link != NULL) {
			pretemp = temp;
			temp = temp->link;
		}
		pretemp->link = NULL;
		free(temp);
	}

	return head;
}

// pos위치의 노드를 삭제
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

// 출력
void display_te(ListNode* head) {
	ListNode* p;
	int i = 1;

	printf("--------text edited--------\n");
	for (p = head; p != NULL; p = p->link) {
		printf("(%d) %s", i++, p->data.line);
	}
}

// pos위치에 있는 노드의 data를 반환
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
	printf("a: 텍스트 끝에 라인 추가\n");
	printf("i: 라인 번호로 라인 추가\n");
	printf("d: 라인 번호로 라인 삭제\n");
	printf("v: 라인 번호로 해당 라인 출력\n");
	printf("p: 전체 텍스트 출력\n");
	printf("q: 끝\n");

	printf("메뉴 선택:");

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
				printf("텍스트 끝에 삽입할 라인: ");
				while (getchar() != '\n');
				fgets(newElement.line, MAX_CHAR_PER_LINE, stdin);

				list = insert_last(list, newElement);
				display_te(list);

				break;
			case 'i':
				printf("삽입할 라인 번호: ");
				scanf("%d", &lineNb);
				while (getchar() != '\n');
				printf("삽입할 라인: ");
				fgets(newElement.line, MAX_CHAR_PER_LINE, stdin);

				list = insert_pos(list, lineNb - 1, newElement);
				display_te(list);

				break;
			case 'd':
				printf("삭제할 라인 번호: ");
				while (getchar() != '\n');
				scanf("%d", &lineNb);

				list = delete_pos(list, lineNb - 1);
				display_te(list);
				while (getchar() != '\n');;

				break;
			case 'v':
				printf("출력할 라인 번호: ");
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