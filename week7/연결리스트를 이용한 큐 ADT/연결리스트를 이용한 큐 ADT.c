#include <stdio.h>
#include <malloc.h>

typedef int element; // 요소의 타입

typedef struct QueueNode { // 큐의 노드의 타입
	element item;
	struct QueueNode* link;
} QueueNode;

typedef struct { // 큐 ADT 구현
	QueueNode* front, * rear;
} QueueType;

// 오류 함수
void error(char* message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
}

// 초기화 함수
void init(QueueType* q) {
	q->front = q->rear = NULL;
}

// 공백 상태 검출 함수
int is_empty(QueueType* q) {
	return q->front == NULL;
	// or return q->rear == NULL;
	// 둘 중 하나가 NULL이면 나머지도 무조건 NULL임.
}

// 포화 상태 검출 함수
int is_full(QueueType* q) {
	return 0;
	// 항상 거짓, 포화상태일 때가 없다. 연결리스트로 구현하여 동적으로 동작하므로.
}

// 삽입 함수
void enqueue(QueueType* q, element item) {
	QueueNode* temp = (QueueNode*)malloc(sizeof(QueueNode));

	if (temp == NULL) {
		error("메모리를 할당할 수 없습니다.");
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

// 삭제 함수
element dequeue(QueueType* q) {
	QueueNode* temp = q->front;
	element item;

	if (is_empty(q)) {
		error("큐가 비어있습니다.");
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

// 큐 테스트 함수
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