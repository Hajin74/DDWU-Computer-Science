// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 1) typedef���� ����ü Ÿ�� Score �����϶�.
typedef struct score {
	int midterm;
	int final;
} Score;

void printScore(Score *p) //1) ���� ���
{
	printf("�߰���� ������ %d\n", p->midterm);
	printf("�б⸻��� ������ %d\n", p->final);
}

Score *biggerScore(Score *p1, Score *p2) //2) ���� ��
{
	if (p1->midterm + p1->final >= p2->midterm + p2->final)
		return p1;
	else
		p2;
}

void totalScore(Score *p1, Score *p2, Score *tp) //3) ����
{
	tp->midterm = p1->midterm + p2->midterm;
	tp->final = p1->final + p2->final;
}

Score createScore(int m, int f) //4)
{
	Score temp = { m, f };
	return temp;
}

int main(void) {
	Score s1, s2, temp;
	s1.midterm = 50; 
	s1.final = 100;
	s2.midterm = 70; 
	s2.final = 70;

	printf("1)-----------------------------\n");
	printScore(&s1);
	printScore(&s2);

	printf("2)-----------------------------\n");
	printf("�� �� ������ ���� ����:\n");
	printScore(biggerScore(&s1, &s2));

	printf("3)-----------------------------\n");
	printf("�� ������ �� ��:\n");
	totalScore(&s1, &s2, &temp);
	printScore(&temp);

	printf("4)-----------------------------\n");
	temp = createScore(99, 99);
	printScore(&temp);
}