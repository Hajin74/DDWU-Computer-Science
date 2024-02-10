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
	struct student s[3];
	char name[20];
	int i;

	for (i = 0; i < 3; i++) {
		printf("Enter student name: ");
		scanf("%s", name);
		strcpy(s[i].name, name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &s[i].midterm, &s[i].final);
	}

	printf("\n이름\t중간\t학기말\n");
	for (i = 0; i < 3; i++) {
		printf("%s\t%d\t%d\n", s[i].name, s[i].midterm, s[i].final);
	}
}