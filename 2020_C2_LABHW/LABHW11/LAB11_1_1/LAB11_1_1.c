// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 1) typedef���� ����ü Ÿ�� Score �����϶�.
typedef struct score {
	int midterm;
	int final;
} Score;

void printScore(Score s) //1) ���� ���
{
	printf("�߰���� ������ %d\n", s.midterm);
	printf("�б⸻��� ������ %d\n", s.final);
}

Score biggerScore(Score s1, Score s2) //2) ���� ��
{
	if (s1.midterm + s1.final >= s2.midterm + s2.final)
		return s1;
	else
		s2;
}

Score totalScore(Score s1, Score s2) //3) ����
{
	Score total = { s1.midterm + s2.midterm, s1.final + s2.final };
	return total;
}

Score createScore(int m, int f) //4)
{
	Score temp = {m, f};
	return temp;
}

int main(void) {
	Score s1, s2, s3;
	s1.midterm = 50; s1.final = 100;
	s2.midterm = 70; s2.final = 70;

	printf("1)-----------------------------\n");
	printScore(s1);
	printScore(s2);

	printf("2)-----------------------------\n");
	printf("�� �� ������ ���� ����:\n");
	printScore(biggerScore(s1, s2));

	printf("3)-----------------------------\n");
	printf("�� ������ �� ��:\n");
	printScore(totalScore(s1, s2));

	printf("4)-----------------------------\n");
	s3 = createScore(99, 99);
	printScore(s3);
}