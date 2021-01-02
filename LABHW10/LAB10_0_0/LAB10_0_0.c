// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	char name[20];
	int midterm;
	int final;
};

int main(void) {
	struct student aStudent;
	char name[20];

	printf("Enter student name: ");
	scanf("%s", name);
	strcpy(aStudent.name, name);
	printf("Enter midterm and final score: ");
	scanf("%d %d", &aStudent.midterm, &aStudent.final);

	printf("\n이름\t중간\t학기말\n");
	printf("%s\t%d\t%d\n", aStudent.name, aStudent.midterm, aStudent.final);
}