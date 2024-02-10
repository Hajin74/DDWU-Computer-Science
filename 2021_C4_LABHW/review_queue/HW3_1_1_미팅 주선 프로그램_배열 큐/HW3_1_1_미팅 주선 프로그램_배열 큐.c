#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_QUEUE_SIZE 3
#define MAX_STRING 10

typedef struct {
	char name[MAX_STRING];
} element;

typedef struct {
	element list[MAX_QUEUE_SIZE];
	int front;
	int rear;
} QueueType;

// ����
void error(char* msg) {
	fprintf(stderr, "%s\n", msg);
}

// �ʱ�ȭ
void init(QueueType* q) {
	q->front = 0;
	q->rear = 0;
}

// ���� ����
int is_empty(QueueType* q) {
	return (q->front == q->rear);
}

// ��ȭ ����
int is_full(QueueType* q) {
	return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}

// ����
void enqueue(QueueType* q, element item) {
	if (is_full(q)) {
		error("ť�� ��ȭ�����Դϴ�.");
		return;
	}

	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE; // 1) rear�� �ϳ� ������Ű��
	q->list[q->rear] = item; // 2) data�� �ֱ�
}

// ����
element dequeue(QueueType* q) {
	element item;

	if (is_empty(q)) {
		error("ť�� ��������Դϴ�.");
		return;
	}

	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	item = q->list[q->front];

	return item;
}

// ������
element peek(QueueType* q) {
	if (is_empty(q)) {
		error("ť�� ��������Դϴ�.");
		return;
	}

	return q->list[(q->front + 1) % MAX_QUEUE_SIZE]; 
}

// ���
void print_queue(QueueType* q) {
	int i;

	// empty�� �ƴҶ��� ����ؾ� ������°� �Ǿ����� �����Ⱚ�� ��¾��� �� ����
	if (!is_empty(q)) {
		for (i = (q->front + 1) % MAX_QUEUE_SIZE; i <= q->rear; i++) {
			printf("%s ", (q->list[i]).name);
		}
	}
	printf("\n");
}

// ����� ��
int get_count(QueueType* q) {
	int count = 0;
	int i;

	if (!is_empty(q)) {
		for (i = (q->front + 1) % MAX_QUEUE_SIZE; i <= q->rear; i++) {
			count++;
		}
	}

	return count;
}

// ��Ī �Լ�
void try_match(char* name, QueueType* partnerQ, QueueType* myQ) {
	element newPerson;

	if (is_empty(partnerQ)) { // ����ڰ� ���� ����
		printf("���� ����ڰ� �����ϴ�. ");
		if (is_full(myQ)) { // ���� ��⿭�� ���� ����
			printf("����ڰ� ��á���� ���ȸ�� �̿����ּ���.\n");
		}
		else { 
			strcpy(&newPerson.name, name);
			enqueue(myQ, newPerson);
			printf("��ٷ��ֽʽÿ�.\n");
		}
	}
	else { // ����ڰ� �ִ� ����
		strcpy(&newPerson.name, name);
		enqueue(myQ, newPerson);
		printf("Ŀ���� ź���߽��ϴ�! %s %s\n", dequeue(myQ).name, dequeue(partnerQ).name);
	}
}

int main(void) {
	QueueType manQ, womanQ;
	char choice;
	char name[MAX_STRING];
	char sex;

	init(&manQ);
	init(&womanQ);

	printf("���� �ּ� ���α׷��Դϴ�.\n");
	do {
		printf("i(nsert, ���Է�), c(heck, ����� üũ), q(uit):");
		scanf("%c", &choice);

		switch (choice) {
			case 'i':
				printf("�̸��� �Է�:");
				scanf("%s", name);
				while (getchar() != '\n');
				printf("������ �Է�(m or f):");
				scanf("%c", &sex);

				// queue ��ü�� ��⿭�� ��Ÿ���Ƿ� �ٷ� ��⿭�� ���� �ʰ� try-match()
				if (sex == 'f')
					try_match(name, &manQ, &womanQ);
				else if (sex == 'm')
					try_match(name, &womanQ, &manQ);

				break;
			case 'c':
				printf("���� ����� %d��: ", get_count(&manQ));
				print_queue(&manQ);
				printf("���� ����� %d��: ", get_count(&womanQ));
				print_queue(&womanQ);

				break;
		}
		while (getchar() != '\n');
	} while (choice != 'q');
}