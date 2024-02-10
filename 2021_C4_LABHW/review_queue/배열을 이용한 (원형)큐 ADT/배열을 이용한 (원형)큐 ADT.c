#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 5

typedef int element;

typedef struct {
	element data[MAX_QUEUE_SIZE];
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
	q->data[q->rear] = item; // 2) data�� �ֱ�
}

// ����
element dequeue(QueueType* q) {
	element item;

	if (is_empty(q)) {
		error("ť�� ��������Դϴ�.");
		return;
	}

	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	item = q->data[q->front];

	return item;
}

// ������
element peek(QueueType* q) {
	if(is_empty(q)) {
		error("ť�� ��������Դϴ�.");
		return;
	}

	return q->data[(q->front + 1) % MAX_QUEUE_SIZE]; // front�� ��¥�� ������Ű���ʰ� ������ �� ���¸� ��½��
}

// ���
void queue_print(QueueType* q) {
	int i;

	i = (q->front + 1) % MAX_QUEUE_SIZE;
	while (i <= q->rear) {
		i %= MAX_QUEUE_SIZE;
		printf("%d->", q->data[i]);
		i++;
	}

	printf("��\n");
}

int main(void) {
	QueueType q;

	init(&q);
	printf("front = %d, rear = %d\n", q.front, q.rear);

	enqueue(&q, 1);
	queue_print(&q);
	enqueue(&q, 2);
	queue_print(&q);
	enqueue(&q, 3);
	queue_print(&q);
	enqueue(&q, 4);
	queue_print(&q);
	enqueue(&q, 5);
	queue_print(&q);
	enqueue(&q, 6);
	queue_print(&q);
	enqueue(&q, 7);
	queue_print(&q);
	enqueue(&q, 8);
	queue_print(&q);

	printf("dequeue()=%d\n", dequeue(&q));
	printf("dequeue()=%d\n", dequeue(&q));
	printf("dequeue()=%d\n", dequeue(&q));

	printf("front = %d, rear = %d\n", q.front, q.rear);

	return 0;
}