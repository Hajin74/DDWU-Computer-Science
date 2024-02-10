#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int midterm;
	int final;
} Score;

void printScore(Score* p) {
	printf("중간고사 성적은 %d\n", p->midterm);
	printf("학기말고사 성적은 %d\n", p->final);
}

Score* biggerScore(Score* p1, Score* p2) {
	int p1_score = p1->midterm + p1->final;
	int p2_score = p2->midterm + p2->final;

	if (p1_score >= p2_score) {
		return p1;
	}
	else {
		return p2;
	}
}

Score* totalScore(Score* p1, Score* p2) {
	Score* temp; // Score 타입의 변수를 가리키는 포인터 temp

	temp = (Score*)malloc(sizeof(Score));
	temp->midterm = p1->midterm + p2->midterm;
	temp->final = p1->final + p2->final;
}

Score* createScore(int m, int f) {
	Score* temp;

	temp = (Score*)malloc(sizeof(Score));
	temp->midterm = m;
	temp->final = f;

	return temp;
}

int main(void) {
	Score s1, s2; // 포인터 p1, p2 대신에 구조체변수 s1, s2
	Score* p3; // 포인터 변수 p3

	// 값 대입
	s1.midterm = 50;
	s1.final = 100;
	s2.midterm = 70;
	s2.final = 70;

	printScore(&s1);
	printScore(&s2);

	printf("---------------------------\n");
	printf("둘중 성적이 좋은 점수:\n");
	printScore(biggerScore(&s1, &s2)); // 포인터 값, 즉, 구조체변수의 레퍼런스가 인자여야함

	printf("---------------------------\n");
	printf("두 성적의 총 합:\n");
	printScore(totalScore(&s1, &s2)); // 포인터 값, 즉, 구조체변수의 레퍼런스가 인자여야함

	printf("---------------------------\n");
	p3 = createScore(100, 100);
	printScore(p3); // p3가 포인터 즉, 구조체변수의 레퍼런스 값이니 그대로 넣어도됨
}