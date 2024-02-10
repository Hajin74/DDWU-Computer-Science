#include <stdio.h>
#include <malloc.h>

typedef int element; // ����� Ÿ��

typedef struct QueueNode { // ť�� ����� Ÿ��
	element item;
	struct QueueNode* link;
} QueueNode;

typedef struct { // ť ADT ����
	QueueNode* front, * rear;
} QueueType;

// ���� �Լ�
void error(char* message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
}

// �ʱ�ȭ �Լ�
void init(QueueType* q) {
	q->front = q->rear = NULL;
}

// ���� ���� ���� �Լ�
int is_empty(QueueType* q) {
	return q->front == NULL;
	// or return q->rear == NULL;
	// �� �� �ϳ��� NULL�̸� �������� ������ NULL��.
}

// ��ȭ ���� ���� �Լ�
int is_full(QueueType* q) {
	return 0;
	// �׻� ����, ��ȭ������ ���� ����. ���Ḯ��Ʈ�� �����Ͽ� �������� �����ϹǷ�.
}

// ���� �Լ�
void enqueue(QueueType* q, element item) {
	QueueNode* temp = (QueueNode*)malloc(sizeof(QueueNode));

	if (temp == NULL) {
		error("�޸𸮸� �Ҵ��� �� �����ϴ�.");
	}
	else {
		temp->item = item;
		temp->link = NULL;

		if (is_empty(q)) {
			q->front = temp;
			q->rear = temp;
		}
		else {
			q->rear->link = temp;
			q->rear = temp;
		}
	}
}

// ���� �Լ�
element dequeue(QueueType* q) {
	QueueNode* temp = q->front;
	element item;

	if (is_empty(q)) {
		error("ť�� ����ֽ��ϴ�.");
	}
	else {
		item = temp->item;
		q->front = q->front->link;
		
		if (q->front == NULL)
			q->rear = NULL;

		free(temp);
		return item;
	}
}

// ť �׽�Ʈ �Լ�
int main(void) {
	QueueType q;

	init(&q);

	enqueue(&q, 1);
	enqueue(&q, 2);
	enqueue(&q, 3);

	printf("dequeue()=%d\n", dequeue(&q));
	printf("dequeue()=%d\n", dequeue(&q));
	printf("dequeue()=%d\n", dequeue(&q));
}