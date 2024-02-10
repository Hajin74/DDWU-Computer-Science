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

int bestStudent(Student* m, int size)
{
	// �ۼ��ؼ� ���� 
	int i, max = 0, maxIndex = 0;

	for (i = 0; i < size; i++) {
		if (m[i].mid + m[i].final > max) {
			max = m[i].mid + m[i].final;
			maxIndex = i;
		}
	}

	return maxIndex;
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
	int StudentNum = 0;
	int choice;

	scanf("%d", &choice);

	while (choice != -1) {
		readNewStudent(Students, &StudentNum); // �� ȸ�� ������ �о� ���δ�
		scanf("%d", &choice);
	}

	calculateGrade(Students, StudentNum); // ��� �л��� ������ ���

	printStudent(&Students[bestStudent(Students, StudentNum)]);
}
