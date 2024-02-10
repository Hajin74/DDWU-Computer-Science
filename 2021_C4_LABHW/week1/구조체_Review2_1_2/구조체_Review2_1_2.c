#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int midterm;
	int final;
} Score;

void printScore(Score* p) {
	printf("�߰���� ������ %d\n", p->midterm);
	printf("�б⸻��� ������ %d\n", p->final);
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
	Score* temp; // Score Ÿ���� ������ ����Ű�� ������ temp

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
	Score s1, s2; // ������ p1, p2 ��ſ� ����ü���� s1, s2
	Score* p3; // ������ ���� p3

	// �� ����
	s1.midterm = 50;
	s1.final = 100;
	s2.midterm = 70;
	s2.final = 70;

	printScore(&s1);
	printScore(&s2);

	printf("---------------------------\n");
	printf("���� ������ ���� ����:\n");
	printScore(biggerScore(&s1, &s2)); // ������ ��, ��, ����ü������ ���۷����� ���ڿ�����

	printf("---------------------------\n");
	printf("�� ������ �� ��:\n");
	printScore(totalScore(&s1, &s2)); // ������ ��, ��, ����ü������ ���۷����� ���ڿ�����

	printf("---------------------------\n");
	p3 = createScore(100, 100);
	printScore(p3); // p3�� ������ ��, ����ü������ ���۷��� ���̴� �״�� �־��
}