// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct student {
	char name[20];
	int midterm;
	int final;
	int average;
} Student;

// typedef 를 사용하여 Student 를 정의
void printStudent(Student* p)
{
	printf("%s\t", p->name);
	printf("%d\t%d\t%d\n", p->midterm, p->final, p->average);
}

void readStudentScore(Student *p) {
	printf("Enter student name: "); //a)
	scanf("%s", p->name); //b)

	printf("Enter midterm and final score: "); //c)
	scanf("%d %d", &p->midterm, &p->final); //d)
}

void calculateStudentAverage(Student* p) {
	p->average = (p->midterm + p->final) / 2;
}

int main(void)
{
	Student s[40], * sp = &s;
	int num, i;

	printf("Enter a number of student:");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		readStudentScore(sp);
		sp++;
	}

	sp = s;
	for (i = 0; i < num; i++)
		calculateStudentAverage(sp++); // e)

	printf("\n 이름\t 중간\t 학기말\t 평균\n");
	sp = s;
	for (i = 0; i < num; i++) {
		printStudent(sp);
		sp++;
	}
}
