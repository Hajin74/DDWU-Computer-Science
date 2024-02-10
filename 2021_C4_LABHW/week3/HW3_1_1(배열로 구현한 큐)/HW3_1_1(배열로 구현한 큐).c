#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 3

typedef struct {
	char name[10];
	char sex;
} element;

typedef struct {
	element data[MAX_QUEUE_SIZE];
	int front, rear;
} QueueType;

// ����
void error(char* message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
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

// ���� �Լ�
void enqueue(QueueType* q, element item) {
	if (is_full(q))
		error("ť�� ��ȭ�����Դϴ�.");

	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->data[q->rear] = item;
}

// ���� �Լ�
element dequeue(QueueType* q) {
	if (is_empty(q))
		error("ť�� ��������Դϴ�.");

	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->data[q->front];
}

// ������ �Լ�
element peek(QueueType* q) {
	if (is_empty(q))
		error("ť�� ��������Դϴ�.");

	return q->data[(q->front) + 1];
}

// ����� ī���� �Լ�
int get_count(QueueType* q) {
	if (q->front <= q->rear) {
		return q->rear - q->front;
	}
	else {
		return MAX_QUEUE_SIZE - (q->front - q->rear);
	}
}

// ����� ��� �Լ�
void print_queue(QueueType* q) {
	int i;

	// empty�� �ƴҶ��� ����ؾ� ������°� �Ǿ����� �����Ⱚ�� ��¾��� �� ����
	if (!is_empty(q)) { 
		for (i = (q->front + 1) % MAX_QUEUE_SIZE; i <= q->rear; i++) {
			printf("%s ", (q->data[i]).name);
		}
	}
	printf("\n");
}

// ��Ī �Լ�: �� �߿� �ϳ��� empty��� ��Ī ����
void match(QueueType *q1, QueueType *q2, element person) {
	if (is_empty(q2)) { // �̼��� ������� �� ���
		printf("���� ����ڰ� �����ϴ�. ");

		if (is_full(q1)) { // ���� ������� �� �� ���
			printf("����ڰ� �� á���� ���� ��ȸ�� �̿����ֽʽÿ�\n");
		}
		else { // ���� ����ٿ� �ڸ��� �־ ��⿭ ���
			printf("��ٷ��ֽʽÿ�.\n");
			enqueue(q1, person);
		}
	}
	else {
		enqueue(q1, person);
		printf("Ŀ���� ź���߽��ϴ�! %s�� %s\n", dequeue(q1).name, dequeue(q2).name);
	}
}

int main(void) {
	QueueType manQ, womanQ;
	element newPerson;
	char choice;

	init(&manQ);
	init(&womanQ);

	printf("���� �ּ� ���α׷��Դϴ�.\n");

	do {
		printf("i(insert,���Է�), c(check, ����� üũ), q(quit): ");
		scanf("%c", &choice);

		if (choice == 'i') {
			printf("�̸��� �Է�: ");
			scanf("%s", newPerson.name);

			while (getchar() != '\n');

			printf("������ �Է�: ");
			scanf("%c", &newPerson.sex);

			if (newPerson.sex == 'f') {
				match(&womanQ, &manQ, newPerson);
			}
			else {
				match(&manQ, &womanQ, newPerson);
			}
		}
		else if (choice == 'c') {
			printf("���� ����� %d��: ", get_count(&manQ));
			print_queue(&manQ);
			printf("���� ����� %d��: ", get_count(&womanQ));
			print_queue(&womanQ);
		}
		else {
			printf("�׷� �������� �����ϴ�.");
		}

		while (getchar() != '\n');
	} while (choice != 'q');
}