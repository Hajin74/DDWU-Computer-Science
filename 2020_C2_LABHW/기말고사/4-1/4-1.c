// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 20

typedef struct {
	char name[MAX];
	int mid;
	int final;
	char grade;
} Student;

void printStudent(Student* m) // �ۼ��ؼ� ����
{	//printStudent(&Students[i]); m = &Students[i];
	// �ۼ�
	printf("%s %d %d %c\n", m->name, m->mid, m->final, m->grade);
}

void readNewStudent(Student* m, int* snPtr) // �ۼ��ؼ� ����
{	//readNewStudent(Students, &StudentNum);
	// �ۼ�
	scanf("%s %d %d\n", m[*snPtr].name, &m[*snPtr].mid, &m[*snPtr].final);
	(*snPtr)++;
}

void calculateGrade(Student* m, int size) // �ۼ��ؼ� ����
{	//calculateGrade(Students, StudentNum); m = &Studnets
	// �ۼ�
	int i;

	for (i = 0; i < size; i++) {
		if (m[i].mid + m[i].final > 100) {
			m[i].grade = 'A';
		}
		else {
			m[i].grade = 'F';
		}
		
	}
}

int main(void) // �������� ����
{
	Student Students[MAX];
	int i;
	int StudentNum = 0;
	int choice;

	scanf("%d", &choice);

	while (choice != -1) {
		readNewStudent(Students, &StudentNum);
		scanf("%d", &choice);
	}

	calculateGrade(Students, StudentNum); 
	for (i = 0; i < StudentNum; i++)
		printStudent(&Students[i]);
}
