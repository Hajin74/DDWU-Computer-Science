// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 20

typedef struct {
	char name[MAX];
	int mid;
	int final;
	char grade;
} Student;

void printStudent(Student* m) // 작성해서 제출
{	//printStudent(&Students[i]); m = &Students[i];
	// 작성
	printf("%s %d %d %c\n", m->name, m->mid, m->final, m->grade);
}

void readNewStudent(Student* m, int* snPtr) // 작성해서 제출
{	//readNewStudent(Students, &StudentNum);
	// 작성
	scanf("%s %d %d\n", m[*snPtr].name, &m[*snPtr].mid, &m[*snPtr].final);
	(*snPtr)++;
}

void calculateGrade(Student* m, int size) // 작성해서 제출
{	//calculateGrade(Students, StudentNum); m = &Studnets
	// 작성
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

int main(void) // 변경하지 말라
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
