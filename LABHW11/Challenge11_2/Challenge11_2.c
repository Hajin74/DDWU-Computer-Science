// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct student {
	char name[20];
	int midterm;
	int final;
	int average;
} Student;

typedef struct cClass {
	int num;
	Student s[40];
} CClass;

void readClass(CClass* p) {
	int i;

	for (i = 0; i < p->num; i++) {
		printf("Enter student name: ");
		scanf("%s", p->s[i].name);

		printf("Enter midterm and final score: ");
		scanf("%d %d", &p->s[i].midterm, &p->s[i].final);
	}
}

void calculateClassAverage(CClass* p) {
	int i;

	for (i = 0; i < p->num; i++) {
		p->s[i].average = (p->s[i].midterm + p->s[i].final) / 2;
	}
}

void printClass(CClass* p) {
	int i;

	for (i = 0; i < p->num; i++) {
		printf("%s\t", p->s[i].name);
		printf("%d\t%d\t%d\n", p->s[i].midterm, p->s[i].final, p->s[i].average);
	}
}

Student calculateAll2(CClass* cp) {
	Student pAll = { "All", 0, 0, 0 };
	int i, total = 0, average;

	for (i = 0; i < cp->num; i++) {
		total += cp->s[i].midterm;
	}
	average = total / cp->num;
	pAll.midterm = average;

	total = 0;
	for (i = 0; i < cp->num; i++) {
		total += cp->s[i].final;
	}
	average = total / cp->num;
	pAll.final = average;

	pAll.average = (pAll.midterm + pAll.final) / 2;

	return pAll;
}

void printStudent(Student* all) {
	printf("All\t");
	printf("%d\t%d\t%d\n", all->midterm, all->final, all->average);
}

int main(void) {
	CClass cp;
	Student all = { "All", 0, 0, 0 };

	printf("Enter a number of student:");
	scanf("%d", &cp.num);

	readClass(&cp);
	calculateClassAverage(&cp);

	printf("\n 이름\t 중간\t 학기말\t 평균\n");
	printClass(&cp);

	printf("----------------------------------\n");
	all = calculateAll2(&cp);
	printStudent(&all);
}