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

// 오류
void error(char* message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
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

// 삽입 함수
void enqueue(QueueType* q, element item) {
	if (is_full(q))
		error("큐가 포화상태입니다.");

	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->data[q->rear] = item;
}

// 삭제 함수
element dequeue(QueueType* q) {
	if (is_empty(q))
		error("큐가 공백상태입니다.");

	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->data[q->front];
}

// 엿보기 함수
element peek(QueueType* q) {
	if (is_empty(q))
		error("큐가 공백상태입니다.");

	return q->data[(q->front) + 1];
}

// 대기자 카운팅 함수
int get_count(QueueType* q) {
	if (q->front <= q->rear) {
		return q->rear - q->front;
	}
	else {
		return MAX_QUEUE_SIZE - (q->front - q->rear);
	}
}

// 대기자 출력 함수
void print_queue(QueueType* q) {
	int i;

	// empty가 아닐때만 출력해야 공백상태가 되었을시 쓰레기값을 출력안할 수 있음
	if (!is_empty(q)) { 
		for (i = (q->front + 1) % MAX_QUEUE_SIZE; i <= q->rear; i++) {
			printf("%s ", (q->data[i]).name);
		}
	}
	printf("\n");
}

// 매칭 함수: 둘 중에 하나라도 empty라면 매칭 실패
void match(QueueType *q1, QueueType *q2, element person) {
	if (is_empty(q2)) { // 이성의 대기줄이 빈 경우
		printf("아직 대상자가 없습니다. ");

		if (is_full(q1)) { // 본인 대기줄이 꽉 찬 경우
			printf("대기자가 꽉 찼으니 다음 기회를 이용해주십시요\n");
		}
		else { // 본인 대기줄에 자리가 있어서 대기열 등록
			printf("기다려주십시오.\n");
			enqueue(q1, person);
		}
	}
	else {
		enqueue(q1, person);
		printf("커플이 탄생했습니다! %s과 %s\n", dequeue(q1).name, dequeue(q2).name);
	}
}

int main(void) {
	QueueType manQ, womanQ;
	element newPerson;
	char choice;

	init(&manQ);
	init(&womanQ);

	printf("미팅 주선 프로그램입니다.\n");

	do {
		printf("i(insert,고객입력), c(check, 대기자 체크), q(quit): ");
		scanf("%c", &choice);

		if (choice == 'i') {
			printf("이름을 입력: ");
			scanf("%s", newPerson.name);

			while (getchar() != '\n');

			printf("성별을 입력: ");
			scanf("%c", &newPerson.sex);

			if (newPerson.sex == 'f') {
				match(&womanQ, &manQ, newPerson);
			}
			else {
				match(&manQ, &womanQ, newPerson);
			}
		}
		else if (choice == 'c') {
			printf("남성 대기자 %d명: ", get_count(&manQ));
			print_queue(&manQ);
			printf("여성 대기자 %d명: ", get_count(&womanQ));
			print_queue(&womanQ);
		}
		else {
			printf("그런 선택지는 없습니다.");
		}

		while (getchar() != '\n');
	} while (choice != 'q');
}