// 20200988 컴퓨터학과 유하진
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


// 필요한 함수들의 정의를 추가해서 이를 제출
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

int main(void) // 변경하지 말라
{
	CClass cClass;

	cClass.num = 0; // 초기에는 학생수 0

	readClass(&cClass);
	calculateClassGrade(&cClass); // 학점 계산
	printClass(&cClass); // 학생 정보를 출력
}
