#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 5

typedef int element;

typedef struct {
	int front;
	int rear;
	element data[MAX_QUEUE_SIZE];
} QueueType;

// ���� �Լ�
void error(char* msg) {
	fprintf(stderr, "%s\n", msg);
	//exit(1);
}

// �ʱ�ȭ �Լ�
void init(QueueType* q) {
	q->rear = -1;
	q->front = -1;
 }

// ���� ����
int is_empty(QueueType* q) {
	if (q->front == q->rear)
		return 1;

	return 0;
}

// ��ȭ ����
int is_full(QueueType* q) {
	if (q->rear == MAX_QUEUE_SIZE - 1)
		return 1;

	return 0;
}

// ����
void enqueue(QueueType* q, int item) {
	if (is_full(q)) {
		error("ť�� ��ȭ�����Դϴ�.");
		return;
	}
	
	q->data[++(q->rear)] = item;
}

// ����
element dequeue(QueueType* q) {
	element item;

	if (is_empty(q)) {
		error("ť�� ��������Դϴ�.");
		return -1;
	}

	item = q->data[++(q->front)];
	return item;
}

// ���
void queue_print(QueueType* q) {
	int i;

	for (i = q->front + 1; i <= q->rear; i++) {
		printf("%d->", q->data[i]);
	}
	printf("��\n");
}

int main(void) {
	int item;
	QueueType q;

	init(&q);
	//queue_print(&q);

	enqueue(&q, 10);
	queue_print(&q);
	enqueue(&q, 20);
	queue_print(&q);
	enqueue(&q, 30);
	queue_print(&q);
	enqueue(&q, 40);
	queue_print(&q);
	enqueue(&q, 50);
	queue_print(&q);
	enqueue(&q, 10);
	queue_print(&q);

	item = dequeue(&q);
	queue_print(&q);
	item = dequeue(&q);
	queue_print(&q);
	item = dequeue(&q);
	queue_print(&q);

	return 0;
}