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

int main(void)
{
	CClass cp;
	Student all = { "Total", 0, 0, 0 };

	printf("Enter a number of student:");
	scanf("%d", &cp.num);

	readClass(&cp); // 앞 코드의 a)부분 대치

	calculateClassAverage(&cp); // 앞 코드의 b)부분 대치

	printf("\n이름\t중간\t학기말\t평균\n");
	printClass(&cp);
}