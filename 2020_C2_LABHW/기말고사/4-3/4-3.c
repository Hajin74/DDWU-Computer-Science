// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 20

typedef struct {
	char name[MAX];
	int mid;
	int final;
	char grade;
} Student;

typedef struct {
	int num;
	Student s[40];
} CClass;


// �ʿ��� �Լ����� ���Ǹ� �߰��ؼ� �̸� ����
void readClass(CClass* cp) {
	int choice;
	int n = cp->num;
	
	
	scanf("%d", &choice);
	while (choice != -1) {
		scanf("%s %d %d\n", cp->s[n].name, &cp->s[n].mid, &cp->s[n].final);
		n++;
		scanf("%d", &choice);
	}

	cp->num = n;
}

void calculateClassGrade(CClass* cp) {
	int i;

	for (i = 0; i < cp->num; i++) {
		if (cp->s[i].mid + cp->s[i].final > 100) {
			cp->s[i].grade = 'A';
		}
		else {
			cp->s[i].grade = 'F';
		}
	}

	
}

void printClass(CClass *cp) {
	int i;

	for (i = 0; i < cp->num; i++) {
		printf("%s %d %d %c\n", cp->s[i].name, cp->s[i].mid, cp->s[i].final, cp->s[i].grade);
	}
}

int main(void) // �������� ����
{
	CClass cClass;

	cClass.num = 0; // �ʱ⿡�� �л��� 0

	readClass(&cClass);
	calculateClassGrade(&cClass); // ���� ���
	printClass(&cClass); // �л� ������ ���
}
