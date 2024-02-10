// 20200988 ��ǻ���а� ������
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

	readClass(&cp); // �� �ڵ��� a)�κ� ��ġ

	calculateClassAverage(&cp); // �� �ڵ��� b)�κ� ��ġ

	printf("\n�̸�\t�߰�\t�б⸻\t���\n");
	printClass(&cp);
}