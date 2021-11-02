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

// 오류
void error(char* msg) {
	fprintf(stderr, "%s\n", msg);
}

// 초기화
void init(QueueType* q) {
	q->front = 0;
	q->rear = 0;
}

// 공백 검출
int is_empty(QueueType* q) {
	return (q->front == q->rear);
}

// 포화 검출
int is_full(QueueType* q) {
	return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}

// 삽입
void enqueue(QueueType* q, element item) {
	if (is_full(q)) {
		error("큐가 포화상태입니다.");
		return;
	}

	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE; // 1) rear를 하나 증가시키고
	q->list[q->rear] = item; // 2) data를 넣기
}

// 삭제
element dequeue(QueueType* q) {
	element item;

	if (is_empty(q)) {
		error("큐가 공백상태입니다.");
		return;
	}

	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	item = q->list[q->front];

	return item;
}

// 엿보기
element peek(QueueType* q) {
	if (is_empty(q)) {
		error("큐가 공백상태입니다.");
		return;
	}

	return q->list[(q->front + 1) % MAX_QUEUE_SIZE]; 
}

// 출력
void print_queue(QueueType* q) {
	int i;

	// empty가 아닐때만 출력해야 공백상태가 되었을시 쓰레기값을 출력안할 수 있음
	if (!is_empty(q)) {
		for (i = (q->front + 1) % MAX_QUEUE_SIZE; i <= q->rear; i++) {
			printf("%s ", (q->list[i]).name);
		}
	}
	printf("\n");
}

// 대기자 수
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

// 매칭 함수
void try_match(char* name, QueueType* partnerQ, QueueType* myQ) {
	element newPerson;

	if (is_empty(partnerQ)) { // 대상자가 없는 상태
		printf("아직 대상자가 없습니다. ");
		if (is_full(myQ)) { // 본인 대기열이 꽉찬 상태
			printf("대기자가 꽉찼으니 담기회를 이용해주세요.\n");
		}
		else { 
			strcpy(&newPerson.name, name);
			enqueue(myQ, newPerson);
			printf("기다려주십시요.\n");
		}
	}
	else { // 대상자가 있는 상태
		strcpy(&newPerson.name, name);
		enqueue(myQ, newPerson);
		printf("커플이 탄생했습니다! %s %s\n", dequeue(myQ).name, dequeue(partnerQ).name);
	}
}

int main(void) {
	QueueType manQ, womanQ;
	char choice;
	char name[MAX_STRING];
	char sex;

	init(&manQ);
	init(&womanQ);

	printf("미팅 주선 프로그램입니다.\n");
	do {
		printf("i(nsert, 고객입력), c(heck, 대기자 체크), q(uit):");
		scanf("%c", &choice);

		switch (choice) {
			case 'i':
				printf("이름을 입력:");
				scanf("%s", name);
				while (getchar() != '\n');
				printf("성별을 입력(m or f):");
				scanf("%c", &sex);

				// queue 자체가 대기열을 나타내므로 바로 대기열에 넣지 않고 try-match()
				if (sex == 'f')
					try_match(name, &manQ, &womanQ);
				else if (sex == 'm')
					try_match(name, &womanQ, &manQ);

				break;
			case 'c':
				printf("남성 대기자 %d명: ", get_count(&manQ));
				print_queue(&manQ);
				printf("여성 대기자 %d명: ", get_count(&womanQ));
				print_queue(&womanQ);

				break;
		}
		while (getchar() != '\n');
	} while (choice != 'q');
}